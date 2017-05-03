// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
#include "stdafx.h"
#include "MessageEvent.h"
#include "Utils.h"

CMessageEvent::CMessageEvent()
{
}

HRESULT CMessageEvent::FinalConstruct()
{
	return S_OK;
}

void CMessageEvent::FinalRelease()
{
	m_ex = nullptr;
}

void CMessageEvent::SetEx(std::shared_ptr<ExMessageEvent> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExMessageEvent> CMessageEvent::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
// readonly attribute any data;
STDMETHODIMP CMessageEvent::get_data(__out VARIANT* varAny)
{
	if (!m_ex || !m_ex->data().get()) {
		return CComVariant(NULL).Detach(varAny);
	}
	if (m_ex->binary()) {
		CComPtr<IDispatch> spDispatch;
		RTC_CHECK_HR_RETURN(CPlugin::Singleton()->GetDispatch(spDispatch));

		const uint8_t* ptr = reinterpret_cast<const uint8_t*>(m_ex->data()->ptr());
		const size_t size = m_ex->data()->size();
		std::vector<CComVariant> vect;
		for (size_t i = 0; i < size; ++i) {
			vect.push_back(CComVariant(ptr[i]));
		}
		CComQIPtr<IDispatchEx> spArray;
		CComVariant varRawBuffer;
		RTC_CHECK_HR_RETURN(Utils::CreateJsArrayEx(spDispatch, vect, L"Uint8Array", spArray));
		RTC_CHECK_HR_RETURN(Utils::DispatchGetProp(spArray.p, L"buffer", &varRawBuffer));
		RTC_CHECK_HR_RETURN(varRawBuffer.Detach(varAny));
	}
	else {
		RTC_CHECK_HR_RETURN(CComVariant(CComBSTR(reinterpret_cast<const char*>(m_ex->data()->ptr()))).Detach(varAny));
	}
	return S_OK;
}

// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
// readonly attribute DOMString origin;
STDMETHODIMP CMessageEvent::get_origin(__out BSTR* DOMString)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->origin(), DOMString));
	return S_OK;
}

// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
//  readonly attribute DOMString lastEventId;
STDMETHODIMP CMessageEvent::get_lastEventId(__out BSTR* DOMString)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->lastEventId(), DOMString));
	return S_OK;
}
