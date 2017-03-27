// https://www.w3.org/TR/WebIDL-1/#idl-DOMException

#include "stdafx.h"
#include "ErrorMessage.h"
#include "Utils.h"

CErrorMessage::CErrorMessage()
	: m_ex(nullptr)
{
}

HRESULT CErrorMessage::FinalConstruct()
{
	return S_OK;
}

void CErrorMessage::FinalRelease()
{
	m_ex = nullptr;
}

void CErrorMessage::SetEx(std::shared_ptr<ExErrorMessage> ex)
{
	m_ex = ex;
}

STDMETHODIMP CErrorMessage::get_name(BSTR* pVal)
{
	if (m_ex) {
		return Utils::CopyAnsiStr(m_ex->name().c_str(), pVal);
	}
	return E_ILLEGAL_METHOD_CALL;
}
