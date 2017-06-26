// navigator.MediaDevices: https://www.w3.org/TR/mediacapture-streams/#mediadevices
#include "stdafx.h"
#include "ExMediaDevices.h"
#include "MediaDevices.h"
#include "Promise.h"
#include "Utils.h"
#include "MediaTrackSupportedConstraints.h"
#include "MediaStream.h"
#include "ErrorMessage.h"
#include "JsArray.h"

CMediaDevices::CMediaDevices()
{

}

HRESULT CMediaDevices::FinalConstruct()
{
	return S_OK;
}

void CMediaDevices::FinalRelease()
{
}

// MediaTrackSupportedConstraints getSupportedConstraints ()
STDMETHODIMP CMediaDevices::getSupportedConstraints(__out VARIANT* pConstraints)
{
	CComObject<CMediaTrackSupportedConstraints>* constraints;
	HRESULT hr = Utils::CreateInstanceWithRef(&constraints);
	if (SUCCEEDED(hr)) {
		*pConstraints = CComVariant(constraints);
	}
	return hr;
}

// Promise<MediaStream> getUserMedia (MediaStreamConstraints constraints)
STDMETHODIMP CMediaDevices::getUserMedia(__in_opt VARIANT constraints, __out VARIANT* pPromiseMediaStream)
{
	const VARIANTARG args[] = { constraints };
	RTC_CHECK_HR_RETURN(Utils::ExecJsFunction(
		"__promise_navigator_mediaDevices_getUserMediaPromiseHook",
		args, sizeof(args) / sizeof(args[0]), pPromiseMediaStream
	));
	return S_OK;
}

// Promise<MediaStream> getUserMedia (MediaStreamConstraints constraints)
STDMETHODIMP CMediaDevices::getUserMediaPromiseHook(__in_opt VARIANT constraints, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback)
{
	HRESULT hr = S_OK;
	std::shared_ptr<ExMediaStreamConstraints> mediaStreamConstraints;
	hr = Utils::BuildMediaStreamConstraints(constraints, mediaStreamConstraints);
	if (SUCCEEDED(hr)) {
		CComPtr<IDispatch> spSuccessCallback = Utils::VariantToDispatch(successCallback);
		CComPtr<IDispatch> spErrorCallback = Utils::VariantToDispatch(errorCallback);
		if (spSuccessCallback || spErrorCallback) {
			::getUserMedia(
				mediaStreamConstraints.get(),
				[spSuccessCallback](std::shared_ptr<ExMediaStream> exStream) { RTC_CHECK_HR_NOP((Utils::RaiseEvent<CMediaStream, ExMediaStream>(spSuccessCallback, RTC_WM_GETUSERMEDIA_SUCESS, exStream))); },
				[spErrorCallback](std::shared_ptr<ExErrorMessage> exError) { RTC_CHECK_HR_NOP((Utils::RaiseEvent<CErrorMessage, ExErrorMessage>(spErrorCallback, RTC_WM_GETUSERMEDIA_ERROR, exError))); }
			);
		}
	}
	return hr;
}

// Promise<sequence<MediaDeviceInfo>> enumerateDevices ();
STDMETHODIMP CMediaDevices::enumerateDevices(__out VARIANT* pPromiseSequenceMediaDeviceInfo)
{
	RTC_CHECK_HR_RETURN(Utils::ExecJsFunction(
		"__promise_navigator_mediaDevices_enumerateDevicesPromiseHook",
		NULL, 0, pPromiseSequenceMediaDeviceInfo
	));
	return S_OK;
}

// Promise<sequence<MediaDeviceInfo>> enumerateDevices ();
STDMETHODIMP CMediaDevices::enumerateDevicesPromiseHook(__in_opt VARIANT successCallback, __in_opt VARIANT errorCallback)
{
	CComPtr<IDispatch> spSuccessCallback = Utils::VariantToDispatch(successCallback);
	CComPtr<IDispatch> spErrorCallback = Utils::VariantToDispatch(errorCallback);
	if (spSuccessCallback || spErrorCallback) {
		CComQIPtr<IDispatchEx> spDevices;
		CComPtr<IDispatch> spDispatch;
		RTC_CHECK_HR_RETURN(CPlugin::Singleton()->GetDispatch(spDispatch));
		HRESULT hr = ExMediaDevices::enumerateDevices(spDispatch, spDevices); // Must be called on UI thread (required by ATL function 'Utils::CreateJsArray')
		if (SUCCEEDED(hr)) {
			if (spSuccessCallback) {
				std::shared_ptr<ExJsArray> exJsArrayDevices = std::make_shared<ExJsArray>(spDevices);
				ATLBrowserCallback* bcb = new ATLBrowserCallback(static_cast<unsigned>(RTC_WM_ENUMERATEDEVICES_SUCESS), spSuccessCallback);
				if (bcb) {
					bcb->AddDispatch(exJsArrayDevices->spJsArray().Detach());
					dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
					RTC_SAFE_RELEASE_OBJECT(&bcb);
				}
			}
		}
		else if (spErrorCallback) {
			std::shared_ptr<ExErrorMessage> exError = std::make_shared<ExErrorMessage>(RTC_OperationError);
			RTC_CHECK_HR_NOP((Utils::RaiseEvent<CErrorMessage, ExErrorMessage>(spErrorCallback, RTC_WM_ENUMERATEDEVICES_ERROR, exError)));
		}
	}
	return S_OK;
}

