// https://www.w3.org/TR/webrtc/#rtcerror-object

#include "stdafx.h"
#include "RTCError.h"
#include "Utils.h"


CRTCError::CRTCError()
	: m_ex(nullptr)
{
}

HRESULT CRTCError::FinalConstruct()
{
	return S_OK;
}

void CRTCError::FinalRelease()
{
}

void CRTCError::SetEx(std::shared_ptr<ExRTCError> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCError> CRTCError::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCError::get_name(__out BSTR* pVal)
{
	if (m_ex) {
		return Utils::CopyAnsiStr(m_ex->name().c_str(), pVal);
	}
	return E_POINTER;
}

STDMETHODIMP CRTCError::get_message(__out BSTR* pVal)
{
	if (m_ex) {
		return Utils::CopyAnsiStr(m_ex->message().c_str(), pVal);
	}
	return E_POINTER;
}

STDMETHODIMP CRTCError::get_errorDetail(__out BSTR* pVal)
{
	if (m_ex) {
		return Utils::CopyAnsiStr(m_ex->errorDetail().c_str(), pVal);
	}
	return E_POINTER;
}

STDMETHODIMP CRTCError::get_sdpLineNumber(__out LONG* pVal)
{
	if (m_ex) {
		*pVal = m_ex->sdpLineNumber();
		return S_OK;
	}
	return E_POINTER;
}

STDMETHODIMP CRTCError::get_httpRequestStatusCode(__out LONG* pVal)
{
	*pVal = m_ex->httpRequestStatusCode();
	return S_OK;
}

STDMETHODIMP CRTCError::toString(__out BSTR* String)
{
	if (m_ex) {
		return Utils::CopyAnsiStr(m_ex->toString().c_str(), String);
	}
	return E_POINTER;
}