// https://www.w3.org/TR/webrtc/#rtcerror-object
#include "ExRTCError.h"

ExRTCError::ExRTCError(const std::string& name, const std::string& message /*= ""*/)
	: m_Name(name)
	, m_Message(message)
	, m_ErrorDetail("") // must be empty according to w3c
	, m_SdpLineNumber(0)  // must be 0 according to w3c
	, m_HttpRequestStatusCode(0) // must be 0 according to w3c
{

}

ExRTCError::~ExRTCError()
{

}