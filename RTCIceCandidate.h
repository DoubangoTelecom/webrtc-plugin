// https://www.w3.org/TR/webrtc/#dom-rtcicecandidate

#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCIceCandidate.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CRTCIceCandidate

class ATL_NO_VTABLE CRTCIceCandidate :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCIceCandidate, &CLSID_RTCIceCandidate>,
	public IDispatchImpl<IRTCIceCandidate, &IID_IRTCIceCandidate, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCIceCandidate();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCICECANDIDATE)


BEGIN_COM_MAP(CRTCIceCandidate)
	COM_INTERFACE_ENTRY(IRTCIceCandidate)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCIceCandidate> ex);
	std::shared_ptr<ExRTCIceCandidate> GetEx();
	
	STDMETHOD(get_candidate)(__out BSTR* pVal) override;
	STDMETHOD(get_sdpMid)(__out BSTR* pVal) override;
	STDMETHOD(get_sdpMLineIndex)(__out USHORT* pVal) override;
	STDMETHOD(get_foundation)(__out BSTR* pVal) override;
	STDMETHOD(get_priority)(__out ULONG* pVal) override;
	STDMETHOD(get_protocol)(__out BSTR* pVal) override;
	STDMETHOD(get_port)(__out USHORT* pVal) override;
	STDMETHOD(get_type)(__out BSTR* pVal) override;
	STDMETHOD(get_tcpType)(__out BSTR* pVal) override;
	STDMETHOD(get_relatedAddress)(__out BSTR* pVal) override;
	STDMETHOD(get_relatedPort)(__out USHORT* pVal) override;
	STDMETHOD(get_ufrag)(__out BSTR* pVal) override;
	STDMETHOD(toString)(__out BSTR* String) override;

private:
	std::shared_ptr<ExRTCIceCandidate> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCIceCandidate), CRTCIceCandidate)
