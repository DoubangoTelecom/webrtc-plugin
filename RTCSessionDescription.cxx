// https://www.w3.org/TR/webrtc/#dom-rtcsessiondescription
#include "stdafx.h"
#include "RTCSessionDescription.h"
#include "Utils.h"

CRTCSessionDescription::CRTCSessionDescription()
	: m_ex(nullptr)
{

}

HRESULT CRTCSessionDescription::FinalConstruct()
{
	return S_OK;
}

void CRTCSessionDescription::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCSessionDescription::SetEx(std::shared_ptr<ExRTCSessionDescription> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCSessionDescription> CRTCSessionDescription::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCSessionDescription::get_type(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->type(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCSessionDescription::put_type(__in BSTR newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::string newType;
	RTC_CHECK_HR_RETURN(Utils::ToString(&newVal, newType));
	RTC_CHECK_HR_RETURN(update(newType, m_ex->sdp()));
	return S_OK;
}

STDMETHODIMP CRTCSessionDescription::get_sdp(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->sdp(), pVal));
	return S_OK;
}

STDMETHODIMP CRTCSessionDescription::put_sdp(__in BSTR newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::string newSDP;
	RTC_CHECK_HR_RETURN(Utils::ToString(&newVal, newSDP));
	RTC_CHECK_HR_RETURN(update(m_ex->type(), newSDP));
	return S_OK;
}

HRESULT CRTCSessionDescription::update(const std::string& type, const std::string& sdp)
{
	
	webrtc::SdpParseError error;
	std::shared_ptr<ExRTCSessionDescription> newSDP = std::make_shared<ExRTCSessionDescription>(type, sdp, &error);
	if (!newSDP.get()) {
		RTC_CHECK_HR_RETURN(E_FAIL);
	}
	m_ex = newSDP;
	return S_OK;
}
