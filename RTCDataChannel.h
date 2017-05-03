// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCDataChannel.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CRTCDataChannel

class ATL_NO_VTABLE CRTCDataChannel :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCDataChannel, &CLSID_RTCDataChannel>,
	public IDispatchImpl<IRTCDataChannel, &IID_IRTCDataChannel, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCDataChannel();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCDATACHANNEL)


BEGIN_COM_MAP(CRTCDataChannel)
	COM_INTERFACE_ENTRY(IRTCDataChannel)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCDataChannel> ex);
	std::shared_ptr<ExRTCDataChannel> GetEx();
	// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
	STDMETHOD(get_label)(__out BSTR* USVString) override;
	STDMETHOD(get_ordered)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_maxPacketLifeTime)(__out VARIANT* pVal) override;
	STDMETHOD(get_maxRetransmits)(__out VARIANT* pVal) override;
	STDMETHOD(get_protocol)(__out BSTR* USVString) override;
	STDMETHOD(get_negotiated)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_id)(__out VARIANT* pVal) override;
	STDMETHOD(get_priority)(__out BSTR* RTCPriorityType) override;
	STDMETHOD(get_readyState)(__out BSTR* RTCDataChannelState) override;
	STDMETHOD(get_bufferedAmount)(__out ULONG64* pVal) override;
	STDMETHOD(get_bufferedAmountLowThreshold)(__out ULONG64* pVal) override;
	STDMETHOD(put_bufferedAmountLowThreshold)(__in ULONG64 newVal) override;
	STDMETHOD(get_binaryType)(__out BSTR* DOMString) override;
	STDMETHOD(put_binaryType)(__in BSTR DOMString) override;
	STDMETHOD(get_onopen)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_onopen)(__in VARIANT varEventHandler) override;
	STDMETHOD(get_onerror)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_onerror)(__in VARIANT varEventHandler) override;
	STDMETHOD(get_onclose)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_onclose)(__in VARIANT varEventHandler) override;
	STDMETHOD(get_onmessage)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_onmessage)(__in VARIANT varEventHandler) override;
	STDMETHOD(get_onbufferedamountlow)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_onbufferedamountlow)(__in VARIANT varEventHandler) override;
	STDMETHOD(close)();
	STDMETHOD(send)(__in VARIANT data);

	// Not part of the std
	STDMETHOD(addEventListener)(__in BSTR type, __in_opt VARIANT listenerCallback, __in_opt VARIANT useCapture);
	STDMETHOD(removeEventListener)(__in BSTR type, __in_opt VARIANT listenerCallback, __in_opt VARIANT useCapture);

private:
	void onopen();
	void onerror(std::shared_ptr<ExErrorMessage> e);
	void onclose();
	void onmessage(std::shared_ptr<ExMessageEvent> e);
	void onbufferedamountlow();

private:
	std::shared_ptr<ExRTCDataChannel> m_ex;
	CComPtr<IDispatch> m_callback_onopen;
	CComPtr<IDispatch> m_callback_onerror;
	CComPtr<IDispatch> m_callback_onclose;
	CComPtr<IDispatch> m_callback_onmessage;
	CComPtr<IDispatch> m_callback_onbufferedamountlow;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCDataChannel), CRTCDataChannel)
