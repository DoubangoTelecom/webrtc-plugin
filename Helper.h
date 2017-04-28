#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/system_wrappers/include/critical_section_wrapper.h"

class Helper
{
public:
	static HRESULT Initialize();
	static HRESULT DeInitialize(void);

	static rtc::Thread* GetPluginThread();

	static std::string ToString(long val);
	static std::string ToString(const std::wstring wstr);

	static bool RaiseCallback(LONGLONG handle, BrowserCallback* cb);
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	static void SetUserAgent(const char* userAgent);
	static const char* GetUserAgent();

private:
#if _MSC_VER
#pragma warning(push)
#pragma warning(disable:4251)
#endif
	static webrtc::CriticalSectionWrapper* s_unique_objs_cs;	
	static std::string s_UserAgent;
#if _MSC_VER
#pragma warning(pop)
#endif
};
