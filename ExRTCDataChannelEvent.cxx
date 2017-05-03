// https://www.w3.org/TR/webrtc/#dom-rtcdatachannelevent
#include "ExRTCDataChannelEvent.h"

ExRTCDataChannelEvent::ExRTCDataChannelEvent(std::shared_ptr<ExRTCDataChannel> channel)
	: m_channel(channel)
{

}
	
ExRTCDataChannelEvent::~ExRTCDataChannelEvent()
{

}