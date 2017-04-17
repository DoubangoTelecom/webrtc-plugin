// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaDeviceInfo
#include "stdafx.h"
#include "MediaDeviceInfo.h"
#include "Utils.h"

CMediaDeviceInfo::CMediaDeviceInfo()
{

}

HRESULT CMediaDeviceInfo::FinalConstruct()
{
	return S_OK;
}

void CMediaDeviceInfo::FinalRelease()
{

}

void CMediaDeviceInfo::SetEx(std::shared_ptr<ExMediaDeviceInfo> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExMediaDeviceInfo> CMediaDeviceInfo::GetEx()
{
	return m_ex;
}

STDMETHODIMP CMediaDeviceInfo::get_deviceId(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		return E_POINTER;
	}
	return Utils::CopyAnsiString(m_ex->deviceId(), pVal);
}

STDMETHODIMP CMediaDeviceInfo::get_kind(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		return E_POINTER;
	}
	return Utils::CopyAnsiString(m_ex->kind(), pVal);
}

STDMETHODIMP CMediaDeviceInfo::get_label(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		return E_POINTER;
	}
	return Utils::CopyAnsiString(m_ex->label(), pVal);
}

STDMETHODIMP CMediaDeviceInfo::get_groupId(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		return E_POINTER;
	}
	return Utils::CopyAnsiString(m_ex->groupId(), pVal);
}
