#pragma once
#include "Config.h"
#include "Common.h"
#include "AsyncEvent.h"

class ExMediaStream;
class ExErrorMessage;
class ExRTCPeerConnection;
class ExRTCSessionDescription;
class ExRTCError;
class ExRTCIceCandidate;
class ExMediaStreamTrack;

//
//	ExPromiseBase
//

class ExPromiseBase {
public:
	ExPromiseBase() { }
	virtual ~ExPromiseBase() { }
	virtual HRESULT then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected = nullptr) = 0;
	virtual HRESULT catchh(CComPtr<IDispatch> onRejected) = 0;
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
	}

	std::shared_ptr<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > Bind(std::function<HRESULT()> fun_core)
	{
		m_fun_core = fun_core;
		std::shared_ptr<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > This
			= shared_from_this();
		std::weak_ptr<ExPromiseAtl<AltFulfilledType, ExFulfilledType, AtlRejectedType, ExRejectedType> > ThisWeak(This);
		m_fun_onFulfilled = [ThisWeak](std::shared_ptr<ExFulfilledType> exFulfilledObject) -> HRESULT {
			auto ThisPtr = ThisWeak.lock();
			if (ThisPtr && ThisPtr->m_callback_onFulfilled) {
				RTC_CHECK_HR_RETURN((Utils::RaiseEvent<AltFulfilledType, ExFulfilledType>(ThisPtr->m_callback_onFulfilled, ThisPtr->m_evt_onFulfilled, exFulfilledObject)));
			}
			return S_OK;
		};
		m_fun_onRejected = [ThisWeak](std::shared_ptr<ExRejectedType> exRejectedObject) -> HRESULT {
			auto ThisPtr = ThisWeak.lock();
			if (ThisPtr && ThisPtr->m_callback_onRejected) {
				RTC_CHECK_HR_RETURN((Utils::RaiseEvent<AtlRejectedType, ExRejectedType>(ThisPtr->m_callback_onRejected, ThisPtr->m_evt_onRejected, exRejectedObject)));
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

	virtual HRESULT then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected = nullptr) override
	{
		m_callback_onFulfilled = onFulfilled;
		if (onRejected) {
			m_callback_onRejected = onRejected;
		}
		RTC_CHECK_HR_RETURN(start());
		return S_OK;
	}

	virtual HRESULT catchh(CComPtr<IDispatch> onRejected) override
	{
		m_callback_onRejected = onRejected;
		RTC_CHECK_HR_RETURN(start());
		return S_OK;
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
};


enum ExPromiseType
{
	ExPromiseType_Unknown,
	ExPromiseType_Void,
	ExPromiseType_GetUserMedia,
	ExPromiseType_EnumerateDevices,
	ExPromiseType_CreateSessionDescription,
	ExPromiseType_GetStats,
};

//
//	ExPromise
//
class ExPromise : public ExPromiseBase
{
protected:
	ExPromise(ExPromiseType eType);
public:
	virtual ~ExPromise();

	_inline ExPromiseType type() const { return m_eType; }

	virtual HRESULT then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected = nullptr) override;
	virtual HRESULT catchh(CComPtr<IDispatch> onRejected) override;

protected:
	CComPtr<IDispatch>m_callback_onRejected;
	CComPtr<IDispatch>m_callback_onFulfilled;

private:
	ExPromiseType m_eType;
};

//
//	ExPromiseEnumerateDevices
//
class ExPromiseEnumerateDevices : public ExPromise
{
public:
	ExPromiseEnumerateDevices();
	virtual ~ExPromiseEnumerateDevices();

	virtual HRESULT then(CComPtr<IDispatch> onFulfilled, CComPtr<IDispatch> onRejected = nullptr) override;
	virtual HRESULT catchh(CComPtr<IDispatch> onRejected) override;

private:
	
};

