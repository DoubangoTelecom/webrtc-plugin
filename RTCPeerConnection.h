// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface
// https://www.w3.org/TR/webrtc/#interface-definition

#pragma once
#include "resource.h"       // main symbols
#include "rtc_i.h"
#include "ExRTCPeerConnection.h"
#include "ExRTCIceCandidate.h"
#include "ExRTCPeerConnectionIceEvent.h"
#include "ExRTCDataChannelEvent.h"
#include "ExMediaStreamEvent.h"
#include "ExRTCTrackEvent.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CRTCPeerConnection

class ATL_NO_VTABLE CRTCPeerConnection :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRTCPeerConnection, &CLSID_RTCPeerConnection>,
	public IDispatchImpl<IRTCPeerConnection, &IID_IRTCPeerConnection, &LIBID_rtcLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRTCPeerConnection();

DECLARE_REGISTRY_RESOURCEID(IDR_RTCPEERCONNECTION)


BEGIN_COM_MAP(CRTCPeerConnection)
	COM_INTERFACE_ENTRY(IRTCPeerConnection)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct();
	void FinalRelease();
	void SetEx(std::shared_ptr<ExRTCPeerConnection> ex);
	std::shared_ptr<ExRTCPeerConnection> GetEx();

	STDMETHOD(createOffer)(__in_opt VARIANT RTCOfferOptions, __out VARIANT* pPromiseRTCSessionDescriptionInit) override;
	STDMETHOD(createOfferPromiseHook)(__in_opt VARIANT RTCOfferOptions, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;
	STDMETHOD(createAnswer)(__in_opt VARIANT RTCAnswerOptions, __out VARIANT* pPromiseRTCSessionDescriptionInit) override;	
	STDMETHOD(createAnswerPromiseHook)(__in_opt VARIANT RTCAnswerOptions, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;
	STDMETHOD(setLocalDescription)(__in VARIANT RTCSessionDescriptionInit, __out VARIANT* pPromiseVoid) override;
	STDMETHOD(setLocalDescriptionPromiseHook)(__in VARIANT RTCSessionDescriptionInit, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;
	STDMETHOD(get_localDescription)(__out VARIANT* RTCSessionDescription) override;
	STDMETHOD(get_currentLocalDescription)(__out VARIANT* RTCSessionDescription) override;
	STDMETHOD(get_pendingLocalDescription)(__out VARIANT* RTCSessionDescription) override;
	STDMETHOD(setRemoteDescription)(__in VARIANT RTCSessionDescriptionInit, __out VARIANT* pPromiseVoid) override;
	STDMETHOD(setRemoteDescriptionPromiseHook)(__in VARIANT RTCSessionDescriptionInit, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;
	STDMETHOD(get_remoteDescription)(__out VARIANT* RTCSessionDescription) override;
	STDMETHOD(get_currentRemoteDescription)(__out VARIANT* RTCSessionDescription) override;
	STDMETHOD(get_pendingRemoteDescription)(__out VARIANT* RTCSessionDescription) override;
	STDMETHOD(addIceCandidate)(__in VARIANT RTCIceCandidateInit, __out VARIANT* pPromiseVoid) override;
	STDMETHOD(addIceCandidatePromiseHook)(__in VARIANT RTCIceCandidateInit, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;
	STDMETHOD(get_signalingState)(__out BSTR* RTCSignalingState) override;
	STDMETHOD(get_iceGatheringState)(__out BSTR* RTCIceGatheringState) override;
	STDMETHOD(get_iceConnectionState)(__out BSTR* RTCIceConnectionState) override;
	STDMETHOD(get_connectionState)(__out BSTR* RTCPeerConnectionState) override;
	STDMETHOD(get_canTrickleIceCandidates)(__out VARIANT_BOOL* BooleanVal) override;
	STDMETHOD(getConfiguration)(__out VARIANT* RTCConfiguration) override;
	STDMETHOD(setConfiguration)(__in VARIANT RTCConfiguration) override;
	STDMETHOD(close)() override;
	STDMETHOD(addStream)(__in VARIANT MediaStream) override; // Shim not part of the standard
	STDMETHOD(removeStream)(__in VARIANT MediaStream) override; // Shim not part of the standard
	STDMETHOD(get_onnegotiationneeded)(__out VARIANT* pVal) override;
	STDMETHOD(put_onnegotiationneeded)(__in VARIANT newVal) override;
	STDMETHOD(get_onicecandidate)(__out VARIANT* pVal) override;
	STDMETHOD(put_onicecandidate)(__in VARIANT newVal) override;
	STDMETHOD(get_onicecandidateerror)(__out VARIANT* pVal) override;
	STDMETHOD(put_onicecandidateerror)(__in VARIANT newVal) override;
	STDMETHOD(get_onsignalingstatechange)(__out VARIANT* pVal) override;
	STDMETHOD(put_onsignalingstatechange)(__in VARIANT newVal) override;
	STDMETHOD(get_oniceconnectionstatechange)(__out VARIANT* pVal) override;
	STDMETHOD(put_oniceconnectionstatechange)(__in VARIANT newVal) override;
	STDMETHOD(get_onicegatheringstatechange)(__out VARIANT* pVal) override;
	STDMETHOD(put_onicegatheringstatechange)(__in VARIANT newVal) override;
	STDMETHOD(get_onconnectionstatechange)(__out VARIANT* pVal) override;
	STDMETHOD(put_onconnectionstatechange)(__in VARIANT newVal) override;
	STDMETHOD(get_onfingerprintfailure)(__out VARIANT* pVal) override;
	STDMETHOD(put_onfingerprintfailure)(__in VARIANT newVal) override;
	STDMETHOD(get_onaddstream)(__out VARIANT* pVal) override; // Shim not part of the standard
	STDMETHOD(put_onaddstream)(__in VARIANT newVal) override; // Shim not part of the standard

	// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions-1
	STDMETHOD(createDataChannel)(__in BSTR label, __in_opt VARIANT dataChannelDict, __out VARIANT* DataChannel);
	STDMETHOD(get_sctp)(__out VARIANT* varRTCSctpTransport) override;
	STDMETHOD(get_ondatachannel)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_ondatachannel)(__in VARIANT varEventHandler) override;
	
	// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
	STDMETHOD(getSenders)(__out VARIANT* varSequenceRTCRtpSender) override;
	STDMETHOD(getReceivers)(__out VARIANT* varSequenceRTCRtpReceiver) override;
	STDMETHOD(getTransceivers)(__out VARIANT* varSequenceRTCRtpTransceiver) override;
	STDMETHOD(addTrack)(__in VARIANT varMediaStreamTrack, __in_opt VARIANT varMediaStreams0, __in_opt VARIANT varMediaStreams1, __in_opt VARIANT varMediaStreams2, __out VARIANT* varRTCRtpSender) override;
	STDMETHOD(removeTrack)(__in VARIANT varRTCRtpSender) override;
	STDMETHOD(addTransceiver)(__in VARIANT varMediaStreamTrackorDOMStringTrackOrKind, __in_opt VARIANT varRTCRtpTransceiverInit) override;
	STDMETHOD(get_ontrack)(__out VARIANT* varEventHandler) override;
	STDMETHOD(put_ontrack)(__in VARIANT varEventHandler) override;
	
	// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions-2
	STDMETHOD(getStats)(__in_opt VARIANT varMediaStreamTrack, __out VARIANT* varPromiseRTCStatsReport) override;
	STDMETHOD(getStatsPromiseHook)(__in_opt VARIANT varMediaStreamTrack, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback) override;

private:
	HRESULT createOfferAnswer(__in bool offer, __in_opt VARIANT RTCOfferAnswerOptions, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback);
	HRESULT setDescription(__in bool local, __in_opt VARIANT RTCSessionDescriptionInit, __in_opt VARIANT successCallback, __in_opt VARIANT errorCallback);
	void onnegotiationneeded();
	void onicecandidate(std::shared_ptr<ExRTCPeerConnectionIceEvent> e);
	void onicecandidateerror();
	void onsignalingstatechange();
	void oniceconnectionstatechange();
	void onicegatheringstatechange();
	void onconnectionstatechange();
	void onfingerprintfailure();
	void onaddstream(std::shared_ptr<ExMediaStreamEvent> e);
	void onremovestream(std::shared_ptr<ExMediaStreamEvent> e);
	void ondatachannel(std::shared_ptr<ExRTCDataChannelEvent> e);
	void ontrack(std::shared_ptr<ExRTCTrackEvent> e);

private:
	std::shared_ptr<ExRTCPeerConnection> m_ex;
	CComPtr<IDispatch> m_callback_onnegotiationneeded;
	CComPtr<IDispatch> m_callback_onicecandidate;
	CComPtr<IDispatch> m_callback_onicecandidateerror;
	CComPtr<IDispatch> m_callback_onsignalingstatechange;
	CComPtr<IDispatch> m_callback_oniceconnectionstatechange;
	CComPtr<IDispatch> m_callback_onicegatheringstatechange;
	CComPtr<IDispatch> m_callback_onconnectionstatechange;
	CComPtr<IDispatch> m_callback_onfingerprintfailure;
	CComPtr<IDispatch> m_callback_onaddstream;
	CComPtr<IDispatch> m_callback_onremovestream;
	CComPtr<IDispatch> m_callback_ondatachannel;
	CComPtr<IDispatch> m_callback_ontrack;
};

OBJECT_ENTRY_AUTO(__uuidof(RTCPeerConnection), CRTCPeerConnection)
