// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCStats.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CRTCStats

class ATL_NO_VTABLE CRTCStats :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCStats, &CLSID_RTCStats>,
	public IDispatchImpl<IRTCStats, &IID_IRTCStats, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCStats();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCSTATS)


BEGIN_COM_MAP(CRTCStats)
	COM_INTERFACE_ENTRY(IRTCStats)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCStats> ex);
	std::shared_ptr<ExRTCStats> GetEx();

	STDMETHOD(GetIDsOfNames)(
		_In_ REFIID riid,
		_In_reads_(cNames) _Deref_pre_z_ LPOLESTR* rgszNames,
		_In_range_(0, 16384) UINT cNames,
		LCID lcid,
		_Out_ DISPID* rgdispid) override;

	STDMETHOD(Invoke)(
		_In_ DISPID dispidMember,
		_In_ REFIID riid,
		_In_ LCID lcid,
		_In_ WORD wFlags,
		_In_ DISPPARAMS* pdispparams,
		_Out_opt_ VARIANT* pvarResult,
		_Out_opt_ EXCEPINFO* pexcepinfo,
		_Out_opt_ UINT* puArgErr) override;

	// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
	STDMETHOD(get_timestamp)(__out DOUBLE* pVal) override;
	STDMETHOD(get_type)(__out BSTR* pVal) override;
	STDMETHOD(get_id)(__out BSTR* pVal) override;

private:
	std::shared_ptr<ExRTCStats> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCStats), CRTCStats)
