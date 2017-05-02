// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/api/rtpreceiverinterface.h"
#include "webrtc/api/mediastreaminterface.h"

class ExMediaStreamTrack;

class ExRTCRtpReceiver {
public:
	ExRTCRtpReceiver(rtc::scoped_refptr<webrtc::RtpReceiverInterface> obj);
	virtual ~ExRTCRtpReceiver();

	std::shared_ptr<ExMediaStreamTrack> track();

private:
	rtc::scoped_refptr<webrtc::RtpReceiverInterface> m_obj;
	std::shared_ptr<ExMediaStreamTrack> m_track;
};
