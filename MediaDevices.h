// MediaDevices.h : Declaration of the CMediaDevices

#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CMediaDevices

class ATL_NO_VTABLE CMediaDevices :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMediaDevices, &CLSID_MediaDevices>,
	public IDispatchImpl<IMediaDevices, &IID_IMediaDevices, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMediaDevices();

DECLARE_REGISTRY_RESOURCEID(IDR_MEDIADEVICES)

BEGIN_COM_MAP(CMediaDevices)
	COM_INTERFACE_ENTRY(IMediaDevices)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()
	
	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

	STDMETHOD(getSupportedConstraints)(__out VARIANT* pConstraints) override;
	STDMETHOD(getUserMedia)(__in_opt VARIANT constraints, __out VARIANT* pPromiseMediaStream) override;
	STDMETHOD(getUserMediaPromiseHook)(__in_opt VARIANT constraints, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;
	STDMETHOD(enumerateDevices)(__out VARIANT* pPromiseSequenceMediaDeviceInfo) override;
	STDMETHOD(enumerateDevicesPromiseHook)(__in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;

private:

};

OBJECT_ENTRY_AUTO(__uuidof(MediaDevices), CMediaDevices)
