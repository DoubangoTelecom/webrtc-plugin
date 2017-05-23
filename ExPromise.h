#pragma once
#include "Config.h"
#include "Common.h"
#include "AsyncEvent.h"
#include "ATLBrowserCallback.h"
#include "ExJsArray.h"

class ExMediaStream;
class ExErrorMessage;
class ExRTCPeerConnection;
class ExRTCSessionDescription;
class ExRTCError;
class ExRTCIceCandidate;
class ExMediaStreamTrack;
class ExPromiseChild;

//
//	ExPromiseBase
//

class ExPromiseBase {
public:
	ExPromiseBase() { }
	virtual ~ExPromiseBase() { }
	virtual std::shared_ptr<ExPromiseChild> then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected = nullptr) = 0;
	virtual std::shared_ptr<ExPromiseChild> catchh(CComPtr<IDispatch> onRejected) = 0;
};

//
//	ExPromiseAtl
//

template<typename AltFulfilledType, typename ExFulfilledType, typename AtlRejectedType, typename ExRejectedType>
class ExPromiseAtl : public ExPromiseBase, public std::enable_shared_from_this<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > {
public:	
	ExPromiseAtl(int evt_onFulfilled = RTC_WM_SUCCESS, int evt_ononRejected = RTC_WM_ERROR)
		: m_evt_onFulfilled(evt_onFulfilled)
		, m_evt_onRejected(evt_ononRejected)
		, m_bcb_onFulfilled(nullptr)
		, m_bcb_onRejected(nullptr)
	{
		m_fun_core = nullptr;
		m_callback_onRejected = nullptr;
		m_callback_onFulfilled = nullptr;
		m_pending_onRejected = nullptr;
		m_pending_onFulfilled = nullptr;
		m_fun_onRejected = nullptr;
		m_fun_onFulfilled = nullptr;
		m_raised = false;
	}

	virtual ~ExPromiseAtl()
	{
		m_callback_onRejected = nullptr;
		m_callback_onFulfilled = nullptr;
		m_pending_onRejected = nullptr;
		m_pending_onFulfilled = nullptr;
		m_fun_core = nullptr;
		m_fun_onRejected = nullptr;
		m_fun_onFulfilled = nullptr;
		RTC_SAFE_RELEASE_OBJECT(&m_bcb_onFulfilled);
		RTC_SAFE_RELEASE_OBJECT(&m_bcb_onRejected);
	}

	std::shared_ptr<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > Bind(std::function<HRESULT()> fun_core)
	{
		m_fun_core = fun_core;
		std::shared_ptr<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > This
			= shared_from_this();
		std::weak_ptr<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > ThisWeak(This);

		RTC_SAFE_RELEASE_OBJECT(&This->m_bcb_onFulfilled);
		RTC_SAFE_RELEASE_OBJECT(&This->m_bcb_onRejected);
		This->m_bcb_onFulfilled = new ATLBrowserCallback(This->m_evt_onFulfilled, This->m_callback_onFulfilled);
		This->m_bcb_onRejected = new ATLBrowserCallback(This->m_evt_onRejected, This->m_callback_onRejected);

		m_fun_onFulfilled = [ThisWeak](std::shared_ptr<ExFulfilledType> exFulfilledObject) -> HRESULT {
			auto ThisPtr = ThisWeak.lock();
			if (ThisPtr && ThisPtr->m_callback_onFulfilled) {
				if (std::is_same<ExFulfilledType, ExJsArray>::value) {
					ThisPtr->m_bcb_onFulfilled->AddDispatch(reinterpret_cast<ExJsArray*>(exFulfilledObject.get())->spJsArray().Detach());
					dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(ThisPtr->m_bcb_onFulfilled);
				}
				else {
					CComObject<AltFulfilledType>* arg;
					if (SUCCEEDED(Utils::CreateInstanceWithRef(&arg))) {
						arg->SetEx(exFulfilledObject);
						ThisPtr->m_bcb_onFulfilled->AddDispatch(arg);
						dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(ThisPtr->m_bcb_onFulfilled);
						RTC_SAFE_RELEASE(&arg);
					}
				}
			}
			return S_OK;
		};
		m_fun_onRejected = [ThisWeak](std::shared_ptr<ExRejectedType> exRejectedObject) -> HRESULT {
			auto ThisPtr = ThisWeak.lock();
			if (ThisPtr && ThisPtr->m_callback_onRejected) {
				CComObject<AtlRejectedType>* arg;
				if (SUCCEEDED(Utils::CreateInstanceWithRef(&arg))) {
					arg->SetEx(exRejectedObject);
					ThisPtr->m_bcb_onRejected->AddDispatch(arg);
					dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(ThisPtr->m_bcb_onRejected);
					RTC_SAFE_RELEASE(&arg);
				}
			}
			return S_OK;
		};
		return This;
	}

