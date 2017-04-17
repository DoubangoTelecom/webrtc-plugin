// https://www.w3.org/TR/webrtc/#rtcerror-object
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCError.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CRTCError

class ATL_NO_VTABLE CRTCError :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCError, &CLSID_RTCError>,
	public IDispatchImpl<IRTCError, &IID_IRTCError, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCError();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCERROR)


BEGIN_COM_MAP(CRTCError)
	COM_INTERFACE_ENTRY(IRTCError)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCError> ex);
	std::shared_ptr<ExRTCError> GetEx();

	STDMETHOD(get_name)(__out BSTR* pVal) override;	
	STDMETHOD(get_message)(__out BSTR* pVal) override;
	STDMETHOD(get_errorDetail)(__out BSTR* pVal) override;
	STDMETHOD(get_sdpLineNumber)(__out LONG* pVal) override;
	STDMETHOD(get_httpRequestStatusCode)(__out LONG* pVal) override;
	STDMETHOD(toString)(__out BSTR* String) override;

public:
	std::shared_ptr<ExRTCError> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCError), CRTCError)
