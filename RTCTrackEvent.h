// https://www.w3.org/TR/webrtc/#dom-rtctrackevent
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCTrackEvent.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CRTCTrackEvent

class ATL_NO_VTABLE CRTCTrackEvent :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCTrackEvent, &CLSID_RTCTrackEvent>,
	public IDispatchImpl<IRTCTrackEvent, &IID_IRTCTrackEvent, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCTrackEvent();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCTRACKEVENT)


BEGIN_COM_MAP(CRTCTrackEvent)
	COM_INTERFACE_ENTRY(IRTCTrackEvent)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCTrackEvent> ex);
	std::shared_ptr<ExRTCTrackEvent> GetEx();

private:
	std::shared_ptr<ExRTCTrackEvent> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCTrackEvent), CRTCTrackEvent)
