#include "stdafx.h"
#include "Helper.h"
#include "Display.h"
#include "AsyncEvent.h"
#include <comutil.h>
#include <shlwapi.h>
#include <shlobj.h>
#include <AtlConv.h>
#include "webrtc/base/win32socketinit.h"
#include "webrtc/base/win32socketserver.h"
#include "resource.h"

#ifdef _MSC_VER
#pragma comment(lib,"shlwapi.lib")
#endif

#include "webrtc/base/ssladapter.h"
#include "webrtc/base/thread.h"
#include "webrtc/base/json.h"

static bool g_bInitialized = false;
static bool g_winCoInitialize = false;

std::string Helper::s_UserAgent = "Unknown";

HRESULT Helper::Initialize()
{
	if (!g_bInitialized) {
		HRESULT hr = E_FAIL; // CoInitializeEx(NULL, COINIT_MULTITHREADED);
		g_winCoInitialize = SUCCEEDED(hr);
		rtc::EnsureWinsockInit();
		static rtc::Win32Thread w32_thread;
		rtc::ThreadManager::Instance()->SetCurrentThread(&w32_thread);

#if 0
		_Logging::initialize();
#endif

		rtc::InitializeSSL();
		rtc::InitializeSSLThread();

#if 0
		s_encrypt_ctx = cpp11::shared_ptr<_EncryptCtx>(_EncryptCtx::New());
#endif

		g_bInitialized = true;
	}
	return S_OK;
}

HRESULT Helper::DeInitialize(void)
{
	if (g_bInitialized) {
		rtc::CleanupSSL();
		g_bInitialized = false;
		if (g_winCoInitialize) {
			CoUninitialize();
			g_winCoInitialize = false;
		}
#if 0
		_Logging::deInitialize();
#endif
	}
	return S_OK;
}

rtc::Thread* Helper::GetPluginThread()
{
	// Defined in Helper::Initialize
	return rtc::ThreadManager::Instance()->CurrentThread();
}

std::string Helper::ToString(long val)
{
	char str[22];
	sprintf(str, "%ld", val);
	return std::string(str);
}

bool Helper::RaiseCallback(LONGLONG handle, BrowserCallback* cb)
{
	if (!cb) {
		return false;
	}
	HWND hWnd = reinterpret_cast<HWND>(handle);
	bool ret = false;

	// retain() callback object
	cb->RetainObject();

	if (hWnd) {
		ret = (PostMessage(hWnd, cb->GetMsgId(), reinterpret_cast<WPARAM>(cb), NULL) == TRUE);
	}
	else {
		RTC_DEBUG_WARN("Not handle associated to the window yet");
		Helper::WndProc(hWnd, cb->GetMsgId(), reinterpret_cast<WPARAM>(cb), NULL);
		ret = true;
	}

	// release() callback object
	if (ret) {
		// all is ok -> object will be freed by the async functin
	}
	else {
		cb->ReleaseObject();
	}
	return ret;
}

LRESULT CALLBACK Helper::WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg) {
	case WM_ERASEBKGND:
	{
		return TRUE; // avoid background erasing.
	}
	case WM_WINDOWPOSCHANGING:
		break;
	case WM_WINDOWPOSCHANGED:
		break;
	case WM_PAINT:
	{
		Display* display = dynamic_cast<Display*>(reinterpret_cast<Display*>(GetWindowLongPtr(hWnd, GWLP_USERDATA)));
		if (display && display->PaintFrame()) {
			return 0;
		}
		else {
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);

			RECT rc;
			GetClientRect(hWnd, &rc);
			// Set Clip region to the rectangle specified by di.prcBounds
			HRGN hRgnOld = NULL;
			if (GetClipRgn(hdc, hRgnOld) != 1) {
				hRgnOld = NULL;
			}
			bool bSelectOldRgn = false;

			HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);
			if (hRgnNew != NULL) {
				bSelectOldRgn = (SelectClipRgn(hdc, hRgnNew) != ERROR);
			}

			Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);
			SetTextAlign(hdc, TA_CENTER | TA_BASELINE);
			LPCTSTR pszText = TEXT("ATL 8.0 : WebRTC Plugin");
#ifndef _WIN32_WCE
			TextOut(hdc,
				(rc.left + rc.right) / 2,
				(rc.top + rc.bottom) / 2,
				pszText,
				lstrlen(pszText));
#else
			ExtTextOut(hdc,
				(rc.left + rc.right) / 2,
				(rc.top + rc.bottom) / 2,
				ETO_OPAQUE,
				NULL,
				pszText,
				ATL::lstrlen(pszText),
				NULL);
#endif
			if (bSelectOldRgn) {
				SelectClipRgn(hdc, hRgnOld);
			}

			EndPaint(hWnd, &ps);
		}
		break;
	}

	case RTC_WM_SUCCESS:
	case RTC_WM_ERROR:
	case RTC_WM_GETUSERMEDIA_SUCESS:
	case RTC_WM_GETUSERMEDIA_ERROR:
	case RTC_WM_ENUMERATEDEVICES_SUCESS:
	case RTC_WM_ENUMERATEDEVICES_ERROR:
	case RTC_WM_CREATEOFFER_SUCCESS:
	case RTC_WM_CREATEOFFER_ERROR:
	case RTC_WM_CREATEANSWER_SUCCESS:
	case RTC_WM_CREATEANSWER_ERROR:
	case RTC_WM_ONNEGOTIATIONNEEDED:
	case RTC_WM_ONICECANDIDATE:
	case RTC_WM_ONSIGNALINGSTATECHANGE:
	case RTC_WM_ONADDSTREAM:
	case RTC_WM_ONREMOVESTREAM:
	case RTC_WM_ONICECONNECTIONSTATECHANGE:
	case RTC_WM_ONICEGATHERINGSTATECHANGE:
	case RTC_WM_ONCONNECTIONSTATECHANGE:
	case RTC_WM_ONFINGERPRINTFAILURE:
	case RTC_WM_ONDATACHANNEL:
	{
		BrowserCallback* cb = reinterpret_cast<BrowserCallback*>(wParam);
		if (cb) {
			cb->Invoke();
			cb->ReleaseObject();
		}
		break;
	}
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

void Helper::SetUserAgent(const char* userAgent)
{
	if (userAgent) {
		s_UserAgent = userAgent;
	}
}

const char* Helper::GetUserAgent()
{
	return s_UserAgent.c_str();
}
