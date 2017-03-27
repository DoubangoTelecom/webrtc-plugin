// https://www.w3.org/TR/WebIDL-1/#idl-DOMException
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExErrorMessage.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CErrorMessage

class ATL_NO_VTABLE CErrorMessage :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CErrorMessage, &CLSID_ErrorMessage>,
	public IDispatchImpl<IErrorMessage, &IID_IErrorMessage, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CErrorMessage();

DECLARE_REGISTRY_RESOURCEID(IDR_ERRORMESSAGE)


BEGIN_COM_MAP(CErrorMessage)
	COM_INTERFACE_ENTRY(IErrorMessage)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExErrorMessage> ex);

	STDMETHOD(get_name)(__out BSTR* pVal) override;

private:
	std::shared_ptr<ExErrorMessage> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(ErrorMessage), CErrorMessage)
