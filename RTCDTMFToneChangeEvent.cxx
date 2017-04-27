// https://www.w3.org/TR/webrtc/#dom-rtcdtmftonechangeevent

#include "stdafx.h"
#include "RTCDTMFToneChangeEvent.h"
#include "Utils.h"

CRTCDTMFToneChangeEvent::CRTCDTMFToneChangeEvent()
{

}

HRESULT CRTCDTMFToneChangeEvent::FinalConstruct()
{
	return S_OK;
}

void CRTCDTMFToneChangeEvent::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCDTMFToneChangeEvent::SetEx(std::shared_ptr<ExRTCDTMFToneChangeEvent> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCDTMFToneChangeEvent> CRTCDTMFToneChangeEvent::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdtmftonechangeevent
// readonly attribute DOMString tone;
STDMETHODIMP CRTCDTMFToneChangeEvent::get_tone(__out BSTR* bstrTone)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->tone(), bstrTone));
	return S_OK;
}