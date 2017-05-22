#include "stdafx.h"
#include "Plugin.h"
#include "MediaDevices.h"
#include "MediaStream.h"
#include "RTCPeerConnection.h"
#include "RTCIceCandidate.h"
#include "RTCScreen.h"
#include "RTCWindow.h"
#include "Promise.h"
#include "Common.h"
#include "Utils.h"
#include "Helper.h"
#include "ATLBrowserCallback.h"
#include "DoubangoDesktopCapturer.h"

static const wchar_t kWindowlessClassName[] = L"RTCWindowlessClass";
static const wchar_t kWindowlessTitle[] = L"RTCWindowlessTitle";
ATOM CPlugin::s_WindowlessClass = NULL;
HINSTANCE CPlugin::s_hInstance = NULL;
CPlugin* CPlugin::s_Singleton = NULL;

CPlugin::CPlugin()
	: AsyncEventDispatcher()
	, Display()
	, m_TempVideoBuff(nullptr)
	, m_spPresentSite(NULL)
	, m_spContainer(NULL)
	, m_spDoc(NULL)
	, m_spWindow(NULL)
	, m_hWindowlessHandle(NULL)
	, m_bVideoRendererStarted(FALSE)
{
	m_bWindowOnly = TRUE;
}

HRESULT CPlugin::FinalConstruct()
{
	if (!s_Singleton) {
		s_Singleton = this;
	}
	Helper::Initialize();
	TakeFakePeerConnectionFactory();
	return S_OK;
}

void CPlugin::FinalRelease()
{
	m_callbacks_onplay.clear();

	StopVideoSink();
	SetDispatcher(NULL);

	if (s_Singleton == this) {
		s_Singleton = NULL;
		RTC_CHECK_HR_NOP(Utils::UnInstallScripts(m_spWindow));
	}

	m_TempVideoBuff = nullptr;
	m_spPresentSite = NULL;
	m_spContainer = NULL;
	m_spDoc = NULL;
	m_spWindow = NULL;
	if (m_hWindowlessHandle) {
		::DestroyWindow(m_hWindowlessHandle);
		m_hWindowlessHandle = NULL;
	}
	ReleaseFakePeerConnectionFactory();
}

// Display::Handle() implementation
HWND CPlugin::Handle()
{
	return m_hWnd;
}

// Display::IsWindowless() implementation
BOOL CPlugin::IsWindowless()
{
	return !m_bWindowOnly;
}

// Display::InvalidateWindowless() implementation
HRESULT CPlugin::InvalidateWindowless(/* [unique][in] */ __RPC__in_opt LPCRECT pRect, /* [in] */ BOOL fErase)
{
	assert(IsWindowless());
	if (m_hWindowlessHandle) {
		// "m_spInPlaceSite->InvalidateRect" **MUST** be called on UI thread
		::PostMessage(m_hWindowlessHandle, RTC_WM_INVALIDATE_WINDOWLESS, 0, 0); // TODO(dmi): pass "pRect" and "fErase" as LPARAM and WPARAM
	}
	return E_FAIL;
}

// Display::OnStartVideoRenderer() implementation
void CPlugin::OnStartVideoSink()
{
	if (m_callbacks_onplay.size()) {
		for (size_t i = 0; i < m_callbacks_onplay.size(); ++i) {
#if 0
			RTC_CHECK_HR_NOP(Utils::RaiseEventVoid(m_callbacks_onplay[i], RTC_WM_SUCCESS));
#else
			ATLBrowserCallback* bcb = new ATLBrowserCallback(RTC_WM_SUCCESS, m_callbacks_onplay[i]);
			if (bcb) {
				bcb->AddDispatch(this); // not part of the standard: no arg to the callback
				dynamic_cast<AsyncEventDispatcher*>(this)->RaiseCallback(bcb);
				RTC_SAFE_RELEASE_OBJECT(&bcb);
			}
#endif
		}
	}
	m_bVideoRendererStarted = TRUE;
}

// Display::OnStopVideoRenderer() implementation
void CPlugin::OnStopVideoSink()
{
	m_bVideoRendererStarted = FALSE;
}