	// Should call this function for Void promises only. For other types (not returning void)
	// the function will be called when 'then' or 'catch' are activated.
	std::shared_ptr<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > AutoStart()
	{
		std::shared_ptr <ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > This
			= shared_from_this();
		RTC_CHECK_HR_NOP(This->start());
		return This;
	}

	virtual std::shared_ptr<ExPromiseChild> then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected = nullptr) override
	{
		m_callback_onFulfilled = onFulfilled;
		if (onRejected) {
			m_callback_onRejected = onRejected;
		}
		if (FAILED(start())) {
			return nullptr;
		}
		return std::make_shared<ExPromiseChild>(m_bcb_onFulfilled, m_bcb_onRejected);
	}

	virtual std::shared_ptr<ExPromiseChild> catchh(CComPtr<IDispatch> onRejected) override
	{
		m_callback_onRejected = onRejected;
		if (FAILED(start())) {
			return nullptr;
		}
		return std::make_shared<ExPromiseChild>(m_bcb_onFulfilled, m_bcb_onRejected);
	}

	HRESULT raiseOnFulfilled(std::shared_ptr<ExFulfilledType> exFulfilled)
	{
		HRESULT hr = S_OK;
		if (m_callback_onFulfilled) {
			if (m_fun_onFulfilled) {
				m_fun_onFulfilled(exFulfilled);
			}
		}
		else {
			m_pending_onFulfilled = exFulfilled;
		}
		return hr;
	}

	HRESULT raiseOnRejected(std::shared_ptr<ExRejectedType> exRejected)
	{
		HRESULT hr = S_OK;
		if (m_callback_onRejected) {
			if (m_fun_onRejected) {
				m_fun_onRejected(exRejected);
			}
		}
		else {
			m_pending_onRejected = exRejected;
		}
		return hr;
	}

private:
	virtual HRESULT start()
	{
		m_bcb_onFulfilled->SetCallback(m_callback_onFulfilled);
		m_bcb_onRejected->SetCallback(m_callback_onRejected);
		if (m_raised) {
			if (m_pending_onFulfilled) {
				RTC_CHECK_HR_RETURN(raiseOnFulfilled(m_pending_onFulfilled));
				m_pending_onFulfilled = nullptr;
			}
			if (m_pending_onRejected) {
				RTC_CHECK_HR_RETURN(raiseOnRejected(m_pending_onRejected));
				m_pending_onRejected = nullptr;
			}
			return S_OK;
		}
		m_raised = true;
		m_pending_onFulfilled = nullptr;
		m_pending_onFulfilled = nullptr;

		RTC_CHECK_HR_RETURN(m_fun_core());
		return S_OK;
	}

private:
	CComPtr<IDispatch>m_callback_onRejected;
	CComPtr<IDispatch>m_callback_onFulfilled;
	std::shared_ptr<ExRejectedType> m_pending_onRejected;
	std::shared_ptr<ExFulfilledType> m_pending_onFulfilled;
	std::function<HRESULT()> m_fun_core;
	std::function<HRESULT(std::shared_ptr<ExRejectedType> exRejected)> m_fun_onRejected;
	std::function<HRESULT(std::shared_ptr<ExFulfilledType> exFulfilled)> m_fun_onFulfilled;
	bool m_raised;
	int m_evt_onFulfilled;
	int m_evt_onRejected;
	ATLBrowserCallback* m_bcb_onRejected;
	ATLBrowserCallback* m_bcb_onFulfilled;
};


//
//	ExPromiseChild
//
class ExPromiseChild : public ExPromiseBase
{
public:
	ExPromiseChild(ATLBrowserCallback* bcb_onFulfilled, ATLBrowserCallback* bcb_onRejected);
	virtual ~ExPromiseChild();

	virtual  std::shared_ptr<ExPromiseChild> then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected = nullptr) override;
	virtual  std::shared_ptr<ExPromiseChild> catchh(CComPtr<IDispatch> onRejected) override;

private:
	bool raiseOnFulfilled(ATLBrowserCallback* bcb_onFulfilled);
	bool raiseOnRejected(ATLBrowserCallback* bcb_onRejected);

private:
	CComPtr<IDispatch>m_callback_onRejected;
	CComPtr<IDispatch>m_callback_onFulfilled;
	ATLBrowserCallback* m_bcb_onFulfilled;
	ATLBrowserCallback* m_bcb_onRejected;
	ATLBrowserCallback* m_bcb_pending_onFulfilled;
	ATLBrowserCallback* m_bcb_pending_onRejected;
	bool m_raised_onRejected;
	bool m_raised_onFulfilled;
};

