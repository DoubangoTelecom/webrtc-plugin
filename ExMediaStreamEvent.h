// http://www.w3.org/TR/webrtc/#idl-def-MediaStreamEvent (deprecated)
#pragma once
#include "Config.h"
#include "Common.h"

class ExMediaStream;

class ExMediaStreamEvent {
public:
	ExMediaStreamEvent(std::shared_ptr<ExMediaStream> stream);
	virtual ~ExMediaStreamEvent();

	std::shared_ptr<ExMediaStream> stream() { return m_stream; }

private:
	std::shared_ptr<ExMediaStream> m_stream;
};
