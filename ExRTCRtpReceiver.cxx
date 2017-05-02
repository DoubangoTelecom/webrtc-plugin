// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver//
#include "ExRTCRtpReceiver.h"
#include "ExMediaStreamTrack.h"
#include "ExPeerConnectionFactory.h"

ExRTCRtpReceiver::ExRTCRtpReceiver(rtc::scoped_refptr<webrtc::RtpReceiverInterface> obj)
	: m_obj(obj)
{

}

ExRTCRtpReceiver::~ExRTCRtpReceiver()
{
	m_obj = nullptr;
}

std::shared_ptr<ExMediaStreamTrack> ExRTCRtpReceiver::track()
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


