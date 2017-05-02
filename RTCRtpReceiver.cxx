// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
#include "stdafx.h"
#include "RTCRtpReceiver.h"
#include "MediaStreamTrack.h"
#include "Utils.h"

CRTCRtpReceiver::CRTCRtpReceiver()
{
}

HRESULT CRTCRtpReceiver::FinalConstruct()
{
	return S_OK;
}

void CRTCRtpReceiver::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCRtpReceiver::SetEx(std::shared_ptr<ExRTCRtpReceiver> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCRtpReceiver> CRTCRtpReceiver::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
// readonly attribute MediaStreamTrack ? track;
STDMETHODIMP CRTCRtpReceiver::get_track(__out VARIANT* varMediaStreamTrack)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CMediaStreamTrack>* track;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&track, m_ex->track()));
	*varMediaStreamTrack = CComVariant(track);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
// readonly attribute RTCDtlsTransport? transport;
STDMETHODIMP CRTCRtpReceiver::get_transport(__out VARIANT* varRTCDtlsTransport)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
// readonly attribute RTCDtlsTransport? rtcpTransport;
STDMETHODIMP CRTCRtpReceiver::get_rtcpTransport(__out VARIANT* varRTCDtlsTransport)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
// RTCRtpParameters getParameters();
STDMETHODIMP CRTCRtpReceiver::getParameters(__out VARIANT* varRTCRtpParameters)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
// sequence<RTCRtpContributingSource> getContributingSources();
STDMETHODIMP CRTCRtpReceiver::getContributingSources(__out VARIANT* varSequenceRTCRtpContributingSource)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}