// IOleObjectImpl::SetClientSite()
STDMETHODIMP CPlugin::SetClientSite(_Inout_opt_ IOleClientSite *pClientSite)
{
	HRESULT hr = IOleObjectImpl::SetClientSite(pClientSite); // call base function
	if (SUCCEEDED(hr) && m_spClientSite) {
		HRESULT _hr = m_spClientSite->QueryInterface(IID_PPV_ARGS(&m_spPresentSite));
		if (FAILED(_hr)) {
			// IViewObjectPresentSite only supported on IE9 and later
		}
		else {
#if 0 // do not uncomment
			// OnDraw() for windowless Activex objects won't be called
			/*hr = */m_spPresentSite->SetCompositionMode(VIEW_OBJECT_COMPOSITION_MODE_SURFACEPRESENTER);
#endif
		}
		if (SUCCEEDED(QueryWindow())) {
			hr = Utils::InstallScripts(m_spWindow);
		}
	}
	return hr;
}

// IPersistPropertyBagImpl::Load
STDMETHODIMP CPlugin::Load(__RPC__in_opt IPropertyBag *pPropBag, __RPC__in_opt IErrorLog *pErrorLog)
{
	CComVariant var;
	HRESULT hr = pPropBag->Read(L"windowless", &var, pErrorLog);
	if (SUCCEEDED(hr) && var.vt == VT_BSTR) {
		// Check if windowless drawing is possible (requires IE9 or later)
		m_bWindowOnly = wcscmp(_T("false"), var.bstrVal) == 0 ? TRUE : FALSE;
		if (!m_bWindowOnly && !m_hWindowlessHandle) {
			// Windowless
			if (!s_WindowlessClass) {
				if (!GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
					GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
					reinterpret_cast<LPCWSTR>(&CPlugin::WndProc), &s_hInstance)) {
					OutputDebugString(L"GetModuleHandleEx failed");
					return E_FAIL;
				}

				// Class not registered, register it.
				WNDCLASSEX wcex;
				memset(&wcex, 0, sizeof(wcex));
				wcex.cbSize = sizeof(wcex);
				wcex.hInstance = s_hInstance;
				wcex.lpfnWndProc = &CPlugin::WndProc;
				wcex.lpszClassName = kWindowlessClassName;
				s_WindowlessClass = ::RegisterClassEx(&wcex);
				if (!s_WindowlessClass) {
					if (GetLastError() == ERROR_CLASS_ALREADY_EXISTS) {
						OutputDebugString(L"RegisterClassEx failed: ERROR_CLASS_ALREADY_EXISTS");
					}
					else {
						OutputDebugString(L"RegisterClassEx failed");
						return E_FAIL;
					}
				}
			} // if (!s_WindowlessClass)
			m_hWindowlessHandle = ::CreateWindowEx(0, kWindowlessClassName, kWindowlessTitle, 0,
				0, 0, 1, 1, NULL, NULL, s_hInstance, this);
			assert(m_hWindowlessHandle != NULL);
			if (m_hWindowlessHandle && !s_WindowlessClass) {
				s_WindowlessClass = GetClassWord(m_hWindowlessHandle, GCW_ATOM);
			}
			::SetWindowLongPtr(m_hWindowlessHandle, GWLP_USERDATA, (LONG_PTR)this);
			::ShowWindow(m_hWindowlessHandle, SW_HIDE);
		}
	}
	return S_OK;
}

// IOleInPlaceObject::SetObjectRects
STDMETHODIMP CPlugin::SetObjectRects(__RPC__in LPCRECT lprcPosRect, __RPC__in LPCRECT lprcClipRect)
{
	return IOleInPlaceObjectWindowlessImpl::SetObjectRects(lprcPosRect, lprcClipRect); // IOleInPlaceObject::SetObjectRects(lprcPosRect, lprcClipRect); // call base function
}

HRESULT CPlugin::OnDraw(ATL_DRAWINFO& di)
{
	RECT& rc = *(RECT*)di.prcBounds;
	// Set Clip region to the rectangle specified by di.prcBounds
	HRGN hRgnOld = NULL;
	if (GetClipRgn(di.hdcDraw, hRgnOld) != 1) {
		hRgnOld = NULL;
	}
	bool bSelectOldRgn = false;

	HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);

	if (hRgnNew != NULL) {
		bSelectOldRgn = (SelectClipRgn(di.hdcDraw, hRgnNew) != ERROR);
	}

	if (m_bVideoRendererStarted) {
		PaintFrame(reinterpret_cast<intptr_t>(&di));
	}
	else {
		Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
		SetTextAlign(di.hdcDraw, TA_CENTER | TA_BASELINE);
		LPCTSTR pszText = _T("ATL: RTC Plugin version " kRTC_VersionString);
#ifndef _WIN32_WCE
		TextOut(di.hdcDraw,
			(rc.left + rc.right) / 2,
			(rc.top + rc.bottom) / 2,
			pszText,
			lstrlen(pszText));
#else
		ExtTextOut(di.hdcDraw,
			(rc.left + rc.right) / 2,
			(rc.top + rc.bottom) / 2,
			ETO_OPAQUE,
			NULL,
			pszText,
			ATL::lstrlen(pszText),
			NULL);
#endif
	}

	if (bSelectOldRgn) {
		SelectClipRgn(di.hdcDraw, hRgnOld);
	}
	if (hRgnNew) {
		DeleteObject(hRgnNew);
	}
	return S_OK;
}

