// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStream

#include "stdafx.h"
#include "MediaStream.h"
#include "MediaStreamTrack.h"
#include "Utils.h"
#include "Plugin.h"
#include "ATLBrowserCallback.h"

CMediaStream::CMediaStream()
	: m_callback_onaddtrack(NULL)
	, m_callback_onremovetrack(NULL)
	, m_callback_oninactive(NULL)
	, m_ex(nullptr)
{
}

HRESULT CMediaStream::FinalConstruct()
{
	return S_OK;
}

void CMediaStream::FinalRelease()
{
	m_callback_onaddtrack = NULL;
	m_callback_onremovetrack = NULL;
	m_callback_oninactive = NULL;
	SetDispatcher(NULL);
	m_ex = nullptr;
}

void CMediaStream::SetEx(std::shared_ptr<ExMediaStream> ex)
{
	if ((m_ex = ex)) {
		m_ex->onaddtrackSet(std::bind(&CMediaStream::onaddtrack, this));
		m_ex->onremovetrackSet(std::bind(&CMediaStream::onremovetrack, this));
	}
}

std::shared_ptr<ExMediaStream> CMediaStream::GetEx()
{
	return m_ex;
}

void CMediaStream::onaddtrack()
{
	if (m_callback_onaddtrack) {
		ATLBrowserCallback* bcb = new ATLBrowserCallback(RTC_WM_SUCCESS, m_callback_onaddtrack);
		if (bcb) {
			this->RaiseCallback(bcb);
			RTC_SAFE_RELEASE_OBJECT(&bcb);
		}
	}
}

void CMediaStream::onremovetrack()
{
	if (m_callback_onremovetrack) {
		ATLBrowserCallback* bcb = new ATLBrowserCallback(RTC_WM_SUCCESS, m_callback_onremovetrack);
		if (bcb) {
			this->RaiseCallback(bcb);
			RTC_SAFE_RELEASE_OBJECT(&bcb);
		}
	}
}

HRESULT CMediaStream::getTracks(TrackTypeFlags type, VARIANT* Tracks)
{
	HRESULT hr = S_OK;
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	CComPtr<CPlugin> pluginInstance = dynamic_cast<CPlugin*>(const_cast<AsyncEventDispatcher*>(GetDispatcher()));
	if (!pluginInstance) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	CComPtr<IDispatch> spDispatch;
	RTC_CHECK_HR_RETURN(hr = pluginInstance->GetDispatch(spDispatch));

	std::vector<CComVariant> vect;
	std::shared_ptr<Sequence<ExMediaStreamTrack> > _tracks;
	std::shared_ptr<Sequence<ExMediaStreamTrack> > tracks(new Sequence<ExMediaStreamTrack>());
	if ((type & TrackTypeFlagsAudio) == TrackTypeFlagsAudio && (_tracks = m_ex->getAudioTracks()) && _tracks.get()) {
		tracks->AddSeq(_tracks.get());
	}
	if ((type & TrackTypeFlagsVideo) == TrackTypeFlagsVideo && (_tracks = m_ex->getVideoTracks()) && _tracks.get()) {
		tracks->AddSeq(_tracks.get());
	}

	for (size_t i = 0; i < tracks->values.size(); ++i) {
		if (!tracks->values[i]) {
			continue;
		}
		CComObject<CMediaStreamTrack>* _track;
		hr = Utils::CreateInstanceWithRef(&_track);
		if (SUCCEEDED(hr)) {
			_track->SetDispatcher(pluginInstance);
			_track->SetEx(tracks->values[i]);
			vect.push_back(CComVariant(_track));
			RTC_SAFE_RELEASE(&_track);
		}
	}

	CComQIPtr<IDispatchEx> spArray;
	RTC_CHECK_HR_RETURN(hr = Utils::CreateJsArray(spDispatch, vect, spArray));

	*Tracks = CComVariant(spArray.Detach());
	return hr;
}

STDMETHODIMP CMediaStream::get_id(__out BSTR* pVal)
{
	if (!m_ex) {
		return E_POINTER;
	}
	return Utils::CopyAnsiStr(m_ex->id(), pVal);
}

STDMETHODIMP CMediaStream::getAudioTracks(__out VARIANT* Tracks)
{
	return getTracks(TrackTypeFlagsAudio, Tracks);
}

STDMETHODIMP CMediaStream::getVideoTracks(__out VARIANT* Tracks)
{
	return getTracks(TrackTypeFlagsVideo, Tracks);
}

