// https://www.w3.org/TR/webrtc/#rtcdtmfsender
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCDTMFSender.h"
#include "ExRTCDTMFToneChangeEvent.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CRTCDTMFSender

class ATL_NO_VTABLE CRTCDTMFSender :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCDTMFSender, &CLSID_RTCDTMFSender>,
	public IDispatchImpl<IRTCDTMFSender, &IID_IRTCDTMFSender, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCDTMFSender();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCDTMFSENDER)


BEGIN_COM_MAP(CRTCDTMFSender)
	COM_INTERFACE_ENTRY(IRTCDTMFSender)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCDTMFSender> ex);
	std::shared_ptr<ExRTCDTMFSender> GetEx();

	// https://www.w3.org/TR/webrtc/#rtcdtmfsender
	STDMETHOD(insertDTMF)(__in BSTR tones, __in_opt VARIANT duration, __in_opt VARIANT interToneGap) override;
	STDMETHOD(get_ontonechange)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_ontonechange)(__in VARIANT varEventHandler);
	STDMETHOD(get_toneBuffer)(__out BSTR* bstrBuffer) override;

private:
	void ontonechange(std::shared_ptr<ExRTCDTMFToneChangeEvent> e);

private:
	std::shared_ptr<ExRTCDTMFSender> m_ex;
	CComPtr<IDispatch> m_callback_ontonechange;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCDTMFSender), CRTCDTMFSender)
