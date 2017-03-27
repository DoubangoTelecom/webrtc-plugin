// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaTrackSupportedConstraints
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CMediaTrackSupportedConstraints

class ATL_NO_VTABLE CMediaTrackSupportedConstraints :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMediaTrackSupportedConstraints, &CLSID_MediaTrackSupportedConstraints>,
	public IDispatchImpl<IMediaTrackSupportedConstraints, &IID_IMediaTrackSupportedConstraints, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMediaTrackSupportedConstraints();

DECLARE_REGISTRY_RESOURCEID(IDR_MEDIATRACKSUPPORTEDCONSTRAINTS)


BEGIN_COM_MAP(CMediaTrackSupportedConstraints)
	COM_INTERFACE_ENTRY(IMediaTrackSupportedConstraints)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();

	STDMETHOD(get_width)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_height)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_aspectRatio)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_frameRate)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_facingMode)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_volume)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_sampleRate)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_sampleSize)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_echoCancellation)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_latency)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_channelCount)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_deviceId)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_groupId)(__out VARIANT_BOOL* pVal) override;

private:

};

OBJECT_ENTRY_AUTO(__uuidof(MediaTrackSupportedConstraints), CMediaTrackSupportedConstraints)
