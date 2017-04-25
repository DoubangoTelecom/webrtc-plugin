#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/modules/desktop_capture/desktop_capturer.h"

class ExRTCWindow {
public:
	ExRTCWindow(webrtc::DesktopCapturer::SourceId id, const std::string& title);
	virtual ~ExRTCWindow();

	_inline webrtc::DesktopCapturer::SourceId id()const { return m_id; }
	_inline const std::string& title()const { return m_title; }

private:
	webrtc::DesktopCapturer::SourceId m_id;
	std::string m_title;
};
