// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCStatsReport.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CRTCStatsReport

class ATL_NO_VTABLE CRTCStatsReport :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCStatsReport, &CLSID_RTCStatsReport>,
	public IDispatchImpl<IRTCStatsReport, &IID_IRTCStatsReport, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCStatsReport();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCSTATSREPORT)


BEGIN_COM_MAP(CRTCStatsReport)
	COM_INTERFACE_ENTRY(IRTCStatsReport)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()
	
	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCStatsReport> ex);
	std::shared_ptr<ExRTCStatsReport> GetEx();

	// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
	// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map
	STDMETHOD(entries)(__out VARIANT* varIterator) override;
	STDMETHOD(forEach)(__in VARIANT varCallback, __in_opt VARIANT varThisArg) override;
	STDMETHOD(get)(__in VARIANT varKey, __out VARIANT* varEntry) override;
	STDMETHOD(has)(__in VARIANT varKey, __out VARIANT_BOOL* varBool) override;
	STDMETHOD(keys)(__out VARIANT* varIterator) override;
	STDMETHOD(values)(__out VARIANT* varIterator) override;
	STDMETHOD(get_size)(__out LONG* pVal) override;

private:
	std::shared_ptr<ExRTCStatsReport> m_ex;

};

OBJECT_ENTRY_AUTO(__uuidof(RTCStatsReport), CRTCStatsReport)
