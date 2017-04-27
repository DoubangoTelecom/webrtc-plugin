// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
// https://www.w3.org/TR/webrtc/#rtcrtpsender-interface-extensions
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCRtpSender.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CRTCRtpSender

class ATL_NO_VTABLE CRTCRtpSender :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCRtpSender, &CLSID_RTCRtpSender>,
	public IDispatchImpl<IRTCRtpSender, &IID_IRTCRtpSender, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCRtpSender();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCRTPSENDER)


BEGIN_COM_MAP(CRTCRtpSender)
	COM_INTERFACE_ENTRY(IRTCRtpSender)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCRtpSender> ex);
	std::shared_ptr<ExRTCRtpSender> GetEx();

	// https://www.w3.org/TR/webrtc/#dom-rtcrtpsender
	STDMETHOD(get_track)(__out VARIANT* varMediaStreamTrack) override;
	STDMETHOD(get_transport)(__out VARIANT* varRTCDtlsTransport) override;
	STDMETHOD(get_rtcpTransport)(__out VARIANT* varRTCDtlsTransport) override;
	STDMETHOD(setParameters)(__in_opt VARIANT varRTCRtpParameters, __out VARIANT* varPromiseVoid) override;
	STDMETHOD(getParameters)(__out VARIANT* varRTCRtpParameters) override;
	STDMETHOD(replaceTrack)(__in VARIANT varMediaStreamTrack, __out VARIANT* varPromiseVoid) override;

	// https://www.w3.org/TR/webrtc/#rtcrtpsender-interface-extensions
	STDMETHOD(get_dtmf)(__out VARIANT* varRTCDTMFSender) override;

private:
	std::shared_ptr<ExRTCRtpSender> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCRtpSender), CRTCRtpSender)
