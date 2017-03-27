#include "AsyncEvent.h"
#include "Helper.h"

//
//	AsyncEventDispatcher
//

AsyncEventDispatcher::AsyncEventDispatcher()
	: m_Hwnd(NULL)
	, m_Proc(NULL)
{

}

AsyncEventDispatcher::~AsyncEventDispatcher()
{
	SetWindow(NULL, false);
}

bool AsyncEventDispatcher::SetWindow(HWND hWnd, bool bSubClass /*= true*/)
{
	if (m_Hwnd && m_Proc) {
		SetWindowLongPtr(m_Hwnd, GWLP_WNDPROC, (LONG_PTR)m_Proc);
		m_Proc = NULL;
	}

	if ((m_Hwnd = hWnd)) {
		if (bSubClass) {
			m_Proc = (WNDPROC)SetWindowLongPtr(m_Hwnd, GWLP_WNDPROC, (LONG_PTR)Helper::WndProc);
			if (!m_Proc) {
				RTC_DEBUG_ERROR("SetWindowLongPtr() failed with errcode=%d", GetLastError());
				return false;
			}
		}
	}
	return true;
}

LONGLONG AsyncEventDispatcher::GetWindowHandle()
{
	return reinterpret_cast<LONGLONG>(m_Hwnd);
}

bool AsyncEventDispatcher::RaiseCallback(BrowserCallback* cb)
{
	return Helper::RaiseCallback(GetWindowHandle(), cb);
}

//
//	AsyncEventRaiser
//

AsyncEventRaiser::AsyncEventRaiser()
	: m_pDispatcher(NULL)
{

}

AsyncEventRaiser::~AsyncEventRaiser()
{
	SetDispatcher(NULL);
}

void AsyncEventRaiser::SetDispatcher(AsyncEventDispatcher* dispatcher)
{
	if (m_pDispatcher) {
		m_pDispatcher->ReleaseObject();
		m_pDispatcher = NULL;
	}
	if (dispatcher) {
		m_pDispatcher = dynamic_cast<AsyncEventDispatcher*>(dispatcher->RetainObject());
	}
}

bool AsyncEventRaiser::RaiseCallback(BrowserCallback* cb)
{
	assert(m_pDispatcher != NULL);
	return m_pDispatcher->RaiseCallback(cb);
}
