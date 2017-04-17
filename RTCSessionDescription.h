// https://www.w3.org/TR/webrtc/#dom-rtcsessiondescription
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCSessionDescription.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CRTCSessionDescription

class ATL_NO_VTABLE CRTCSessionDescription :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCSessionDescription, &CLSID_RTCSessionDescription>,
	public IDispatchImpl<IRTCSessionDescription, &IID_IRTCSessionDescription, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCSessionDescription();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCSESSIONDESCRIPTION)


BEGIN_COM_MAP(CRTCSessionDescription)
	COM_INTERFACE_ENTRY(IRTCSessionDescription)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCSessionDescription> ex);
	std::shared_ptr<ExRTCSessionDescription> GetEx();

	STDMETHOD(get_type)(__out BSTR* pVal) override;
	STDMETHOD(put_type)(__in BSTR newVal) override;
	STDMETHOD(get_sdp)(__out BSTR* pVal) override;
	STDMETHOD(put_sdp)(__in BSTR newVal) override;

private:
	HRESULT update(const std::string& type, const std::string& sdp);

private:
	std::shared_ptr<ExRTCSessionDescription> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCSessionDescription), CRTCSessionDescription)
