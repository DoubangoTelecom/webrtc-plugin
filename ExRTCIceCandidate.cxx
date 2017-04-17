// https://www.w3.org/TR/webrtc/#dom-rtcicecandidate
#include "ExRTCIceCandidate.h"

#include "webrtc/base/json.h"

ExRTCIceCandidate::ExRTCIceCandidate(const std::string& sdp_mid,
	int sdp_mline_index,
	const std::string& sdp,
	webrtc::SdpParseError* error)
{
	m_IceObj = webrtc::CreateIceCandidate(sdp_mid, sdp_mline_index, sdp, error);
}

ExRTCIceCandidate::~ExRTCIceCandidate()
{

}

const std::string ExRTCIceCandidate::candidate()const
{
	if (isValid()) {
		std::string sdp;
		if (m_IceObj->ToString(&sdp)) {
			return sdp;
		}
	}
	return kStringEmpty;
}

const std::string ExRTCIceCandidate::sdpMid()const
{
	if (isValid()) {
		return m_IceObj->sdp_mid();
	}
	return kStringEmpty;
}

const unsigned short ExRTCIceCandidate::sdpMLineIndex() const
{
	if (isValid()) {
		return static_cast<unsigned short>(m_IceObj->sdp_mline_index());
	}
	return 0;
}

const std::string& ExRTCIceCandidate::foundation() const
{
	if (isValid()) {
		return m_IceObj->candidate().foundation();
	}
	return kStringEmpty;
}

const unsigned long ExRTCIceCandidate::priority() const
{
	if (isValid()) {
		return static_cast<unsigned long>(m_IceObj->candidate().priority());
	}
	return 0;
}

const std::string ExRTCIceCandidate::ip() const
{
	if (isValid()) {
		return m_IceObj->candidate().address().ipaddr().ToString();
	}
	return kStringEmpty;
}

const std::string& ExRTCIceCandidate::protocol() const
{
	if (isValid()) {
		return m_IceObj->candidate().protocol();
	}
	return kStringEmpty;
}

const unsigned short ExRTCIceCandidate::port() const
{
	if (isValid()) {
		return static_cast<unsigned short>(m_IceObj->candidate().address().port());
	}
	return 0;
}

const std::string& ExRTCIceCandidate::type() const
{
	if (isValid()) {
		return m_IceObj->candidate().type();
	}
	return kStringEmpty;
}

const std::string& ExRTCIceCandidate::tcpType() const
{
	if (isValid()) {
		return m_IceObj->candidate().tcptype();
	}
	return kStringEmpty;
}

const std::string ExRTCIceCandidate::relatedAddress() const
{
	if (isValid()) {
		return m_IceObj->candidate().related_address().ToString();
	}
	return kStringEmpty;
}

const unsigned short ExRTCIceCandidate::relatedPort() const
{
	if (isValid()) {
		return static_cast<unsigned short>(m_IceObj->candidate().related_address().port());
	}
	return 0;
}

const std::string& ExRTCIceCandidate::ufrag() const
{
	if (isValid()) {
		return m_IceObj->candidate().username();
	}
	return kStringEmpty;
}

const std::string& ExRTCIceCandidate::url() const
{
	if (isValid()) {
		return m_IceObj->candidate().url();
	}
	return kStringEmpty;
}

const std::string ExRTCIceCandidate::toString()const
{
	if (isValid()) {
		std::string str;
		if (m_IceObj->ToString(&str)) {
			return str;
		}
	}
	return kStringEmpty;
}

webrtc::IceCandidateInterface* ExRTCIceCandidate::CreateIceCandidate(webrtc::SdpParseError* error)
{
	if (isValid()) {
		std::string sdp;
		if (m_IceObj->ToString(&sdp)) {
			return webrtc::CreateIceCandidate(sdpMid(), sdpMLineIndex(), sdp, error);
		}
	}
	return nullptr;
}

std::shared_ptr<ExRTCIceCandidate> ExRTCIceCandidate::CreateIceCandidate(const webrtc::IceCandidateInterface* iceObj, webrtc::SdpParseError* error)
{
	if (iceObj) {
		std::string sdp;
		if (iceObj->ToString(&sdp)) {
			return std::make_shared<ExRTCIceCandidate>(iceObj->sdp_mid(), iceObj->sdp_mline_index(), sdp, error);
		}
	}
	return nullptr;
}

std::shared_ptr<ExRTCIceCandidate> ExRTCIceCandidate::CreateIceCandidate(const std::string candidate, webrtc::SdpParseError* error)
{
	std::string sdp_mid;
	int sdp_mlineindex = 0;
	std::string sdp;
	static const char kCandidateSdpMidName[] = "sdpMid";
	static const char kCandidateSdpMlineIndexName[] = "sdpMLineIndex";
	static const char kCandidateSdpName[] = "candidate";
	std::string type;
	std::string json_object;
	Json::Reader reader;
	Json::Value jmessage;
	if (!reader.parse(candidate, jmessage)) {
		LOG(WARNING) << "Received unknown message. " << candidate;
		return nullptr;
	}
	if (!rtc::GetStringFromJsonObject(jmessage, kCandidateSdpMidName, &sdp_mid) ||
		!rtc::GetIntFromJsonObject(jmessage, kCandidateSdpMlineIndexName, &sdp_mlineindex) ||
		!rtc::GetStringFromJsonObject(jmessage, kCandidateSdpName, &sdp)) 
	{
		LOG(WARNING) << "Can't parse received message.";
		return nullptr;
	}
	return std::make_shared<ExRTCIceCandidate>(sdp_mid, sdp_mlineindex, sdp, error);
}