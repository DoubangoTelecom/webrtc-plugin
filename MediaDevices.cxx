// navigator.MediaDevices: https://www.w3.org/TR/mediacapture-streams/#mediadevices
#include "stdafx.h"
#include "MediaDevices.h"
#include "Promise.h"
#include "Utils.h"
#include "MediaTrackSupportedConstraints.h"
#include "MediaStream.h"
#include "ErrorMessage.h"

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
STDMETHODIMP CMediaDevices::getUserMedia(__in VARIANT constraints, __out VARIANT* pPromiseMediaStream)
{
	CComObject<CPromise>* promiseMediaStream;
	HRESULT hr = S_OK;

	std::shared_ptr<ExMediaStreamConstraints> mediaStreamConstraints;
	hr = Utils::BuildMediaStreamConstraints(constraints, mediaStreamConstraints);
	if (SUCCEEDED(hr)) {
		std::shared_ptr<ExPromiseAtl<CMediaStream, ExMediaStream, CErrorMessage, ExErrorMessage> > atlPromise =
			std::make_shared<ExPromiseAtl<CMediaStream, ExMediaStream, CErrorMessage, ExErrorMessage> >(RTC_WM_GETUSERMEDIA_SUCESS, RTC_WM_GETUSERMEDIA_ERROR);
		std::weak_ptr<ExPromiseAtl<CMediaStream, ExMediaStream, CErrorMessage, ExErrorMessage> > atlPromiseWeak(atlPromise);
		auto funcCore = [atlPromiseWeak](std::shared_ptr<ExMediaStreamConstraints> mediaStreamConstraints_) -> HRESULT {
			auto atlPromisePtr = atlPromiseWeak.lock();
			if (atlPromisePtr) {
				::getUserMedia(
					mediaStreamConstraints_.get(),
					[=](std::shared_ptr<ExMediaStream> stream) { atlPromisePtr->raiseOnFulfilled(stream); },
					[=](std::shared_ptr<ExErrorMessage> e) { atlPromisePtr->raiseOnRejected(e); }
				);
			}
			return S_OK;
		};
		hr = Utils::CreateInstanceWithRef(&promiseMediaStream, atlPromise->Bind(std::bind(funcCore, mediaStreamConstraints)));
		if (SUCCEEDED(hr)) {
			*pPromiseMediaStream = CComVariant(promiseMediaStream);
		}
	}
	return hr;
}

// Promise<sequence<MediaDeviceInfo>> enumerateDevices ();
STDMETHODIMP CMediaDevices::enumerateDevices(__out VARIANT* pPromiseSequenceMediaDeviceInfo)
{
	CComObject<CPromise>* promisePromiseSequenceMediaDeviceInfo;
	HRESULT hr = S_OK;
	hr = Utils::CreateInstanceWithRef(&promisePromiseSequenceMediaDeviceInfo, std::make_shared<ExPromiseEnumerateDevices>());
	if (SUCCEEDED(hr)) {
		*pPromiseSequenceMediaDeviceInfo = CComVariant(promisePromiseSequenceMediaDeviceInfo);
	}	
	return hr;
}

