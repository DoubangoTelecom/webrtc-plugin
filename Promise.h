// https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/Promise

#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExPromise.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CPromise

class ATL_NO_VTABLE CPromise :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CPromise, &CLSID_Promise>,
	public IDispatchImpl<IPromise, &IID_IPromise, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CPromise();

DECLARE_REGISTRY_RESOURCEID(IDR_PROMISE)


BEGIN_COM_MAP(CPromise)
	COM_INTERFACE_ENTRY(IPromise)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExPromiseBase> ex);

	STDMETHOD(GetIDsOfNames)(
		_In_ REFIID riid,
		_In_reads_(cNames) _Deref_pre_z_ LPOLESTR* rgszNames,
		_In_range_(0, 16384) UINT cNames,
		LCID lcid,
		_Out_ DISPID* rgdispid) override;

	STDMETHOD(then)(__in VARIANT onFulfilled, __in_opt VARIANT onRejected, __out VARIANT* pThePromise) override;
	STDMETHOD(catchh)(__in_opt VARIANT onRejected, __out VARIANT* pThePromise) override; // 'catch' is reserved name
	STDMETHOD(toString)(__out BSTR* String) override;

private:
	std::shared_ptr<ExPromiseBase> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(Promise), CPromise)
