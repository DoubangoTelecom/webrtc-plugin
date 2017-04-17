// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrack
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExMediaStreamTrack.h"
#include "AsyncEvent.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CMediaStreamTrack

class ATL_NO_VTABLE CMediaStreamTrack :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMediaStreamTrack, &CLSID_MediaStreamTrack>,
	public IDispatchImpl<IMediaStreamTrack, &IID_IMediaStreamTrack, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMediaStreamTrack();

DECLARE_REGISTRY_RESOURCEID(IDR_MEDIASTREAMTRACK)


BEGIN_COM_MAP(CMediaStreamTrack)
	COM_INTERFACE_ENTRY(IMediaStreamTrack)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExMediaStreamTrack> ex);
	std::shared_ptr<ExMediaStreamTrack> GetEx();
	
	STDMETHOD(get_kind)(__out BSTR* pVal) override;
	STDMETHOD(get_id)(__out BSTR* pVal) override;
	STDMETHOD(get_label)(__out BSTR* pVal) override;
	STDMETHOD(get_enabled)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(put_enabled)(__in VARIANT_BOOL newVal) override;
	STDMETHOD(get_muted)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_onmute)(__out VARIANT* pVal) override;
	STDMETHOD(put_onmute)(__in VARIANT newVal) override;
	STDMETHOD(get_onunmute)(__out VARIANT* pVal) override;
	STDMETHOD(put_onunmute)(__in VARIANT newVal) override;
	STDMETHOD(get_readyState)(__out BSTR* pVal) override;
	STDMETHOD(get_onended)(__out VARIANT* pVal) override;
	STDMETHOD(put_onended)(__in VARIANT newVal) override;
	STDMETHOD(getCapabilities)(__out VARIANT* MediaTrackCapabilities) override;
	STDMETHOD(getConstraints)(__out VARIANT* MediaConstraints) override;
	STDMETHOD(getSettings)(__out VARIANT* MediaTrackSettings) override;
	STDMETHOD(applyConstraints)(__in VARIANT MediaConstraints) override;
	STDMETHOD(get_onoverconstrained)(__out VARIANT* pVal) override;
	STDMETHOD(put_onoverconstrained)(__in VARIANT newVal) override;
	STDMETHOD(clone)(__out VARIANT* MediaStreamTrack) override;
	STDMETHOD(stop)() override;

private:
	void onmute();
	void onunmute();
	void onended();
	void onoverconstrained();

private:
	std::shared_ptr<ExMediaStreamTrack> m_ex;
	CComPtr<IDispatch>m_callback_onmute;
	CComPtr<IDispatch>m_callback_onunmute;
	CComPtr<IDispatch>m_callback_onended;
	CComPtr<IDispatch>m_callback_onoverconstrained;
};

OBJECT_ENTRY_AUTO(__uuidof(MediaStreamTrack), CMediaStreamTrack)
