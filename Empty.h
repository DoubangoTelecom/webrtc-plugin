// Empty.h : Declaration of the CEmpty
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExEmpty.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CEmpty

class ATL_NO_VTABLE CEmpty :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CEmpty, &CLSID_Empty>,
	public IDispatchImpl<IEmpty, &IID_IEmpty, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CEmpty();

DECLARE_REGISTRY_RESOURCEID(IDR_EMPTY)


BEGIN_COM_MAP(CEmpty)
	COM_INTERFACE_ENTRY(IEmpty)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExEmpty> ex);

private:
	std::shared_ptr<ExEmpty> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(Empty), CEmpty)
