// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaDeviceInfo
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExMediaDeviceInfo.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CMediaDeviceInfo

class ATL_NO_VTABLE CMediaDeviceInfo :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMediaDeviceInfo, &CLSID_MediaDeviceInfo>,
	public IDispatchImpl<IMediaDeviceInfo, &IID_IMediaDeviceInfo, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMediaDeviceInfo();

DECLARE_REGISTRY_RESOURCEID(IDR_MEDIADEVICEINFO)


BEGIN_COM_MAP(CMediaDeviceInfo)
	COM_INTERFACE_ENTRY(IMediaDeviceInfo)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExMediaDeviceInfo> ex);
	std::shared_ptr<ExMediaDeviceInfo> GetEx();

public:
	STDMETHOD(get_deviceId)(__out BSTR* pVal) override;
	STDMETHOD(get_kind)(__out BSTR* pVal) override;
	STDMETHOD(get_label)(__out BSTR* pVal) override;
	STDMETHOD(get_groupId)(__out BSTR* pVal) override;

private:
	std::shared_ptr<ExMediaDeviceInfo> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(MediaDeviceInfo), CMediaDeviceInfo)