CPlugin* CPlugin::Singleton()
{
	return s_Singleton;
}

LRESULT CPlugin::OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	if (m_bWindowOnly) {
		AsyncEventDispatcher::SetWindow(m_hWnd);
	}
	return S_OK;
}

LRESULT CPlugin::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	return S_OK;
}

LRESULT CPlugin::OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	return S_OK;
}

HRESULT CPlugin::GetDispatch(CComPtr<IDispatch> &spDispatch)
{
	if (!m_spWindow) {
		RTC_CHECK_HR_RETURN(QueryWindow());
	}

	RTC_CHECK_HR_RETURN(m_spWindow->QueryInterface(IID_PPV_ARGS(&spDispatch)));
	return S_OK;
}

HRESULT CPlugin::GetHTMLWindow2(CComPtr<IHTMLWindow2> &spWindow2)
{
	if (!m_spWindow) {
		RTC_CHECK_HR_RETURN(QueryWindow());
	}
	spWindow2 = m_spWindow;
	return S_OK;
}

HRESULT CPlugin::QueryWindow()
{
	HRESULT hr = E_UNEXPECTED;
	if (m_spWindow) {
		hr = S_OK;
	}
	else if (m_spClientSite) {
		m_spContainer = NULL;
		m_spDoc = NULL;
		hr = m_spClientSite->GetContainer(&m_spContainer);
		if (SUCCEEDED(hr)) {
			hr = m_spContainer->QueryInterface(IID_PPV_ARGS(&m_spDoc));
			if (SUCCEEDED(hr)) {
				hr = m_spDoc->get_parentWindow(&m_spWindow);
				if (SUCCEEDED(hr)) {
					hr = m_spWindow->get_location(&m_spLocation);
				}
			}
		}
	}

	if (SUCCEEDED(hr)) {
		// UserAgent
		static BOOL sUserAgentDefined = FALSE;
		if (!sUserAgentDefined) {
			IOmNavigator* pNavigator = NULL;
			if (SUCCEEDED(m_spWindow->get_navigator(&pNavigator))) {
				CComBSTR userAgentBSTR;
				if (SUCCEEDED(pNavigator->get_userAgent(&userAgentBSTR)) && userAgentBSTR.Length() > 0) {
					std::string userAgentStr;
					if (SUCCEEDED(Utils::ToString(&userAgentBSTR, userAgentStr)) && userAgentStr.length() > 0) {
						Helper::SetUserAgent(userAgentStr.c_str());
						sUserAgentDefined = TRUE;
					}
				}
				RTC_SAFE_RELEASE(&pNavigator);
			}
		}
	}

	return hr;
}

LRESULT CALLBACK CPlugin::WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (uMsg == RTC_WM_INVALIDATE_WINDOWLESS) {
		CPlugin* This = dynamic_cast<CPlugin*>(reinterpret_cast<CPlugin*>(::GetWindowLongPtr(hwnd, GWLP_USERDATA)));
		CComPtr<IOleInPlaceSiteWindowless> spInPlaceSite = This->m_spInPlaceSite; // for thead-safeness take a reference
		if (spInPlaceSite) {
			HRESULT hr = spInPlaceSite->InvalidateRect(NULL, FALSE); // TODO(dmi): read wParam and lParam to get params for InvalidateRect
			if (FAILED(hr)) {

			}
		}
		return 1;
	}
	return ::DefWindowProc(hwnd, uMsg, wParam, lParam);
}

STDMETHODIMP CPlugin::get_versionName(BSTR* pVal)
{
	return Utils::CopyAnsiStr(kRTC_VersionString, pVal);
}

