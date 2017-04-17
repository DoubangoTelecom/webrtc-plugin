// https://www.w3.org/TR/webrtc/#dom-rtcicecandidate
#include "stdafx.h"
#include "RTCIceCandidate.h"
#include "Utils.h"

CRTCIceCandidate::CRTCIceCandidate()
	: m_ex(nullptr)
{
}

HRESULT CRTCIceCandidate::FinalConstruct()
{
	return S_OK;
}

void CRTCIceCandidate::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCIceCandidate::SetEx(std::shared_ptr<ExRTCIceCandidate> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCIceCandidate> CRTCIceCandidate::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCIceCandidate::get_candidate(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->candidate(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_sdpMid(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->sdpMid(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_sdpMLineIndex(__out USHORT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->sdpMLineIndex();
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_foundation(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->foundation(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_priority(__out ULONG* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->priority();
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_protocol(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->protocol(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_port(__out USHORT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->port();
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_type(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->type(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_tcpType(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->tcpType(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_relatedAddress(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->relatedAddress(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_relatedPort(__out USHORT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->relatedPort();
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::get_ufrag(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->ufrag(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCIceCandidate::toString(__out BSTR* String)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->toString(), String));
	return S_OK;
}
