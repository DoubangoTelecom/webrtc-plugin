#pragma once
#include "Config.h"
#include "Common.h"

#if !defined(WM_USER)
#define WM_USER 0x0400
#endif
#define RTC_WM_SUCCESS						(WM_USER + 101)
#define RTC_WM_ERROR						(RTC_WM_SUCCESS + 1)
#define RTC_WM_GETUSERMEDIA_SUCESS			(RTC_WM_ERROR + 1)
#define RTC_WM_GETUSERMEDIA_ERROR			(RTC_WM_GETUSERMEDIA_SUCESS + 1)
#define RTC_WM_ENUMERATEDEVICES_SUCESS		(RTC_WM_GETUSERMEDIA_ERROR + 1)
#define RTC_WM_ENUMERATEDEVICES_ERROR		(RTC_WM_ENUMERATEDEVICES_SUCESS + 1)
#define RTC_WM_GETSTATS_SUCESS				(RTC_WM_ENUMERATEDEVICES_ERROR + 1)
#define RTC_WM_GETSTATS_ERROR				(RTC_WM_GETSTATS_SUCESS + 1)
#define RTC_WM_CREATEOFFER_SUCCESS			(RTC_WM_GETSTATS_ERROR + 1)
#define RTC_WM_CREATEOFFER_ERROR			(RTC_WM_CREATEOFFER_SUCCESS + 1)
#define RTC_WM_CREATEANSWER_SUCCESS			(RTC_WM_CREATEOFFER_ERROR + 1)
#define RTC_WM_CREATEANSWER_ERROR			(RTC_WM_CREATEANSWER_SUCCESS + 1)
#define RTC_WM_INVALIDATE_WINDOWLESS		(RTC_WM_CREATEANSWER_ERROR + 1)
#define RTC_WM_ONNEGOTIATIONNEEDED			(RTC_WM_INVALIDATE_WINDOWLESS + 1)
#define RTC_WM_ONICECANDIDATE				(RTC_WM_ONNEGOTIATIONNEEDED + 1)
#define RTC_WM_ONSIGNALINGSTATECHANGE		(RTC_WM_ONICECANDIDATE + 1)
#define RTC_WM_ONADDSTREAM					(RTC_WM_ONSIGNALINGSTATECHANGE + 1)
#define RTC_WM_ONREMOVESTREAM				(RTC_WM_ONADDSTREAM + 1)
#define RTC_WM_ONICECONNECTIONSTATECHANGE	(RTC_WM_ONREMOVESTREAM + 1)
#define RTC_WM_ONICEGATHERINGSTATECHANGE	(RTC_WM_ONICECONNECTIONSTATECHANGE + 1)
#define RTC_WM_ONCONNECTIONSTATECHANGE		(RTC_WM_ONICEGATHERINGSTATECHANGE + 1)
#define RTC_WM_ONFINGERPRINTFAILURE			(RTC_WM_ONCONNECTIONSTATECHANGE + 1)
#define RTC_WM_ONDATACHANNEL				(RTC_WM_ONFINGERPRINTFAILURE + 1)
#define RTC_WM_ONTRACK						(RTC_WM_ONDATACHANNEL + 1)
#define RTC_WM_ONTONECHANGE					(RTC_WM_ONTRACK + 1)

//
//	AsyncEventDispatcher
//
class AsyncEventDispatcher : public BrowserObject
{
protected:
	AsyncEventDispatcher();
public:
	virtual ~AsyncEventDispatcher();
	bool SetWindow(HWND hWnd, bool bSubClass = true);
	LONGLONG GetWindowHandle();
	bool RaiseCallback(BrowserCallback* cb);

private:
	HWND m_Hwnd;
	WNDPROC m_Proc;
};


//
//	AsyncEventRaiser
//
class AsyncEventRaiser
{
protected:
	AsyncEventRaiser();
public:
	virtual ~AsyncEventRaiser();
	void SetDispatcher(AsyncEventDispatcher* dispatcher);
	bool RaiseCallback(BrowserCallback* cb);
	_inline const AsyncEventDispatcher* GetDispatcher() { return m_pDispatcher; }

private:
	AsyncEventDispatcher* m_pDispatcher;
};
