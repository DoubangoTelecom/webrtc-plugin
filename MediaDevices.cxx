// navigator.MediaDevices: https://www.w3.org/TR/mediacapture-streams/#mediadevices
#include "stdafx.h"
#include "MediaDevices.h"
#include "Promise.h"
#include "Utils.h"
#include "MediaTrackSupportedConstraints.h"

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
		hr = Utils::CreateInstanceWithRef(&promiseMediaStream);
		if (SUCCEEDED(hr)) {
			std::shared_ptr<ExPromiseGetUserMedia> ex(new ExPromiseGetUserMedia(mediaStreamConstraints));
			promiseMediaStream->SetEx(ex);
			*pPromiseMediaStream = CComVariant(promiseMediaStream);
		}
	}
	return hr;
}
