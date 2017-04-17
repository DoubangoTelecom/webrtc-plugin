// https://www.w3.org/TR/webrtc/#dom-rtcpeerconnectioniceevent
#include "ExRTCPeerConnectionIceEvent.h"
#include "ExRTCIceCandidate.h"

ExRTCPeerConnectionIceEvent::ExRTCPeerConnectionIceEvent(std::shared_ptr<ExRTCIceCandidate> iceCandidate)
	: m_iceCandidate(iceCandidate)
{
}

ExRTCPeerConnectionIceEvent::~ExRTCPeerConnectionIceEvent()
{
	m_iceCandidate = nullptr;
}


const std::string& ExRTCPeerConnectionIceEvent::type()const
{
	if (m_iceCandidate.get()) {
		return m_iceCandidate->type();
	}
	return kStringEmpty;
}

const std::string& ExRTCPeerConnectionIceEvent::url() const
{
	if (m_iceCandidate.get()) {
		return m_iceCandidate->url();
	}
	return kStringEmpty;
}
