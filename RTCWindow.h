#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCWindow.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CRTCWindow

class ATL_NO_VTABLE CRTCWindow :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCWindow, &CLSID_RTCWindow>,
	public IDispatchImpl<IRTCWindow, &IID_IRTCWindow, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCWindow();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCWINDOW)


BEGIN_COM_MAP(CRTCWindow)
	COM_INTERFACE_ENTRY(IRTCWindow)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCWindow> ex);
	std::shared_ptr<ExRTCWindow> GetEx();

	STDMETHOD(get_id)(__out INT_PTR* pVal) override;
	STDMETHOD(get_title)(__out BSTR* pVal) override;

private:
	std::shared_ptr<ExRTCWindow> m_ex;

};

OBJECT_ENTRY_AUTO(__uuidof(RTCWindow), CRTCWindow)
