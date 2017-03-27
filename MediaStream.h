//https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStream
#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "AsyncEvent.h"
#include "ExMediaStream.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CMediaStream

class ATL_NO_VTABLE CMediaStream :
	public AsyncEventRaiser,
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMediaStream, &CLSID_MediaStream>,
	public IDispatchImpl<IMediaStreamDoubango, &IID_IMediaStreamDoubango, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMediaStream();

DECLARE_REGISTRY_RESOURCEID(IDR_MEDIASTREAM)


BEGIN_COM_MAP(CMediaStream)
	COM_INTERFACE_ENTRY(IMediaStreamDoubango)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExMediaStream> ex);
	std::shared_ptr<ExMediaStream> GetEx();
	void onaddtrack();
	void onremovetrack();

	STDMETHOD(get_id)(__out BSTR* pVal) override;
	STDMETHOD(getAudioTracks)(__out VARIANT* Tracks) override;
	STDMETHOD(getVideoTracks)(__out VARIANT* Tracks) override;
	STDMETHOD(getTracks)(__out VARIANT* Tracks) override;
	STDMETHOD(getTrackById)(__in BSTR trackId, __out VARIANT* MediaStreamTrack) override;
	STDMETHOD(addTrack)(__in VARIANT MediaStreamTrack) override;
	STDMETHOD(removeTrack)(__in VARIANT MediaStreamTrack) override;
	STDMETHOD(clone)(__out VARIANT* MediaStream) override;
	STDMETHOD(get_active)(__out VARIANT_BOOL* pVal) override;
	STDMETHOD(get_onaddtrack)(__out VARIANT* pVal) override;
	STDMETHOD(put_onaddtrack)(__in VARIANT newVal) override;
	STDMETHOD(get_onremovetrack)(__out VARIANT* pVal) override;
	STDMETHOD(put_onremovetrack)(__in VARIANT newVal) override;
	STDMETHOD(get_oninactive)(__out VARIANT* pVal) override;
	STDMETHOD(put_oninactive)(__in VARIANT newVal) override;

private:
	HRESULT getTracks(TrackTypeFlags type, VARIANT* Tracks);

private:
	CComPtr<IDispatch>m_callback_onaddtrack;
	CComPtr<IDispatch>m_callback_onremovetrack;
	CComPtr<IDispatch>m_callback_oninactive;
	std::shared_ptr<ExMediaStream> m_ex;
};

OBJECT_ENTRY_AUTO(__uuidof(MediaStream), CMediaStream)
