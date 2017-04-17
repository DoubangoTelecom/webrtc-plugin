// https://www.w3.org/TR/webrtc/#dom-rtcpeerconnectioniceevent
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCPeerConnectionIceEvent.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CRTCPeerConnectionIceEvent

class ATL_NO_VTABLE CRTCPeerConnectionIceEvent :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCPeerConnectionIceEvent, &CLSID_RTCPeerConnectionIceEvent>,
	public IDispatchImpl<IRTCPeerConnectionIceEvent, &IID_IRTCPeerConnectionIceEvent, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCPeerConnectionIceEvent();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCPEERCONNECTIONICEEVENT)

BEGIN_COM_MAP(CRTCPeerConnectionIceEvent)
	COM_INTERFACE_ENTRY(IRTCPeerConnectionIceEvent)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()
	
	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCPeerConnectionIceEvent> ex);
	std::shared_ptr<ExRTCPeerConnectionIceEvent> GetEx();

	STDMETHOD(get_type)(__out BSTR* pVal) override;
	STDMETHOD(get_candidate)(__out VARIANT* pVal) override;
	STDMETHOD(get_url)(__out BSTR* pVal) override;

private:
	std::shared_ptr<ExRTCPeerConnectionIceEvent> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCPeerConnectionIceEvent), CRTCPeerConnectionIceEvent)
