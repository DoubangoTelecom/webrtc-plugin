// https://www.w3.org/TR/webrtc/#dom-rtcsessiondescription
#pragma once
#include "Config.h"
#include "Common.h"
#include "webrtc/api/jsep.h"

class ExRTCSessionDescription {
public:
	ExRTCSessionDescription(const std::string& type, const std::string& sdp, webrtc::SdpParseError* error);
	virtual ~ExRTCSessionDescription();

	_inline bool isValid()const { return !!m_sdpObj; }

	const std::string& sdp()const;
	const std::string type()const;

	static std::shared_ptr<ExRTCSessionDescription> CreateSessionDescription(const webrtc::SessionDescriptionInterface* sdpObj, webrtc::SdpParseError* error);
	webrtc::SessionDescriptionInterface* CreateSessionDescription(webrtc::SdpParseError* error);

private:
	webrtc::SessionDescriptionInterface* m_sdpObj;
	std::string m_sdpString;
};
