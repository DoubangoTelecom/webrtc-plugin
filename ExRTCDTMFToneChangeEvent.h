// https://www.w3.org/TR/webrtc/#dom-rtcdtmftonechangeevent
#pragma once
#include "Config.h"
#include "Common.h"

class ExRTCDTMFToneChangeEvent {
public:
	ExRTCDTMFToneChangeEvent(const std::string& tone);
	virtual ~ExRTCDTMFToneChangeEvent();

	_inline const std::string& tone()const { return m_tone; }

private:
	std::string m_tone;
};
