// http://www.w3.org/TR/webrtc/#idl-def-MediaStreamEvent (deprecated)
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExMediaStreamEvent.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CMediaStreamEvent

class ATL_NO_VTABLE CMediaStreamEvent :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMediaStreamEvent, &CLSID_MediaStreamEvent>,
	public IDispatchImpl<IMediaStreamEvent, &IID_IMediaStreamEvent, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMediaStreamEvent();

DECLARE_REGISTRY_RESOURCEID(IDR_MEDIASTREAMEVENT)


BEGIN_COM_MAP(CMediaStreamEvent)
	COM_INTERFACE_ENTRY(IMediaStreamEvent)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExMediaStreamEvent> ex);
	std::shared_ptr<ExMediaStreamEvent> GetEx();

	STDMETHOD(get_stream)(__out VARIANT* pVal) override;

private:
	std::shared_ptr<ExMediaStreamEvent> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(MediaStreamEvent), CMediaStreamEvent)
