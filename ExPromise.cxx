#include "stdafx.h"
#include "ExPromise.h"
#include "ExMediaStreamConstraints.h"
#include "ExMediaDevices.h"
#include "ExRTCPeerConnection.h"
#include "ExRTCSessionDescription.h"

#include "AsyncEvent.h"
#include "Utils.h"
#include "Plugin.h"
#include "MediaStream.h"
#include "ErrorMessage.h"
#include "RTCError.h"
#include "MediaDeviceInfo.h"
#include "RTCSessionDescription.h"
#include "RTCStats.h"

//
//	ExPromiseChild
//

ExPromiseChild::ExPromiseChild(ATLBrowserCallback* bcb_onFulfilled, ATLBrowserCallback* bcb_onRejected)
	: ExPromiseBase()
	, m_bcb_onFulfilled(bcb_onFulfilled ? dynamic_cast<ATLBrowserCallback*>(bcb_onFulfilled->RetainObject()) : nullptr)
	, m_bcb_onRejected(bcb_onRejected ? dynamic_cast<ATLBrowserCallback*>(bcb_onRejected->RetainObject()) : nullptr)
	, m_bcb_pending_onFulfilled(nullptr)
	, m_bcb_pending_onRejected(nullptr)
	, m_raised_onFulfilled(false)
	, m_raised_onRejected(false)
{
	if (m_bcb_onFulfilled) {
		m_bcb_onFulfilled->SetCbInvoked([this](CComVariant& retVal) { 
			if (m_bcb_pending_onFulfilled) {
				raiseOnFulfilled(m_bcb_pending_onFulfilled);
			}
		});
	}
	if (m_bcb_onRejected) {
		m_bcb_onRejected->SetCbInvoked([this](CComVariant& retVal) {
			if (m_bcb_pending_onRejected) {
				raiseOnRejected(m_bcb_pending_onRejected);
			}
		});
	}
}

ExPromiseChild::~ExPromiseChild()
{
	if (m_bcb_onFulfilled) {
		m_bcb_onFulfilled->SetCbInvoked(nullptr);
	}
	if (m_bcb_onRejected) {
		m_bcb_onRejected->SetCbInvoked(nullptr);
	}
	m_callback_onFulfilled = nullptr;
	m_callback_onRejected = nullptr;
	RTC_SAFE_RELEASE_OBJECT(&m_bcb_onFulfilled);
	RTC_SAFE_RELEASE_OBJECT(&m_bcb_onRejected);
	RTC_SAFE_RELEASE_OBJECT(&m_bcb_pending_onFulfilled);
	RTC_SAFE_RELEASE_OBJECT(&m_bcb_pending_onRejected);
}

std::shared_ptr<ExPromiseChild> ExPromiseChild::then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected /*= nullptr*/)
{
	m_callback_onFulfilled = onFulfilled;
	RTC_SAFE_RELEASE_OBJECT(&m_bcb_pending_onFulfilled);
	if (onRejected) {
		m_callback_onRejected = onRejected;
		RTC_SAFE_RELEASE_OBJECT(&m_bcb_pending_onRejected);
	}

	ATLBrowserCallback* bcb_onFulfilled = nullptr;
	ATLBrowserCallback* bcb_onRejected = nullptr;
	
	if (m_callback_onFulfilled && m_bcb_onFulfilled) {
		bcb_onFulfilled = new ATLBrowserCallback(RTC_WM_SUCCESS, m_callback_onFulfilled);
		if (!raiseOnFulfilled(bcb_onFulfilled)) {
			m_bcb_pending_onFulfilled = dynamic_cast<ATLBrowserCallback*>(bcb_onFulfilled->RetainObject());
		}
	}
	
	if (m_callback_onRejected && m_bcb_onRejected) {
		bcb_onRejected = new ATLBrowserCallback(RTC_WM_ERROR, m_callback_onRejected);
		if (!raiseOnRejected(bcb_onRejected)) {
			m_bcb_pending_onRejected = dynamic_cast<ATLBrowserCallback*>(bcb_onRejected->RetainObject());
		}
	}

	std::shared_ptr<ExPromiseChild> exChild = std::make_shared<ExPromiseChild>(bcb_onFulfilled, bcb_onRejected);

	RTC_SAFE_RELEASE_OBJECT(&bcb_onFulfilled);
	RTC_SAFE_RELEASE_OBJECT(&bcb_onRejected);

	return exChild;
}

std::shared_ptr<ExPromiseChild> ExPromiseChild::catchh(CComPtr<IDispatch> onRejected)
{
	m_callback_onRejected = onRejected;
	RTC_SAFE_RELEASE_OBJECT(&m_bcb_pending_onRejected);
	ATLBrowserCallback* bcb_onRejected = nullptr;
	if (m_callback_onRejected && m_bcb_onRejected) {
		bcb_onRejected = new ATLBrowserCallback(RTC_WM_ERROR, m_callback_onRejected);
		if (!raiseOnRejected(bcb_onRejected)) {
			m_bcb_pending_onRejected = dynamic_cast<ATLBrowserCallback*>(bcb_onRejected->RetainObject());
		}
	}

	std::shared_ptr<ExPromiseChild> exChild = std::make_shared<ExPromiseChild>(nullptr, bcb_onRejected);

	RTC_SAFE_RELEASE_OBJECT(&bcb_onRejected);

	return exChild;
}

bool ExPromiseChild::raiseOnFulfilled(ATLBrowserCallback* bcb_onFulfilled)
{
	if (!m_raised_onFulfilled && bcb_onFulfilled && m_bcb_onFulfilled->isInvoked()) {
		bcb_onFulfilled->AddVariant(m_bcb_onFulfilled->ret());
		m_raised_onFulfilled = dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb_onFulfilled);
		return m_raised_onFulfilled;
	}
	return false;
}

bool ExPromiseChild::raiseOnRejected(ATLBrowserCallback* bcb_onRejected)
{
	if (!m_raised_onRejected && bcb_onRejected && m_bcb_onRejected->isInvoked()) {
		bcb_onRejected->AddVariant(m_bcb_onRejected->ret());
		m_raised_onRejected = dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb_onRejected);
		return m_raised_onRejected;
	}
	return false;
}
