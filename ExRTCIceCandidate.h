// https://www.w3.org/TR/webrtc/#dom-rtcicecandidate
#pragma once
#include "Config.h"
#include "Common.h"
#include "webrtc/api/jsep.h"

class ExRTCIceCandidate {
public:
	ExRTCIceCandidate(const std::string& sdp_mid,
		int sdp_mline_index,
		const std::string& sdp,
		webrtc::SdpParseError* error);
	virtual ~ExRTCIceCandidate();

	_inline bool isValid()const { return !!m_IceObj; }

	const std::string candidate()const;
	const std::string sdpMid()const;
	const unsigned short sdpMLineIndex() const;
	const std::string& foundation() const;
	const unsigned long priority() const;
	const std::string ip() const;
	const std::string& protocol() const;
	const unsigned short port() const;
	const std::string& type() const;
	const std::string& tcpType() const;
	const std::string relatedAddress() const;
	const unsigned short relatedPort() const;
	const std::string& ufrag() const;
	const std::string& url() const;

	const std::string toString()const;
	const webrtc::IceCandidateInterface* iceCandidateObj()const { return m_IceObj; }

	webrtc::IceCandidateInterface* CreateIceCandidate(webrtc::SdpParseError* error);
	static std::shared_ptr<ExRTCIceCandidate> CreateIceCandidate(const webrtc::IceCandidateInterface* iceObj, webrtc::SdpParseError* error);
	static std::shared_ptr<ExRTCIceCandidate> CreateIceCandidate(const std::string candidate, webrtc::SdpParseError* error);

private:
	webrtc::IceCandidateInterface* m_IceObj;
};
