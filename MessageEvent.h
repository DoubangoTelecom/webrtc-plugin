// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExMessageEvent.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CMessageEvent

class ATL_NO_VTABLE CMessageEvent :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMessageEvent, &CLSID_MessageEvent>,
	public IDispatchImpl<IMessageEvent, &IID_IMessageEvent, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMessageEvent();

DECLARE_REGISTRY_RESOURCEID(IDR_MESSAGEEVENT)


BEGIN_COM_MAP(CMessageEvent)
	COM_INTERFACE_ENTRY(IMessageEvent)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExMessageEvent> ex);
	std::shared_ptr<ExMessageEvent> GetEx();

	// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
	STDMETHOD(get_data)(__out VARIANT* varAny) override;
	STDMETHOD(get_origin)(__out BSTR* bstrOrigin) override;
	STDMETHOD(get_lastEventId)(__out BSTR* bstrLastEventId) override;

private:
	std::shared_ptr<ExMessageEvent > m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(MessageEvent), CMessageEvent)
