// https://www.w3.org/TR/webrtc/#dom-rtcsessiondescription
#include "ExRTCSessionDescription.h"

ExRTCSessionDescription::ExRTCSessionDescription(const std::string& type, const std::string& sdp, webrtc::SdpParseError* error)
	: m_sdpObj(webrtc::CreateSessionDescription(type, sdp, error))
{
}

ExRTCSessionDescription::~ExRTCSessionDescription()
{
	if (m_sdpObj) {
		delete m_sdpObj;
		m_sdpObj = nullptr;
	}
}

const std::string& ExRTCSessionDescription::sdp()const
{
	if (isValid() && m_sdpString.empty()) {
		m_sdpObj->ToString(&const_cast<ExRTCSessionDescription*>(this)->m_sdpString);
	}
	return m_sdpString;
}

const std::string ExRTCSessionDescription::type()const // must be be byref (&)
{
	if (isValid()) {
		return m_sdpObj->type();
	}
	return kStringEmpty;
}

std::shared_ptr<ExRTCSessionDescription> ExRTCSessionDescription::CreateSessionDescription(const webrtc::SessionDescriptionInterface* sdpObj, webrtc::SdpParseError* error)
{
	if (sdpObj) {
		std::string sdp;
		if (sdpObj->ToString(&sdp)) {
			return std::make_shared<ExRTCSessionDescription>(sdpObj->type(), sdp, error);
		}
	}
	return nullptr;
}

// Must not return 'm_sdpObj', we *must* keep the owenership
webrtc::SessionDescriptionInterface* ExRTCSessionDescription::CreateSessionDescription(webrtc::SdpParseError* error)
{
	if (isValid()) {
		return webrtc::CreateSessionDescription(type(), sdp(), error);
	}
	return nullptr;
}
