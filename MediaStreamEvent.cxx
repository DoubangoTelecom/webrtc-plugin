// http://www.w3.org/TR/webrtc/#idl-def-MediaStreamEvent (deprecated)
#include "stdafx.h"
#include "MediaStreamEvent.h"
#include "MediaStream.h"
#include "Utils.h"

CMediaStreamEvent::CMediaStreamEvent()
{

}

HRESULT CMediaStreamEvent::FinalConstruct()
{
	return S_OK;
}

void CMediaStreamEvent::FinalRelease()
{
	m_ex = nullptr;
}

void CMediaStreamEvent::SetEx(std::shared_ptr<ExMediaStreamEvent> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExMediaStreamEvent> CMediaStreamEvent::GetEx()
{
	return m_ex;
}

STDMETHODIMP CMediaStreamEvent::get_stream(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CMediaStream>* _stream;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&_stream, m_ex->stream()));
	 HRESULT hr = CComVariant(_stream).Detach(pVal);
	RTC_SAFE_RELEASE(&_stream);
	return hr;
}
