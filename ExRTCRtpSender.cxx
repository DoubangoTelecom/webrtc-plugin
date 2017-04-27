// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// https://www.w3.org/TR/webrtc/#rtcrtpsender-interface-extensions
#include "ExRTCRtpSender.h"
#include "ExMediaStreamTrack.h"
#include "ExRTCDTMFSender.h"
#include "ExPeerConnectionFactory.h"

ExRTCRtpSender::ExRTCRtpSender(rtc::scoped_refptr<webrtc::RtpSenderInterface> obj)
	: m_obj(obj)
{

}

ExRTCRtpSender::~ExRTCRtpSender()
{
	m_obj = nullptr;
}

std::shared_ptr<ExMediaStreamTrack> ExRTCRtpSender::track()
{
	// Dynamic_cast is safe:
	// Comment from webrtc source code:
		// The kind() method must return kAudioKind only if the object is a
		// subclass of AudioTrackInterface, and kVideoKind only if the
		// object is a subclass of VideoTrackInterface. It is typically used
		// to protect a static_cast<> to the corresponding subclass.

	if (!m_track && m_obj && m_obj->track()) {
		if (m_obj->track()->kind().compare(webrtc::MediaStreamTrackInterface::kAudioKind) == 0) {
			rtc::scoped_refptr<webrtc::AudioTrackInterface> audioTrack(static_cast<webrtc::AudioTrackInterface*>(m_obj->track().get()));
			m_track = std::make_shared<ExMediaStreamTrackAudio>(
				std::make_shared<ExPeerConnectionFactory>(GetPeerConnectionFactory(), GetAudioDeviceModule()),
				audioTrack);
		}
		else if (m_obj->track()->kind().compare(webrtc::MediaStreamTrackInterface::kVideoKind) == 0) {
			rtc::scoped_refptr<webrtc::VideoTrackInterface> videoTrack(static_cast<webrtc::VideoTrackInterface*>(m_obj->track().get()));
			m_track = std::make_shared<ExMediaStreamTrackVideo>(
				std::make_shared<ExPeerConnectionFactory>(GetPeerConnectionFactory(), GetAudioDeviceModule()),
				videoTrack);
		}
	}
	return m_track;
}

std::shared_ptr<ExRTCDTMFSender> ExRTCRtpSender::dtmf()
{
	if (!m_dtmfSender && m_obj) {
		m_dtmfSender = std::make_shared<ExRTCDTMFSender>(m_obj->GetDtmfSender());
	}
	return m_dtmfSender;
}
