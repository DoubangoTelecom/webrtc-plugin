#pragma once
#include "Config.h"
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "rtc_i.h"
#include "_IPluginEvents_CP.h"
#include "AsyncEvent.h"
#include "Display.h"
#include "Buffer.h"

#include <comutil.h>
#include <stdio.h>

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CPlugin
class ATL_NO_VTABLE CPlugin :
	public AsyncEventDispatcher,
	public AsyncEventRaiser,
	public Display,
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IPlugin, &IID_IPlugin, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IPersistStreamInitImpl<CPlugin>,
	public IOleControlImpl<CPlugin>,
	public IOleObjectImpl<CPlugin>,
	public IOleInPlaceActiveObjectImpl<CPlugin>,
	public IViewObjectExImpl<CPlugin>,
	public IOleInPlaceObjectWindowlessImpl<CPlugin>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CPlugin>,
	public CProxy_IPluginEvents<CPlugin>,
	public IPersistStorageImpl<CPlugin>,
	public IPersistPropertyBagImpl<CPlugin>,
	public ISpecifyPropertyPagesImpl<CPlugin>,
	public IQuickActivateImpl<CPlugin>,
#ifndef _WIN32_WCE
	public IDataObjectImpl<CPlugin>,
#endif
	public IProvideClassInfo2Impl<&CLSID_Plugin, &__uuidof(_IPluginEvents), &LIBID_rtcLib>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
	public IObjectSafetyImpl<CPlugin, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
	public CComCoClass<CPlugin, &CLSID_Plugin>,
	public CComControl<CPlugin>,
	public IObjectSafetyImpl<CPlugin, INTERFACESAFE_FOR_UNTRUSTED_CALLER | INTERFACESAFE_FOR_UNTRUSTED_DATA>
{
public:

#pragma warning(push)
#pragma warning(disable: 4355) // 'this' : used in base member initializer list


	CPlugin();

#pragma warning(pop)

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_INSIDEOUT |
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_PLUGIN)


BEGIN_COM_MAP(CPlugin)
	COM_INTERFACE_ENTRY(IPlugin)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY(IQuickActivate)
	COM_INTERFACE_ENTRY(IPersistStorage)
	COM_INTERFACE_ENTRY(IPersistPropertyBag)
#ifndef _WIN32_WCE
	COM_INTERFACE_ENTRY(IDataObject)
#endif
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
	COM_INTERFACE_ENTRY_IID(IID_IObjectSafety, IObjectSafety)
#endif
	COM_INTERFACE_ENTRY(IObjectSafety)
END_COM_MAP()

BEGIN_PROP_MAP(CPlugin)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY_TYPE("Property Name", dispid, clsid, vtType)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CPlugin)
	CONNECTION_POINT_ENTRY(__uuidof(_IPluginEvents))
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CPlugin)
	CHAIN_MSG_MAP(CComControl<CPlugin>)
	DEFAULT_REFLECTION_HANDLER()
	MESSAGE_HANDLER(WM_CREATE, OnCreate)
	MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
	MESSAGE_HANDLER(WM_CLOSE, OnClose)
ALT_MSG_MAP(1)
	// Replace this with message map entries for superclassed Static
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid) override
	{
		static const IID* const arr[] =
		{
			&IID_IPlugin,
		};

		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

	STDMETHOD(_InternalQueryService)(REFGUID /*guidService*/, REFIID /*riid*/, void** /*ppvObject*/)
	{
		return E_NOTIMPL;
	}

	// IOleObjectImpl::SetClientSite()
	STDMETHOD(SetClientSite)(_Inout_opt_ IOleClientSite *pClientSite) override;

	// IPersistPropertyBagImpl::Load
	STDMETHOD(Load)(__RPC__in_opt IPropertyBag *pPropBag, __RPC__in_opt IErrorLog *pErrorLog) override;

	// IOleInPlaceObject::SetObjectRects
	STDMETHOD(SetObjectRects)(__RPC__in LPCRECT lprcPosRect, __RPC__in LPCRECT lprcClipRect) override;

// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IPlugin
	HRESULT OnDraw(ATL_DRAWINFO& di);

	DECLARE_PROTECT_FINAL_CONSTRUCT()
	RTC_DECLARE_BROWSER_OBJECT_RETAIN_RELEASE()

	HRESULT FinalConstruct();
	void FinalRelease();
	static CPlugin* Singleton();

	LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

	// Display implementation
	virtual HWND Handle() override;
	virtual BOOL IsWindowless() override;
	virtual HRESULT InvalidateWindowless(/* [unique][in] */ __RPC__in_opt LPCRECT pRect, /* [in] */ BOOL fErase) override;
	virtual void OnStartVideoSink() override;
	virtual void OnStopVideoSink() override;

	HRESULT GetDispatch(CComPtr<IDispatch> &spDispatch);
	HRESULT GetHTMLWindow2(CComPtr<IHTMLWindow2> &spWindow2);

	STDMETHOD(get_versionName)(__out BSTR* pVal) override;
	STDMETHOD(get_mediaDevices)(__out VARIANT* pVal) override;
	STDMETHOD(get_isWebRtcPlugin)(__out VARIANT_BOOL* pVal) override;

	STDMETHOD(getWindows)(__out VARIANT* winList) override;
	STDMETHOD(getScreens)(__out VARIANT* screenList) override;
	STDMETHOD(createDisplay)(__out IDispatch** ppDisplay) override;
	STDMETHOD(createSessionDescription)(__in VARIANT RTCSessionDescriptionInit, __out IDispatch** ppSdp) override;
	STDMETHOD(createDictOptions)(__out IDispatch** ppDictOptions) override;
	STDMETHOD(createPeerConnection)(__in_opt VARIANT RTCConfiguration, __in_opt VARIANT MediaConstraints, __out IDispatch** ppPeerConnection) override;
	STDMETHOD(createIceCandidate)(__in VARIANT RTCIceCandidateInit, __out IDispatch** ppIceCandidate) override;
	STDMETHOD(createMediaStreamTrack)(__out IDispatch** ppMediaStreamTrack) override;

	STDMETHOD(getSources)(__in_opt VARIANT successCallback) override;

	STDMETHOD(put_src)(__in VARIANT newVal) override;
	STDMETHOD(fillImageData)(__in VARIANT imageData) override;
	STDMETHOD(getScreenShot)(__out BSTR* base64BitmapData) override;
	STDMETHOD(get_videoWidth)(__out LONG* pVal) override;
	STDMETHOD(get_videoHeight)(__out LONG* pVal) override;

	STDMETHOD(get_logSeverity)(__out BSTR* pVal) override;
	STDMETHOD(put_logSeverity)(__in BSTR newVal) override;

	STDMETHOD(bindEventListener)(__in BSTR type, __in_opt VARIANT listenerCallback, __in_opt VARIANT useCapture) override;

private:
	HRESULT QueryWindow();
	static LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	std::shared_ptr<Buffer> m_TempVideoBuff;
	std::vector<CComPtr<IDispatch>>m_callbacks_onplay;
	CComPtr<IViewObjectPresentSite> m_spPresentSite;
	CComPtr<IHTMLLocation> m_spLocation;
	CComPtr<IOleContainer> m_spContainer;
	CComPtr<IHTMLDocument2> m_spDoc;
	CComPtr<IHTMLWindow2> m_spWindow;
	HWND m_hWindowlessHandle;
	BOOL m_bVideoRendererStarted;

	static CPlugin* s_Singleton;
	static HINSTANCE s_hInstance;
	static ATOM s_WindowlessClass;
};

OBJECT_ENTRY_AUTO(__uuidof(Plugin), CPlugin)
