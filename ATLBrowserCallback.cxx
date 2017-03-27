#include "ATLBrowserCallback.h"
#include "stdafx.h"

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

// _BrowserCallback implementation
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
