// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCRtpReceiver.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CRTCRtpReceiver

class ATL_NO_VTABLE CRTCRtpReceiver :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCRtpReceiver, &CLSID_RTCRtpReceiver>,
	public IDispatchImpl<IRTCRtpReceiver, &IID_IRTCRtpReceiver, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCRtpReceiver();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCRTPRECEIVER)


BEGIN_COM_MAP(CRTCRtpReceiver)
	COM_INTERFACE_ENTRY(IRTCRtpReceiver)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCRtpReceiver> ex);
	std::shared_ptr<ExRTCRtpReceiver> GetEx();

	// https://www.w3.org/TR/webrtc/#dom-rtcrtpreceiver
	STDMETHOD(get_track)(__out VARIANT* varMediaStreamTrack) override;
	STDMETHOD(get_transport)(__out VARIANT* varRTCDtlsTransport) override;
	STDMETHOD(get_rtcpTransport)(__out VARIANT* varRTCDtlsTransport) override;
	STDMETHOD(getParameters)(__out VARIANT* varRTCRtpParameters) override;
	STDMETHOD(getContributingSources)(__out VARIANT* varSequenceRTCRtpContributingSource) override;

private:
	std::shared_ptr<ExRTCRtpReceiver> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCRtpReceiver), CRTCRtpReceiver)
