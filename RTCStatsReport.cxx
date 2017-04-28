// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
#include "stdafx.h"
#include "RTCStats.h"
#include "RTCStatsReport.h"
#include "Utils.h"

CRTCStatsReport::CRTCStatsReport()
{

}

HRESULT CRTCStatsReport::FinalConstruct()
{
	return S_OK;
}

void CRTCStatsReport::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCStatsReport::SetEx(std::shared_ptr<ExRTCStatsReport> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCStatsReport> CRTCStatsReport::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map/entries
STDMETHODIMP CRTCStatsReport::entries(__out VARIANT* varIterator)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map/forEach
STDMETHODIMP CRTCStatsReport::forEach(__in VARIANT varCallback, __in_opt VARIANT varThisArg)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComPtr<IDispatch> spCallback = Utils::VariantToDispatch(varCallback);
	if (spCallback) {
		CComPtr<IDispatch> spThisArg = Utils::VariantToDispatch(varThisArg);
		CComVariant kParams[2] = { NULL, spThisArg };
		const UINT cArgs = spThisArg ? 2 : 1;
		for (ExRTCStatsReport::const_iterator iter = m_ex->begin(); iter != m_ex->end(); ++iter) {
			// Do not use 'Utils::RaiseEvent' because the returned object must be delivered sync (instead of async)
			CComObject<CRTCStats>* atlStats;
			RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&atlStats, iter->second));
			kParams[0] = CComVariant(atlStats);
			DISPPARAMS params = { kParams, NULL, cArgs, 0 };
			RTC_CHECK_HR_RETURN(spCallback->Invoke(0,
				IID_NULL,
				LOCALE_USER_DEFAULT,
				DISPATCH_METHOD,
				&params, NULL, NULL, NULL));
		}
	}
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map/get
STDMETHODIMP CRTCStatsReport::get(__in VARIANT varKey, __out VARIANT* varEntry)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	BSTR bstrKey;
	RTC_CHECK_HR_RETURN(Utils::VariantToBSTR(varKey, bstrKey));
	std::string strKey;
	RTC_CHECK_HR_RETURN(Utils::ToString(&bstrKey, strKey));
	ExRTCStatsReport::const_iterator iter = m_ex->find(strKey);
	if (iter != m_ex->end()) {
		CComObject<CRTCStats>* atlStats;
		RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&atlStats, iter->second));
		*varEntry = CComVariant(atlStats);
	}
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map/has
STDMETHODIMP CRTCStatsReport::has(__in VARIANT varKey, __out VARIANT_BOOL* varBool)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	BSTR bstrKey;
	RTC_CHECK_HR_RETURN(Utils::VariantToBSTR(varKey, bstrKey));
	std::string strKey;
	RTC_CHECK_HR_RETURN(Utils::ToString(&bstrKey, strKey));
	*varBool = (m_ex->find(strKey) != m_ex->end()) ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map/keys
STDMETHODIMP CRTCStatsReport::keys(__out VARIANT* varIterator)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map/values
STDMETHODIMP CRTCStatsReport::values(__out VARIANT* varIterator)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;

}

// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map/size
STDMETHODIMP CRTCStatsReport::get_size(__out LONG* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = static_cast<LONG>(m_ex->size());
	return S_OK;
}
