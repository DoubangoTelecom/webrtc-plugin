// http://www.w3.org/TR/webrtc/#idl-def-MediaStreamEvent (deprecated)
#include "ExMediaStreamEvent.h"
#include "ExMediaStream.h"

ExMediaStreamEvent::ExMediaStreamEvent(std::shared_ptr<ExMediaStream> stream)
	: m_stream(stream)
{

}

ExMediaStreamEvent::~ExMediaStreamEvent()
{
	m_stream = nullptr;
}