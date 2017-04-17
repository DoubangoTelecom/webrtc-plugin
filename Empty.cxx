// Empty.cpp : Implementation of CEmpty

#include "stdafx.h"
#include "Empty.h"

CEmpty::CEmpty()
{
}

HRESULT CEmpty::FinalConstruct()
{
	return S_OK;
}

void CEmpty::FinalRelease()
{
	m_ex = nullptr;
}

void CEmpty::SetEx(std::shared_ptr<ExEmpty> ex)
{
	m_ex = ex;
}