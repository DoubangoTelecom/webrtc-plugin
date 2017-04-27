// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// https://www.w3.org/TR/webrtc/#rtcrtpsender-interface-extensions
#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/api/rtpsenderinterface.h"
#include "webrtc/api/mediastreaminterface.h"

class ExMediaStreamTrack;
class ExRTCDTMFSender;

class ExRTCRtpSender {
public:
	ExRTCRtpSender(rtc::scoped_refptr<webrtc::RtpSenderInterface> obj);
	virtual ~ExRTCRtpSender();

	std::shared_ptr<ExMediaStreamTrack> track();
	std::shared_ptr<ExRTCDTMFSender> dtmf();

private:
	rtc::scoped_refptr<webrtc::RtpSenderInterface> m_obj;
	std::shared_ptr<ExMediaStreamTrack> m_track;
	std::shared_ptr<ExRTCDTMFSender> m_dtmfSender;
};