STDMETHODIMP CMediaStream::getTracks(__out VARIANT* Tracks)
{
	return getTracks(TrackTypeFlagsAll, Tracks);
}

STDMETHODIMP CMediaStream::getTrackById(__in BSTR trackId, __out VARIANT* MediaStreamTrack)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	char* lpszTrackId = _com_util::ConvertBSTRToString(trackId);

	if (!lpszTrackId) {
		RTC_CHECK_HR_RETURN(E_INVALIDARG);
	}

	std::shared_ptr<ExMediaStreamTrack> exTrack = m_ex->getTrackById(lpszTrackId);
	delete[] lpszTrackId;
	if (exTrack) {
		CComObject<CMediaStreamTrack>* track;
		HRESULT hr = Utils::CreateInstanceWithRef(&track);
		if (SUCCEEDED(hr)) {
			track->SetDispatcher(const_cast<AsyncEventDispatcher*>(GetDispatcher()));
			track->SetEx(exTrack);
			*MediaStreamTrack = CComVariant(track);
		}
		return hr;
	}
	else {
		*MediaStreamTrack = CComVariant(NULL);
		return S_OK;
	}
}

STDMETHODIMP CMediaStream::addTrack(__in VARIANT MediaStreamTrack)
{
	HRESULT hr;
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	CComPtr<IDispatch>track = Utils::VariantToDispatch(MediaStreamTrack);
	if (!track) {
		RTC_CHECK_HR_RETURN(E_INVALIDARG);
	}

	CComPtr<IMediaStreamTrack> mediaStreamTrack = NULL;
	RTC_CHECK_HR_RETURN(hr = track->QueryInterface(&mediaStreamTrack));

	CMediaStreamTrack* pTrack = dynamic_cast<CMediaStreamTrack*>(mediaStreamTrack.p);
	if (!pTrack) {
		RTC_CHECK_HR_RETURN(E_INVALIDARG);
	}

	m_ex->addTrack(pTrack->GetEx().get());

	return S_OK;
}

STDMETHODIMP CMediaStream::removeTrack(__in VARIANT MediaStreamTrack)
{
	HRESULT hr;
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	CComPtr<IDispatch>track = Utils::VariantToDispatch(MediaStreamTrack);
	if (!track) {
		RTC_CHECK_HR_RETURN(E_INVALIDARG);
	}

	CComPtr<IMediaStreamTrack> mediaStreamTrack = NULL;
	RTC_CHECK_HR_RETURN(hr = track->QueryInterface(&mediaStreamTrack));

	CMediaStreamTrack* pTrack = dynamic_cast<CMediaStreamTrack*>(mediaStreamTrack.p);
	if (!pTrack) {
		RTC_CHECK_HR_RETURN(E_INVALIDARG);
	}

	m_ex->removeTrack(pTrack->GetEx().get());

	return S_OK;
}

STDMETHODIMP CMediaStream::clone(__out VARIANT* MediaStream)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	std::shared_ptr<ExMediaStream>exStream = m_ex->clone();
	if (!exStream) {
		*MediaStream = CComVariant(NULL);
		return S_OK;
	}

	CComObject<CMediaStream>* stream;
	HRESULT hr = Utils::CreateInstanceWithRef(&stream);
	if (SUCCEEDED(hr)) {
		stream->SetDispatcher(const_cast<AsyncEventDispatcher*>(GetDispatcher()));
		stream->SetEx(exStream);
		*MediaStream = CComVariant(stream);
	}
	return hr;
}

STDMETHODIMP CMediaStream::get_active(__out VARIANT_BOOL* pVal)
{
	return E_NOTIMPL;
}

STDMETHODIMP CMediaStream::get_onaddtrack(__out VARIANT* pVal)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onaddtrack);
	return S_OK;
}

STDMETHODIMP CMediaStream::put_onaddtrack(__in VARIANT newVal)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onaddtrack = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStream::get_onremovetrack(__out VARIANT* pVal)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onremovetrack);
	return S_OK;
}

STDMETHODIMP CMediaStream::put_onremovetrack(__in VARIANT newVal)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onremovetrack = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStream::get_oninactive(__out VARIANT* pVal)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_oninactive);
	return S_OK;
}

STDMETHODIMP CMediaStream::put_oninactive(__in VARIANT newVal)
{
	if (!m_ex) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_oninactive = Utils::VariantToDispatch(newVal);
	return S_OK;
}