// https://www.w3.org/TR/mediacapture-streams/#navigatorusermedia-interface-extensions
// property: navigator.mediaDevices
STDMETHODIMP CPlugin::get_mediaDevices(__out VARIANT* pVal)
{
	CComObject<CMediaDevices>* mediaDevices;
	HRESULT hr = Utils::CreateInstanceWithRef(&mediaDevices);
	if (SUCCEEDED(hr)) {
		*pVal = CComVariant(mediaDevices);
	}
	return hr;
}

STDMETHODIMP CPlugin::get_isWebRtcPlugin(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CPlugin::getWindows(__out VARIANT* winList)
{
	CComPtr<CPlugin> pluginInstance = CPlugin::Singleton();
	if (!pluginInstance) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	HRESULT hr = S_OK;

	CComPtr<IDispatch> spDispatch;
	RTC_CHECK_HR_RETURN(pluginInstance->GetDispatch(spDispatch));

	std::vector<CComVariant> atlWindows;
	std::vector<std::shared_ptr<ExRTCWindow> > exWindows = DoubangoDesktopCapturerFactory::GetWindows();

	for (std::vector<std::shared_ptr<ExRTCWindow> >::iterator it = exWindows.begin(); it < exWindows.end(); ++it) {
		CComObject<CRTCWindow>* window;
		hr = Utils::CreateInstanceWithRef(&window, *it);
		if (SUCCEEDED(hr)) {
			atlWindows.push_back(CComVariant(window));
			RTC_SAFE_RELEASE(&window);
		}
	}

	CComQIPtr<IDispatchEx> spArray;
	RTC_CHECK_HR_RETURN(hr = Utils::CreateJsArray(spDispatch, atlWindows, spArray));
	*winList = CComVariant(spArray.Detach());
	return hr;
}

STDMETHODIMP CPlugin::getScreens(__out VARIANT* winList)
{
	CComPtr<CPlugin> pluginInstance = CPlugin::Singleton();
	if (!pluginInstance) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	HRESULT hr = S_OK;

	CComPtr<IDispatch> spDispatch;
	RTC_CHECK_HR_RETURN(pluginInstance->GetDispatch(spDispatch));

	std::vector<CComVariant> atlScreens;
	std::vector<std::shared_ptr<ExRTCScreen> > exScreens = DoubangoDesktopCapturerFactory::GetScreens();

	for (std::vector<std::shared_ptr<ExRTCScreen> >::iterator it = exScreens.begin(); it < exScreens.end(); ++it) {
		CComObject<CRTCScreen>* screen;
		hr = Utils::CreateInstanceWithRef(&screen, *it);
		if (SUCCEEDED(hr)) {
			atlScreens.push_back(CComVariant(screen));
			RTC_SAFE_RELEASE(&screen);
		}
	}

	CComQIPtr<IDispatchEx> spArray;
	RTC_CHECK_HR_RETURN(hr = Utils::CreateJsArray(spDispatch, atlScreens, spArray));
	*winList = CComVariant(spArray.Detach());
	return hr;
}

STDMETHODIMP CPlugin::createDisplay(__out IDispatch** ppDisplay)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::createSessionDescription(VARIANT RTCSessionDescriptionInit, IDispatch** ppSdp)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::createDictOptions(IDispatch** ppDictOptions)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::createPeerConnection(__in_opt VARIANT varRTCConfiguration, __in_opt VARIANT varMediaConstraints, __out IDispatch** ppDispPeerConnection)
{
	HRESULT hr = S_OK;

	std::shared_ptr<RTCConfiguration> rtcConf;
	RTC_CHECK_HR_RETURN(hr = Utils::BuildRTCConfiguration(varRTCConfiguration, rtcConf));

	std::shared_ptr<MediaConstraintSets> mediaConstraints;
	RTC_CHECK_HR_RETURN(hr = Utils::BuildMediaConstraintsObjs(varMediaConstraints, mediaConstraints));

	std::shared_ptr<ExRTCPeerConnection> ex(new ExRTCPeerConnection(rtcConf.get(), mediaConstraints.get()));
	if (!ex.get()) {
		RTC_DEBUG_ERROR("Failed to create ExRTCPeerConnection");
		RTC_CHECK_HR_RETURN(hr = E_OUTOFMEMORY);
	}
	if (!ex->isValid()) {
		RTC_DEBUG_ERROR("Invalid ExRTCPeerConnection object returned");
		RTC_CHECK_HR_RETURN(hr = E_POINTER);
	}

	CComObject<CRTCPeerConnection>* pPeerConnection;
	hr = Utils::CreateInstanceWithRef(&pPeerConnection, ex);
	if (SUCCEEDED(hr)) {
		*ppDispPeerConnection = pPeerConnection;
	}
	return hr;
}

STDMETHODIMP CPlugin::createIceCandidate(VARIANT RTCIceCandidateInit, IDispatch** ppIceCandidate)
{
	// RTCIceCandidateInit: https://www.w3.org/TR/webrtc/#dom-rtcicecandidateinit
	HRESULT hr = S_OK;
	CComPtr<IDispatch> spRTCIceCandidateInit = Utils::VariantToDispatch(RTCIceCandidateInit);
	std::shared_ptr<ExRTCIceCandidate> exIceCandidate;
	if (spRTCIceCandidateInit) {
		BSTR bstrCandidate;
		HRESULT hr = Utils::DispatchGetPropBSTR(spRTCIceCandidateInit, L"candidate", bstrCandidate);
		if (SUCCEEDED(hr)) {
			BSTR bstrSdpMid;
			hr = Utils::DispatchGetPropBSTR(spRTCIceCandidateInit, L"sdpMid", bstrSdpMid);
			if (SUCCEEDED(hr)) {
				long longSdpMLineIndex;
				hr = Utils::DispatchGetPropInteger(spRTCIceCandidateInit, L"sdpMLineIndex", longSdpMLineIndex);
				if (SUCCEEDED(hr)) {
					std::string strCandidate, strSdpMid;
					if (SUCCEEDED(Utils::ToString(&bstrCandidate, strCandidate) && SUCCEEDED(Utils::ToString(&bstrSdpMid, strSdpMid)))) {
						webrtc::SdpParseError error;
						exIceCandidate = std::make_shared<ExRTCIceCandidate>(strSdpMid, static_cast<int>(longSdpMLineIndex), strCandidate, &error);
					}
				}
			}
		}
	}
	if (exIceCandidate.get()) {
		CComObject<CRTCIceCandidate>* atlIceCandidate;
		hr = Utils::CreateInstanceWithRef(&atlIceCandidate, exIceCandidate);
		if (SUCCEEDED(hr)) {
			*ppIceCandidate = atlIceCandidate;
		}
	}
	return hr;
}

STDMETHODIMP CPlugin::createMediaStreamTrack(__out IDispatch** ppMediaStreamTrack)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::createMediaStream(__out IDispatch** ppMediaStream)
{
	CComObject<CMediaStream>* pMediaStream;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&pMediaStream, std::make_shared<ExMediaStream>()));
	*ppMediaStream = pMediaStream;
	return S_OK;
}

