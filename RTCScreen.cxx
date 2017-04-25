#include "stdafx.h"
#include "RTCScreen.h"
#include "Utils.h"


CRTCScreen::CRTCScreen()
{
}

HRESULT CRTCScreen::FinalConstruct()
{
	return S_OK;
}

void CRTCScreen::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCScreen::SetEx(std::shared_ptr<ExRTCScreen> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCScreen> CRTCScreen::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCScreen::get_id(__out INT_PTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->id();
	return S_OK;
}

STDMETHODIMP CRTCScreen::get_title(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->title(), pVal));
	return S_OK;
}