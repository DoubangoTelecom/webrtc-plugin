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


