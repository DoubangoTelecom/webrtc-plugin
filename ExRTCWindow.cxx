#include "ExRTCWindow.h"

ExRTCWindow::ExRTCWindow(webrtc::DesktopCapturer::SourceId id, const std::string& title)
	: m_id(id)
	, m_title(title)
{

}

ExRTCWindow::~ExRTCWindow()
{

}
