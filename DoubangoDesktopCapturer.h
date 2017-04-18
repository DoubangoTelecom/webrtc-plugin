#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/media/base/videocapturer.h"

class DoubangoDesktopCapturerFactory
{
public:
	static cricket::VideoCapturer* Create();
};

