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
	if (m_ex.get()) {
		m_ex->onaddtrackSet(nullptr);
		m_ex->onremovetrackSet(nullptr);
		m_ex = nullptr;
	}
	m_callback_onaddtrack = NULL;
	m_callback_onremovetrack = NULL;
	m_callback_oninactive = NULL;
	
}

void CMediaStream::SetEx(std::shared_ptr<ExMediaStream> ex)
{
	if ((m_ex = ex).get()) {
		m_ex->onaddtrackSet(std::bind(&CMediaStream::onaddtrack, this));
		m_ex->onremovetrackSet(std::bind(&CMediaStream::onremovetrack, this));
	}
}

std::shared_ptr<ExMediaStream> CMediaStream::GetEx()
{
	return m_ex;
}

STDMETHODIMP CMediaStream::get_id(__out BSTR* pVal)
{
	if (!m_ex.get()) {
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
	if (!m_ex.get()) {
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
		HRESULT hr = Utils::CreateInstanceWithRef(&track, exTrack);
		if (SUCCEEDED(hr)) {
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
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::shared_ptr<ExMediaStreamTrack> exMediaStreamTrack;
	RTC_CHECK_HR_RETURN((Utils::QueryEx<IMediaStreamTrack, CMediaStreamTrack, ExMediaStreamTrack>(MediaStreamTrack, exMediaStreamTrack)));
	m_ex->addTrack(exMediaStreamTrack);
	return S_OK;
}

STDMETHODIMP CMediaStream::removeTrack(__in VARIANT MediaStreamTrack)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::shared_ptr<ExMediaStreamTrack> exMediaStreamTrack;
	RTC_CHECK_HR_RETURN((Utils::QueryEx<IMediaStreamTrack, CMediaStreamTrack, ExMediaStreamTrack>(MediaStreamTrack, exMediaStreamTrack)));
	m_ex->removeTrack(exMediaStreamTrack);
	return S_OK;
}

STDMETHODIMP CMediaStream::clone(__out VARIANT* MediaStream)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	std::shared_ptr<ExMediaStream>exStream = m_ex->clone();
	if (!exStream) {
		*MediaStream = CComVariant(NULL);
		return S_OK;
	}

	CComObject<CMediaStream>* stream;
	HRESULT hr = Utils::CreateInstanceWithRef(&stream, exStream);
	if (SUCCEEDED(hr)) {
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
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onaddtrack);
	return S_OK;
}

STDMETHODIMP CMediaStream::put_onaddtrack(__in VARIANT newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onaddtrack = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStream::get_onremovetrack(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onremovetrack);
	return S_OK;
}

STDMETHODIMP CMediaStream::put_onremovetrack(__in VARIANT newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onremovetrack = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStream::get_oninactive(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_oninactive);
	return S_OK;
}

STDMETHODIMP CMediaStream::put_oninactive(__in VARIANT newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_oninactive = Utils::VariantToDispatch(newVal);
	return S_OK;
}

void CMediaStream::onaddtrack()
{
	if (m_callback_onaddtrack) {
		RTC_CHECK_HR_NOP(Utils::RaiseEventVoid(m_callback_onaddtrack, RTC_WM_SUCCESS));
	}
}

void CMediaStream::onremovetrack()
{
	if (m_callback_onremovetrack) {
		RTC_CHECK_HR_NOP(Utils::RaiseEventVoid(m_callback_onremovetrack, RTC_WM_SUCCESS));
	}
}

HRESULT CMediaStream::getTracks(TrackTypeFlags type, VARIANT* Tracks)
{
	HRESULT hr = S_OK;
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	CComPtr<IDispatch> spDispatch;
	RTC_CHECK_HR_RETURN(hr = CPlugin::Singleton()->GetDispatch(spDispatch));

	std::vector<CComVariant> atlVect;
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
		hr = Utils::CreateInstanceWithRef(&_track, tracks->values[i]);
		if (SUCCEEDED(hr)) {
			atlVect.push_back(CComVariant(_track));
			RTC_SAFE_RELEASE(&_track);
		}
	}

	CComQIPtr<IDispatchEx> spArray;
	RTC_CHECK_HR_RETURN(hr = Utils::CreateJsArray(spDispatch, atlVect, spArray));

	*Tracks = CComVariant(spArray.Detach());
	return hr;
}