STDMETHODIMP CPlugin::getSources(__in_opt VARIANT successCallback)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::put_src(__in VARIANT newVal)
{
	StopVideoSink();
	if (newVal.vt == VT_DISPATCH && newVal.pdispVal) { // check not null
		std::shared_ptr<ExMediaStream> exMediaStream;
		RTC_CHECK_HR_RETURN((Utils::QueryEx<IMediaStreamDoubango, CMediaStream, ExMediaStream>(newVal, exMediaStream)));
		if (exMediaStream.get()) {
			StartVideoSink(exMediaStream->GetVideoTrack());
		}
	}
	return S_OK;
}

STDMETHODIMP CPlugin::fillImageData(__in VARIANT imageData)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::getScreenShot(__out BSTR* base64BitmapData)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::get_videoWidth(__out LONG* pVal)
{
	*pVal = (LONG)GetVideoWidth();
	return S_OK;
}

STDMETHODIMP CPlugin::get_videoHeight(__out LONG* pVal)
{
	*pVal = (LONG)GetVideoHeight();
	return S_OK;
}

STDMETHODIMP CPlugin::get_logSeverity(__out BSTR* pVal)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::put_logSeverity(__in BSTR newVal)
{
	return E_NOTIMPL;
}

STDMETHODIMP CPlugin::bindEventListener(__in BSTR type, __in_opt VARIANT listenerCallback, __in_opt VARIANT useCapture)
{
	if (!type) {
		RTC_CHECK_HR_RETURN(E_INVALIDARG);
	}
	char* lpszType = _com_util::ConvertBSTRToString(type);
	if (!lpszType) {
		RTC_CHECK_HR_RETURN(E_OUTOFMEMORY);
	}
	if (!strcmp(lpszType, "play")) {
		CComPtr<IDispatch> callback = Utils::VariantToDispatch(listenerCallback);
		if (callback) {
			m_callbacks_onplay.push_back(callback);
		}
	}

	delete[] lpszType;

	return S_OK;
}
