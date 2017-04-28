#include "stdafx.h"
#include "ExPromise.h"
#include "ExMediaStreamConstraints.h"
#include "ExMediaDevices.h"
#include "ExRTCPeerConnection.h"
#include "ExRTCSessionDescription.h"

#include "ATLBrowserCallback.h"
#include "AsyncEvent.h"
#include "Utils.h"
#include "Plugin.h"
#include "MediaStream.h"
#include "ErrorMessage.h"
#include "RTCError.h"
#include "MediaDeviceInfo.h"
#include "RTCSessionDescription.h"
#include "RTCStats.h"

//
//	ExPromise
//

ExPromise::ExPromise(ExPromiseType eType)
	: ExPromiseBase()
	, m_eType(eType)

{

}

ExPromise::~ExPromise()
{
	m_callback_onRejected = nullptr;
	m_callback_onFulfilled = nullptr;
}

HRESULT ExPromise::then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected /*= nullptr*/)
{
	m_callback_onFulfilled = onFulfilled;
	if (onRejected) {
		m_callback_onRejected = onRejected;
	}
	return S_OK;
}

HRESULT ExPromise::catchh(CComPtr<IDispatch> onRejected)
{
	m_callback_onRejected = onRejected;
	return S_OK;
}

//
//	ExPromiseEnumerateDevices
//

ExPromiseEnumerateDevices::ExPromiseEnumerateDevices()
	: ExPromise(ExPromiseType_EnumerateDevices)
{

}

ExPromiseEnumerateDevices::~ExPromiseEnumerateDevices()
{

}

HRESULT ExPromiseEnumerateDevices::then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected /*= nullptr*/)
{
	RTC_CHECK_HR_RETURN(ExPromise::then(onFulfilled, onRejected)); // call base class implementation

	HRESULT hr = S_OK;
	if (m_callback_onFulfilled) {
		CComQIPtr<IDispatchEx> spDevices;
		CComPtr<IDispatch> spDispatch;
		RTC_CHECK_HR_RETURN(hr = CPlugin::Singleton()->GetDispatch(spDispatch));
		RTC_CHECK_HR_RETURN(hr = ExMediaDevices::enumerateDevices(spDispatch, spDevices));
		ATLBrowserCallback* bcb = new ATLBrowserCallback(RTC_WM_ENUMERATEDEVICES_SUCESS, m_callback_onFulfilled);
		if (bcb) {
			bcb->AddDispatch(spDevices.Detach());
			dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
			RTC_SAFE_RELEASE_OBJECT(&bcb);
		}
	}
	return hr;
}

HRESULT ExPromiseEnumerateDevices::catchh(CComPtr<IDispatch> onRejected)
{
	RTC_CHECK_HR_RETURN(ExPromise::catchh(onRejected)); // call base class implementation
	//RTC_CHECK_HR_RETURN(Start());
	return S_OK;
}


//
//	ExPromiseGetStats
//


ExPromiseGetStats::ExPromiseGetStats(std::shared_ptr<ExRTCPeerConnection > peerconnection, std::shared_ptr<ExMediaStreamTrack> selector /*= nullptr*/)
	: ExPromise(ExPromiseType_GetStats)
	, m_peerconnection(peerconnection)
	, m_selector(selector)
	, m_raised(false)
	, m_pending_onFulfilled(nullptr)
	, m_pending_onRejected(nullptr)
{

}

ExPromiseGetStats::~ExPromiseGetStats()
{
	m_peerconnection = nullptr;
	m_selector = nullptr;
	m_pending_onFulfilled = nullptr;
	m_pending_onRejected = nullptr;
}

HRESULT ExPromiseGetStats::then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected /*= nullptr*/)
{
	RTC_CHECK_HR_RETURN(ExPromise::then(onFulfilled)); // call base class implementation
	RTC_CHECK_HR_RETURN(Start());
	return S_OK;
}

HRESULT ExPromiseGetStats::catchh(CComPtr<IDispatch> onRejected)
{
	RTC_CHECK_HR_RETURN(ExPromise::catchh(onRejected)); // call base class implementation
	RTC_CHECK_HR_RETURN(Start());
	return S_OK;
}

HRESULT ExPromiseGetStats::Start()
{
	if (m_raised) {
		if (m_pending_onFulfilled) {
			RTC_CHECK_HR_RETURN(RaiseOnFulfilled(m_pending_onFulfilled));
			m_pending_onFulfilled = nullptr;
		}
		if (m_pending_onRejected) {
			RTC_CHECK_HR_RETURN(RaiseOnRejected(m_pending_onRejected));
			m_pending_onRejected = nullptr;
		}
		return S_OK;
	}
	m_raised = true;
	m_pending_onFulfilled = nullptr;
	m_pending_onRejected = nullptr;

	m_peerconnection->getStats(
		m_selector,
		[this](std::shared_ptr<ExRTCStatsReport> exRTCStatsReport) { RaiseOnFulfilled(exRTCStatsReport); },
		[this](std::shared_ptr<ExRTCError> exRTCError) { RaiseOnRejected(exRTCError); }
	);

	return S_OK;
}

HRESULT ExPromiseGetStats::RaiseOnFulfilled(std::shared_ptr<ExRTCStatsReport> exRTCStatsReport)
{
	HRESULT hr = S_OK;
	if (m_callback_onFulfilled && exRTCStatsReport.get()) {
#if 0 // Building ATL array must be done on UIThread, this is why we cannot call the next code
		std::vector<CComVariant> atlVect;
		for (ExRTCStatsReport::iterator it = exRTCStatsReport->begin(); it != exRTCStatsReport->end(); ++it) {
			CComObject<CRTCStats>* atlRTCStats;
			hr = Utils::CreateInstanceWithRef(&atlRTCStats, it->second);
			if (SUCCEEDED(hr)) {
				atlVect.push_back(CComVariant(atlRTCStats));
				RTC_SAFE_RELEASE(&atlRTCStats);
			}
		}

		CComPtr<IDispatch> spDispatch;
		CComQIPtr<IDispatchEx> spAtlVect;
		RTC_CHECK_HR_RETURN(hr = CPlugin::Singleton()->GetDispatch(spDispatch));
		RTC_CHECK_HR_RETURN(hr = Utils::CreateJsArray(spDispatch, atlVect, spAtlVect));
		ATLBrowserCallback* bcb = new ATLBrowserCallback(RTC_WM_GETSTATS_SUCESS, m_callback_onFulfilled);
		if (bcb) {
			bcb->AddDispatch(spAtlVect.Detach());
			dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
			RTC_SAFE_RELEASE_OBJECT(&bcb);
		}
#else
		ATLGetStatsBrowserCallback* bcb = new ATLGetStatsBrowserCallback(RTC_WM_GETSTATS_SUCESS, m_callback_onFulfilled, exRTCStatsReport);
		if (bcb) {
			dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
			RTC_SAFE_RELEASE_OBJECT(&bcb);
		}
#endif
	}
	else {
		m_pending_onFulfilled = exRTCStatsReport;
	}
	return hr;
}

HRESULT ExPromiseGetStats::RaiseOnRejected(std::shared_ptr<ExRTCError> exRTCError)
{
	HRESULT hr = S_OK;
	if (m_callback_onRejected) {
		RTC_CHECK_HR_RETURN(hr = (Utils::RaiseEvent<CRTCError, ExRTCError>(m_callback_onRejected, RTC_WM_GETSTATS_ERROR, exRTCError)));
	}
	else {
		m_pending_onRejected = exRTCError;
	}
	return hr;
}
