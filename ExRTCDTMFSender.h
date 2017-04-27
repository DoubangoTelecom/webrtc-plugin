// https://www.w3.org/TR/webrtc/#rtcdtmfsender
#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/api/dtmfsenderinterface.h"

class ExRTCDTMFSender : public webrtc::DtmfSenderObserverInterface {
public:
	ExRTCDTMFSender(rtc::scoped_refptr<webrtc::DtmfSenderInterface> obj);
	virtual ~ExRTCDTMFSender();

	virtual void OnToneChange(const std::string& tone) override;

	bool insertDTMF(const std::string& tones,
		unsigned long duration = 100,
		unsigned long interToneGap = 70);

	std::string toneBuffer() const;

	_inline void ontonechangeSet(FunctionCallbackDTMFToneChange callback) { m_callback_ontonechange = callback; }

private:
	rtc::scoped_refptr<webrtc::DtmfSenderInterface> m_obj;
	FunctionCallbackDTMFToneChange m_callback_ontonechange;
};