// https://www.w3.org/TR/webrtc/#dom-rtcdatachannelevent
#pragma once
#include "Config.h"
#include "Common.h"

class ExRTCDataChannel;

class ExRTCDataChannelEvent {
public:
	ExRTCDataChannelEvent(std::shared_ptr<ExRTCDataChannel> channel);
	virtual ~ExRTCDataChannelEvent();

	_inline std::shared_ptr<ExRTCDataChannel> channel() { return m_channel; }

private:
	std::shared_ptr<ExRTCDataChannel> m_channel;
};
