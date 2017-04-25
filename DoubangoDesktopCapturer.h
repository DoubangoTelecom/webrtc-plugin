#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/media/base/videocapturer.h"

class ExRTCScreen;
class ExRTCWindow;

class DoubangoDesktopCapturerFactory
{
public:
	static cricket::VideoCapturer* CreateScreenCapturer(const ExRTCScreen* screen = nullptr);
	static cricket::VideoCapturer* CreateWindowCapturer(const ExRTCWindow* window = nullptr);
	static std::vector<std::shared_ptr<ExRTCScreen> > GetScreens();
	static std::vector<std::shared_ptr<ExRTCWindow> > GetWindows();
};

