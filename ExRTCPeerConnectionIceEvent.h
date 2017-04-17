// https://www.w3.org/TR/webrtc/#dom-rtcpeerconnectioniceevent
#pragma once
#include "Config.h"

class ExRTCIceCandidate;

class ExRTCPeerConnectionIceEvent {
public:
	ExRTCPeerConnectionIceEvent(std::shared_ptr<ExRTCIceCandidate> iceCandidate);
	virtual ~ExRTCPeerConnectionIceEvent();
	
	_inline std::shared_ptr<ExRTCIceCandidate>& candidate() { return m_iceCandidate; }
	const std::string& type()const;
	const std::string& url() const;

private:
	std::shared_ptr<ExRTCIceCandidate> m_iceCandidate;
};
