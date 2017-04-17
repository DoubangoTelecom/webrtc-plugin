// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrack

#include "stdafx.h"
#include "MediaStreamTrack.h"
#include "ATLBrowserCallback.h"
#include "Utils.h"

CMediaStreamTrack::CMediaStreamTrack()
	: m_ex(nullptr)
	, m_callback_onmute(NULL)
	, m_callback_onunmute(NULL)
	, m_callback_onended(NULL)
	, m_callback_onoverconstrained(NULL)
{

}

HRESULT CMediaStreamTrack::FinalConstruct()
{
	return S_OK;
}

void CMediaStreamTrack::FinalRelease()
{
	m_callback_onmute = NULL;
	m_callback_onunmute = NULL;
	m_callback_onended = NULL;
	m_callback_onoverconstrained = NULL;

	m_ex = nullptr;
}

void CMediaStreamTrack::SetEx(std::shared_ptr<ExMediaStreamTrack> ex)
{
	if ((m_ex = ex)) {
		m_ex->onmuteSet(std::bind(&CMediaStreamTrack::onmute, this));
		m_ex->onunmuteSet(std::bind(&CMediaStreamTrack::onunmute, this));
		m_ex->onendedSet(std::bind(&CMediaStreamTrack::onended, this));
		m_ex->onoverconstrainedSet(std::bind(&CMediaStreamTrack::onoverconstrained, this));
	}
}

std::shared_ptr<ExMediaStreamTrack> CMediaStreamTrack::GetEx()
{
	return m_ex;
}

void CMediaStreamTrack::onmute()
{
	if (m_callback_onmute) {
		RTC_CHECK_HR_NOP(Utils::RaiseEventVoid(m_callback_onmute, RTC_WM_SUCCESS));
	}
}

void CMediaStreamTrack::onunmute()
{
	if (m_callback_onunmute) {
		RTC_CHECK_HR_NOP(Utils::RaiseEventVoid(m_callback_onunmute, RTC_WM_SUCCESS));
	}
}

void CMediaStreamTrack::onended()
{
	if (m_callback_onended) {
		RTC_CHECK_HR_NOP(Utils::RaiseEventVoid(m_callback_onended, RTC_WM_SUCCESS));
	}
}

void CMediaStreamTrack::onoverconstrained()
{
	if (m_callback_onoverconstrained) {
		RTC_CHECK_HR_NOP(Utils::RaiseEventVoid(m_callback_onoverconstrained, RTC_WM_SUCCESS));
	}
}

STDMETHODIMP CMediaStreamTrack::get_kind(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return Utils::CopyAnsiStr(m_ex->kind(), pVal);
}

STDMETHODIMP CMediaStreamTrack::get_id(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return Utils::CopyAnsiStr(m_ex->id(), pVal);
}

STDMETHODIMP CMediaStreamTrack::get_label(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return Utils::CopyAnsiStr(m_ex->label(), pVal);
}

STDMETHODIMP CMediaStreamTrack::get_enabled(__out VARIANT_BOOL* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}

	*pVal = m_ex->enabled() ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::put_enabled(__in VARIANT_BOOL newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return m_ex->enabledSet(newVal != VARIANT_FALSE) ? S_OK : E_FAIL;
}

STDMETHODIMP CMediaStreamTrack::get_muted(__out VARIANT_BOOL* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->muted() ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::get_onmute(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onmute);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::put_onmute(__in VARIANT newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onmute = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::get_onunmute(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onunmute);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::put_onunmute(__in VARIANT newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onunmute = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::get_readyState(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return Utils::CopyAnsiStr(m_ex->readyState(), pVal);
}

STDMETHODIMP CMediaStreamTrack::get_onended(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onended);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::put_onended(__in VARIANT newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onended = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::getCapabilities(__out VARIANT* MediaTrackCapabilities)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return (E_NOTIMPL);
}

STDMETHODIMP CMediaStreamTrack::getConstraints(__out VARIANT* MediaConstraints)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return (E_NOTIMPL);
}

STDMETHODIMP CMediaStreamTrack::getSettings(__out VARIANT* MediaTrackSettings)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return (E_NOTIMPL);
}

STDMETHODIMP CMediaStreamTrack::applyConstraints(__in VARIANT MediaConstraints)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return (E_NOTIMPL);
}

STDMETHODIMP CMediaStreamTrack::get_onoverconstrained(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = CComVariant(m_callback_onoverconstrained);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::put_onoverconstrained(__in VARIANT newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onoverconstrained = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CMediaStreamTrack::clone(__out VARIANT* MediaStreamTrack)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return (E_NOTIMPL);
}

STDMETHODIMP CMediaStreamTrack::stop()
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_ex->stop();
	return S_OK;
}
