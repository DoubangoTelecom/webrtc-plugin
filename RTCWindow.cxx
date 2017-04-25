#include "stdafx.h"
#include "RTCWindow.h"
#include "Utils.h"

CRTCWindow::CRTCWindow()
{

}

HRESULT CRTCWindow::FinalConstruct()
{
	return S_OK;
}

void CRTCWindow::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCWindow::SetEx(std::shared_ptr<ExRTCWindow> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCWindow> CRTCWindow::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCWindow::get_id(__out INT_PTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->id();
	return S_OK;
}

STDMETHODIMP CRTCWindow::get_title(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->title(), pVal));
	return S_OK;
}