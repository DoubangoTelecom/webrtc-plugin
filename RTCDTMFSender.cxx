// https://www.w3.org/TR/webrtc/#rtcdtmfsender

#include "stdafx.h"
#include "RTCDTMFSender.h"
#include "RTCDTMFToneChangeEvent.h"
#include "Utils.h"

CRTCDTMFSender::CRTCDTMFSender()
{

}

HRESULT CRTCDTMFSender::FinalConstruct()
{
	return S_OK;
}

void CRTCDTMFSender::FinalRelease()
{
	if (m_ex.get()) {
		m_ex->ontonechangeSet(nullptr);

		m_ex = nullptr;
	}
}

void CRTCDTMFSender::SetEx(std::shared_ptr<ExRTCDTMFSender> ex)
{
	if ((m_ex = ex).get()) {
		m_ex->ontonechangeSet(std::bind(&CRTCDTMFSender::ontonechange, this, std::placeholders::_1));
	}
}

std::shared_ptr<ExRTCDTMFSender> CRTCDTMFSender::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webrtc/#rtcdtmfsender
// void insertDTMF(DOMString tones, optional unsigned long duration = 100, optional unsigned long interToneGap = 70);
STDMETHODIMP CRTCDTMFSender::insertDTMF(__in BSTR bstrTones, __in_opt VARIANT varDuration, __in_opt VARIANT varInterToneGap)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	long duration = 100, interToneGap = 70;
	if (Utils::VariantIsInteger(varDuration) || Utils::VariantIsBSTR(varDuration)) { // optional -> duration.vt == VT_ERROR
		Utils::VariantToInteger(varDuration, duration);
	}
	if (Utils::VariantIsInteger(varInterToneGap) || Utils::VariantIsBSTR(varInterToneGap)) { // optional -> interToneGap.vt == VT_ERROR
		Utils::VariantToInteger(varInterToneGap, interToneGap);
	}
	std::string tones;
	RTC_CHECK_HR_RETURN(Utils::ToString(&bstrTones, tones));
	if (!m_ex->insertDTMF(tones, static_cast<unsigned long>(duration), static_cast<unsigned long>(interToneGap))) {
		RTC_CHECK_HR_RETURN(E_FAIL);
	}
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcdtmfsender
// attribute EventHandler ontonechange
STDMETHODIMP CRTCDTMFSender::get_ontonechange(__out VARIANT* varEventHandler)
{
	*varEventHandler = CComVariant(m_callback_ontonechange);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcdtmfsender
// attribute EventHandler ontonechange
STDMETHODIMP CRTCDTMFSender::put_ontonechange(__in VARIANT varEventHandler)
{
	m_callback_ontonechange = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcdtmfsender
// readonly attribute DOMString    toneBuffer
STDMETHODIMP CRTCDTMFSender::get_toneBuffer(__out BSTR* bstrBuffer)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->toneBuffer(), bstrBuffer));
	return S_OK;
}

void CRTCDTMFSender::ontonechange(std::shared_ptr<ExRTCDTMFToneChangeEvent> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CRTCDTMFToneChangeEvent, ExRTCDTMFToneChangeEvent>(m_callback_ontonechange, RTC_WM_ONTONECHANGE, e)));
}
