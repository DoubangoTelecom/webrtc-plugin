// https://www.w3.org/TR/webrtc/#dom-rtcpeerconnectioniceevent
#include "stdafx.h"
#include "RTCPeerConnectionIceEvent.h"
#include "RTCIceCandidate.h"
#include "Utils.h"

CRTCPeerConnectionIceEvent::CRTCPeerConnectionIceEvent()
	: m_ex(nullptr)
{
}

HRESULT CRTCPeerConnectionIceEvent::FinalConstruct()
{
	return S_OK;
}

void CRTCPeerConnectionIceEvent::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCPeerConnectionIceEvent::SetEx(std::shared_ptr<ExRTCPeerConnectionIceEvent> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCPeerConnectionIceEvent> CRTCPeerConnectionIceEvent::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCPeerConnectionIceEvent::get_type(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->type(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnectionIceEvent::get_candidate(__out VARIANT* pVal)
{
	if (!m_ex.get() || !m_ex->candidate().get()) {
		CComVariant(NULL).Detach(pVal);
		return S_OK;
	}

	CComObject<CRTCIceCandidate>* iceCandidate;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&iceCandidate));
	iceCandidate->SetEx(m_ex->candidate());
	HRESULT hr = CComVariant(iceCandidate).Detach(pVal);
	RTC_SAFE_RELEASE(&iceCandidate);
	return hr;
}

STDMETHODIMP CRTCPeerConnectionIceEvent::get_url(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->url(), pVal));
	return S_OK;
}
