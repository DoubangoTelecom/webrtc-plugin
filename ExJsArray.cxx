#include "stdafx.h"
#include "ExJsArray.h"

ExJsArray::ExJsArray(CComQIPtr<IDispatchEx>& spJsArray)
	: m_spJsArray(spJsArray)
{

}

ExJsArray::~ExJsArray()
{
	m_spJsArray = nullptr;
}
