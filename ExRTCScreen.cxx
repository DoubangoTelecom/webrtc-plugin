#include "ExRTCScreen.h"

ExRTCScreen::ExRTCScreen(webrtc::DesktopCapturer::SourceId id, const std::string& title)
	: m_id(id)
	, m_title(title)
{

}

ExRTCScreen::~ExRTCScreen()
{

}
