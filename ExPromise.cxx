#include "stdafx.h"
#include "ExPromise.h"
#include "ExMediaStreamConstraints.h"

#include "ATLBrowserCallback.h"
#include "AsyncEvent.h"
#include "Utils.h"
#include "Plugin.h"
#include "MediaStream.h"
#include "ErrorMessage.h"

//
//	ExPromise
//

ExPromise::ExPromise(ExPromiseType eType)
	: m_eType(eType)
{

}

ExPromise::~ExPromise()
{
	m_callback_onRejected = NULL;
	m_callback_onFulfilled = NULL;
}

HRESULT ExPromise::then(CComPtr<IDispatch> onFulfilled)
{
	m_callback_onFulfilled = onFulfilled;
	return S_OK;
}

HRESULT ExPromise::catchh(CComPtr<IDispatch> onRejected)
{
	m_callback_onRejected = onRejected;
	return S_OK;
}

//
//	ExPromiseGetUserMedia
//

ExPromiseGetUserMedia::ExPromiseGetUserMedia(std::shared_ptr<ExMediaStreamConstraints> constraints /*= nullptr*/)
	: ExPromise(ExPromiseType_GetUserMedia)
	, m_constraints(constraints)
	, m_raised(false)
{

}
	
ExPromiseGetUserMedia::~ExPromiseGetUserMedia()
{
	m_constraints = nullptr;
}

HRESULT ExPromiseGetUserMedia::then(CComPtr<IDispatch> onFulfilled) /* override(ExPromise)*/
{
	RTC_CHECK_HR_RETURN(ExPromise::then(onFulfilled)); // call base class implementation
	RTC_CHECK_HR_RETURN(Start());
	return S_OK;
}

HRESULT ExPromiseGetUserMedia::catchh(CComPtr<IDispatch> onRejected) /* override(ExPromise)*/
{
	RTC_CHECK_HR_RETURN(ExPromise::catchh(onRejected)); // call base class implementation
	RTC_CHECK_HR_RETURN(Start());
	return S_OK;
}

HRESULT ExPromiseGetUserMedia::Start()
{
	if (m_raised) {
		if (m_onFulfilledPendingStream) {
			RTC_CHECK_HR_RETURN(RaiseOnFulfilled(m_onFulfilledPendingStream));
			m_onFulfilledPendingStream = nullptr;
		}
		if (m_onRejectedPendingError) {
			RTC_CHECK_HR_RETURN(RaiseOnRejected(m_onRejectedPendingError));
			m_onRejectedPendingError = nullptr;
		}
		return S_OK;
	}
	m_raised = true;
	m_onFulfilledPendingStream = nullptr;
	m_onRejectedPendingError = nullptr;

	getUserMedia(
			m_constraints.get(),
			[this](std::shared_ptr<ExMediaStream> stream) {
				RaiseOnFulfilled(stream);
			},
			[this](std::shared_ptr<ExErrorMessage> e) {
				RaiseOnRejected(e);
			});

	return S_OK;
}

HRESULT ExPromiseGetUserMedia::RaiseOnFulfilled(std::shared_ptr<ExMediaStream> exStream)
{
	HRESULT hr = S_OK;
	if (m_callback_onFulfilled) {
		CComObject<CMediaStream>* stream;
		hr = Utils::CreateInstanceWithRef(&stream);
		if (SUCCEEDED(hr)) {
			ATLBrowserCallback* bcb = new ATLBrowserCallback(RTC_WM_GETUSERMEDIA_SUCESS, m_callback_onFulfilled);
			if (bcb) {
				stream->SetEx(exStream);
				stream->SetDispatcher(CPlugin::Singleton());
				bcb->AddDispatch(stream);
				dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
				RTC_SAFE_RELEASE_OBJECT(&bcb);
			}
			RTC_SAFE_RELEASE(&stream);
		}
	}
	else {
		m_onFulfilledPendingStream = exStream;
	}
	return hr;
}

HRESULT ExPromiseGetUserMedia::RaiseOnRejected(std::shared_ptr<ExErrorMessage> exError)
{
	HRESULT hr = S_OK;
	if (m_callback_onRejected) {
		CComObject<CErrorMessage>* error;
		hr = Utils::CreateInstanceWithRef(&error);
		if (SUCCEEDED(hr)) {
			ATLBrowserCallback* bcb = new ATLBrowserCallback(RTC_WM_GETUSERMEDIA_ERROR, m_callback_onRejected);
			if (bcb) {
				error->SetEx(exError);
				bcb->AddDispatch(error);
				dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
				RTC_SAFE_RELEASE_OBJECT(&bcb);
			}
			RTC_SAFE_RELEASE(&error);
		}
	}
	else {
		m_onRejectedPendingError = exError;
	}
	return hr;
}
