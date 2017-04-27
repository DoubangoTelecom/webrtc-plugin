// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// https://www.w3.org/TR/webrtc/#rtcrtpsender-interface-extensions

#include "stdafx.h"
#include "RTCRtpSender.h"
#include "MediaStreamTrack.h"
#include "RTCDTMFSender.h"
#include "Utils.h"

CRTCRtpSender::CRTCRtpSender()
{
}

HRESULT CRTCRtpSender::FinalConstruct()
{
	return S_OK;
}

void CRTCRtpSender::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCRtpSender::SetEx(std::shared_ptr<ExRTCRtpSender> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCRtpSender> CRTCRtpSender::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// readonly attribute MediaStreamTrack ? track;
STDMETHODIMP CRTCRtpSender::get_track(__out VARIANT* varMediaStreamTrack)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CMediaStreamTrack>* track;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&track, m_ex->track()));
	*varMediaStreamTrack = CComVariant(track);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// readonly attribute RTCDtlsTransport? transport;
STDMETHODIMP CRTCRtpSender::get_transport(__out VARIANT* varRTCDtlsTransport)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// readonly attribute RTCDtlsTransport? rtcpTransport;
STDMETHODIMP CRTCRtpSender::get_rtcpTransport(__out VARIANT* varRTCDtlsTransport)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// Promise<void>      setParameters(optional RTCRtpParameters parameters);
STDMETHODIMP CRTCRtpSender::setParameters(__in_opt VARIANT varRTCRtpParameters, __out VARIANT* varPromiseVoid)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// RTCRtpParameters   getParameters();
STDMETHODIMP CRTCRtpSender::getParameters(__out VARIANT* varRTCRtpParameters)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// Promise<void> replaceTrack(MediaStreamTrack withTrack);
STDMETHODIMP CRTCRtpSender::replaceTrack(__in VARIANT varMediaStreamTrack, __out VARIANT* varPromiseVoid)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcrtpsender-interface-extensions
// readonly attribute RTCDTMFSender? dtmf;
STDMETHODIMP CRTCRtpSender::get_dtmf(__out VARIANT* varRTCDTMFSender)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CRTCDTMFSender>* dtmf;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&dtmf, m_ex->dtmf()));
	*varRTCDTMFSender = CComVariant(dtmf);
	return S_OK;
}
