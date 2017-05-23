#include "stdafx.h"
#include "JsArray.h"

CJsArray::CJsArray()
{

}

HRESULT CJsArray::FinalConstruct()
{
	return S_OK;
}

void CJsArray::FinalRelease()
{
	m_ex = nullptr;
}

void CJsArray::SetEx(std::shared_ptr<ExJsArray> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExJsArray> CJsArray::GetEx()
{
	return m_ex;
}
