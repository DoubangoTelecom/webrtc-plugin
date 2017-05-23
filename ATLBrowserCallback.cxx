#include "stdafx.h"
#include "ATLBrowserCallback.h"
#include "RTCStats.h"
#include "ExRTCStats.h"
#include "Utils.h"


//
//	ATLBrowserCallback
//

ATLBrowserCallback::ATLBrowserCallback(unsigned msgid, CComPtr<IDispatch> spCallback, FunctionCallbackAtlInvoked cbInvoked /*= nullptr*/)
	: BrowserCallback(msgid)
	, m_spCallback(spCallback)
	, m_params_count(0)
	, m_cbInvoked(cbInvoked)
	, m_bInvoked(false)
{
	m_ret.Clear();
}

ATLBrowserCallback::~ATLBrowserCallback()
{
	m_spCallback = nullptr;
	for (unsigned i = 0; i < m_params_count; ++i) {
		m_params[i].Clear();
	}
	m_cbInvoked = nullptr;
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

HRESULT ATLBrowserCallback::AddVariant(const CComVariant& variant)
{
	if ((m_params_count + 1) >= RTC_MAX_ARGS_PARAMS) {
		return E_BOUNDS;
	}
	m_params[m_params_count++] = variant;
	return S_OK;
}

// Called on UIThread
bool ATLBrowserCallback::Invoke()
{
	if (!m_spCallback) {
		RTC_DEBUG_ERROR("No dispatcher");
		return false;
	}
	DISPPARAMS params = { m_params, NULL, m_params_count, 0 };
	HRESULT hr = m_spCallback->Invoke(0,
		IID_NULL,
		LOCALE_USER_DEFAULT,
		DISPATCH_METHOD,
		&params, &m_ret, NULL, NULL);
	m_bInvoked = true;
	if (m_cbInvoked) {
		m_cbInvoked(m_ret);
	}
	return SUCCEEDED(hr);
}

