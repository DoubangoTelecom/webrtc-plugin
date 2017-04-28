#include "stdafx.h"
#include "ATLBrowserCallback.h"
#include "RTCStats.h"
#include "ExRTCStats.h"
#include "Utils.h"


//
//	ATLBrowserCallback
//

ATLBrowserCallback::ATLBrowserCallback(unsigned msgid, CComPtr<IDispatch> disp)
	: BrowserCallback(msgid)
	, m_disp(disp)
	, m_params_count(0)
{

}

ATLBrowserCallback::~ATLBrowserCallback()
{
	m_disp = NULL;
	for (unsigned i = 0; i < m_params_count; ++i) {
		m_params[i].Clear();
	}
	RTC_DEBUG_INFO("BrowserCallback::~BrowserCallback");
}

HRESULT ATLBrowserCallback::AddDispatch(CComPtr<IDispatch> obj)
{
	if ((m_params_count + 1) >= RTC_MAX_ARGS_PARAMS) {
		return E_BOUNDS;
	}
	m_params[m_params_count++] = obj;
	return S_OK;
}

HRESULT ATLBrowserCallback::AddBSTR(const CComBSTR& bstr)
{
	if ((m_params_count + 1) >= RTC_MAX_ARGS_PARAMS) {
		return E_BOUNDS;
	}
	m_params[m_params_count++] = bstr;
	return S_OK;
}

// Called on UIThread
bool ATLBrowserCallback::Invoke()
{
	if (!m_disp) {
		RTC_DEBUG_ERROR("No dispatcher");
		return false;
	}

	DISPPARAMS params = { m_params, NULL, m_params_count, 0 };
	HRESULT hr = m_disp->Invoke(0,
		IID_NULL,
		LOCALE_USER_DEFAULT,
		DISPATCH_METHOD,
		&params, NULL, NULL, NULL);
	return SUCCEEDED(hr);
}



//
//	ATLGetStatsBrowserCallback
//


ATLGetStatsBrowserCallback::ATLGetStatsBrowserCallback(unsigned msgid, CComPtr<IDispatch> disp, std::shared_ptr<ExRTCStatsReport> report)
	: ATLBrowserCallback(msgid, disp)
	, m_report(report)
{

}

ATLGetStatsBrowserCallback::~ATLGetStatsBrowserCallback()
{

}

// Called on UIThread
bool ATLGetStatsBrowserCallback::Invoke()
{
	HRESULT hr = S_OK;
	std::vector<CComVariant> atlVect;
	for (ExRTCStatsReport::iterator it = m_report->begin(); it != m_report->end(); ++it) {
		CComObject<CRTCStats>* atlRTCStats;
		hr = Utils::CreateInstanceWithRef(&atlRTCStats, it->second);
		if (SUCCEEDED(hr)) {
			atlVect.push_back(CComVariant(atlRTCStats));
			RTC_SAFE_RELEASE(&atlRTCStats);
		}
	}

	CComPtr<IDispatch> spDispatch;
	CComQIPtr<IDispatchEx> spAtlVect;
	hr = CPlugin::Singleton()->GetDispatch(spDispatch);
	if (SUCCEEDED(hr)) {
		// TODO(dmi): This interface has "entries", "forEach", "get", "has", "keys", "values", @@iterator methods and a "size" getter brought by readonly maplike
		hr = Utils::CreateJsArray(spDispatch, atlVect, spAtlVect); // Must be called on UIThread -> This is why special callback is used
		if (SUCCEEDED(hr)) {
			ATLBrowserCallback::AddDispatch(spAtlVect.Detach()); // call BaseClass Impl
			return ATLBrowserCallback::Invoke(); // call BaseClass Impl
		}
	}
	return false;
}

