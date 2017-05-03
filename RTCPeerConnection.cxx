// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface
// https://www.w3.org/TR/webrtc/#interface-definition

#include "stdafx.h"
#include "RTCError.h"
#include "ATLBrowserCallback.h"
#include "RTCPeerConnection.h"
#include "RTCSessionDescription.h"
#include "RTCIceCandidate.h"
#include "RTCPeerConnectionIceEvent.h"
#include "RTCDataChannel.h"
#include "RTCDataChannelEvent.h"
#include "RTCRtpSender.h"
#include "RTCRtpReceiver.h"
#include "RTCStatsReport.h"
#include "MediaStream.h"
#include "MediaStreamEvent.h"
#include "MediaStreamTrack.h"
#include "RTCTrackEvent.h"
#include "Utils.h"
#include "Promise.h"
#include "Plugin.h"
#include "Empty.h"


#define kCreateOfferTrue				true
#define kCreateOfferFalse				false
#define kSetDescriptionLocalTrue		true
#define kSetDescriptionLocalFalse		false

CRTCPeerConnection::CRTCPeerConnection()
	: m_ex(nullptr)
	, m_callback_onnegotiationneeded(nullptr)
	, m_callback_onicecandidate(nullptr)
	, m_callback_onicecandidateerror(nullptr)
	, m_callback_onsignalingstatechange(nullptr)
	, m_callback_oniceconnectionstatechange(nullptr)
	, m_callback_onicegatheringstatechange(nullptr)
	, m_callback_onconnectionstatechange(nullptr)
	, m_callback_onfingerprintfailure(nullptr)
	, m_callback_onaddstream(nullptr)
	, m_callback_ondatachannel(nullptr)
{

}

HRESULT CRTCPeerConnection::FinalConstruct()
{
	return S_OK;
}

void CRTCPeerConnection::FinalRelease()
{
	if (m_ex.get()) {
		m_ex->onnegotiationneededSet(nullptr);
		m_ex->onicecandidateSet(nullptr);
		m_ex->onicecandidateerrorSet(nullptr);
		m_ex->onsignalingstatechangeSet(nullptr);
		m_ex->oniceconnectionstatechangeSet(nullptr);
		m_ex->onicegatheringstatechangeSet(nullptr);
		m_ex->onconnectionstatechangeSet(nullptr);
		m_ex->onfingerprintfailureSet(nullptr);
		m_ex->onaddstreamSet(nullptr);
		m_ex->onremovestreamSet(nullptr);
		m_ex->ondatachannelSet(nullptr);
		m_ex->ontrackSet(nullptr);

		m_ex = nullptr;
	}
}

void CRTCPeerConnection::SetEx(std::shared_ptr<ExRTCPeerConnection> ex)
{
	if ((m_ex = ex).get()) {
		m_ex->onnegotiationneededSet(std::bind(&CRTCPeerConnection::onnegotiationneeded, this));
		m_ex->onicecandidateSet(std::bind(&CRTCPeerConnection::onicecandidate, this, std::placeholders::_1));
		m_ex->onicecandidateerrorSet(std::bind(&CRTCPeerConnection::onicecandidateerror, this));
		m_ex->onsignalingstatechangeSet(std::bind(&CRTCPeerConnection::onsignalingstatechange, this));
		m_ex->oniceconnectionstatechangeSet(std::bind(&CRTCPeerConnection::oniceconnectionstatechange, this));
		m_ex->onicegatheringstatechangeSet(std::bind(&CRTCPeerConnection::onicegatheringstatechange, this));
		m_ex->onconnectionstatechangeSet(std::bind(&CRTCPeerConnection::onconnectionstatechange, this));
		m_ex->onfingerprintfailureSet(std::bind(&CRTCPeerConnection::onfingerprintfailure, this));
		m_ex->onaddstreamSet(std::bind(&CRTCPeerConnection::onaddstream, this, std::placeholders::_1));
		m_ex->onremovestreamSet(std::bind(&CRTCPeerConnection::onremovestream, this, std::placeholders::_1));
		m_ex->ondatachannelSet(std::bind(&CRTCPeerConnection::ondatachannel, this, std::placeholders::_1));
		m_ex->ontrackSet(std::bind(&CRTCPeerConnection::ontrack, this, std::placeholders::_1));
	}
}

std::shared_ptr<ExRTCPeerConnection> CRTCPeerConnection::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCPeerConnection::createOffer(__in_opt VARIANT RTCOfferOptions, __out VARIANT* pPromiseRTCSessionDescriptionInit)
{
	RTC_CHECK_HR_RETURN(createOfferAnswer(kCreateOfferTrue, RTCOfferOptions, pPromiseRTCSessionDescriptionInit));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::createAnswer(__in_opt VARIANT RTCAnswerOptions, __out VARIANT* pPromiseRTCSessionDescriptionInit)
{
	RTC_CHECK_HR_RETURN(createOfferAnswer(kCreateOfferFalse, RTCAnswerOptions, pPromiseRTCSessionDescriptionInit));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::setLocalDescription(__in VARIANT RTCSessionDescriptionInit, __out VARIANT* pPromiseVoid)
{
	RTC_CHECK_HR_RETURN(setDescription(kSetDescriptionLocalTrue, RTCSessionDescriptionInit, pPromiseVoid));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_localDescription(__out VARIANT* RTCSessionDescription)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}	
	CComObject<CRTCSessionDescription>* localDescription;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&localDescription, m_ex->localDescription()));
	*RTCSessionDescription = CComVariant(localDescription);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_currentLocalDescription(__out VARIANT* RTCSessionDescription)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CRTCSessionDescription>* currentLocalDescription;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&currentLocalDescription, m_ex->currentLocalDescription()));
	*RTCSessionDescription = CComVariant(currentLocalDescription);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_pendingLocalDescription(__out VARIANT* RTCSessionDescription)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CRTCSessionDescription>* pendingLocalDescription;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&pendingLocalDescription, m_ex->pendingLocalDescription()));
	*RTCSessionDescription = CComVariant(pendingLocalDescription);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::setRemoteDescription(__in VARIANT RTCSessionDescriptionInit, __out VARIANT* pPromiseVoid)
{
	RTC_CHECK_HR_RETURN(setDescription(kSetDescriptionLocalFalse, RTCSessionDescriptionInit, pPromiseVoid));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_remoteDescription(__out VARIANT* RTCSessionDescription)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CRTCSessionDescription>* remoteDescription;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&remoteDescription, m_ex->remoteDescription()));
	*RTCSessionDescription = CComVariant(remoteDescription);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_currentRemoteDescription(__out VARIANT* RTCSessionDescription)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CRTCSessionDescription>* currentRemoteDescription;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&currentRemoteDescription, m_ex->currentRemoteDescription()));
	*RTCSessionDescription = CComVariant(currentRemoteDescription);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_pendingRemoteDescription(__out VARIANT* RTCSessionDescription)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CRTCSessionDescription>* pendingRemoteDescription;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&pendingRemoteDescription, m_ex->pendingRemoteDescription()));
	*RTCSessionDescription = CComVariant(pendingRemoteDescription);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::addIceCandidate(__in VARIANT Candidate, __out VARIANT* pPromiseVoid)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::shared_ptr<ExRTCIceCandidate> exIceCandidate;
	// Candidate must be 'RTCIceCandidateInit or RTCIceCandidate'

	// https://www.w3.org/TR/webrtc/#dom-rtcicecandidateinit
	{
		CComPtr<IDispatch>RTCIceCandidateInit = Utils::VariantToDispatch(Candidate);
		if (RTCIceCandidateInit) {
			BSTR bstrCandidate;
			HRESULT hr = Utils::DispatchGetPropBSTR(RTCIceCandidateInit, L"candidate", bstrCandidate);
			if (SUCCEEDED(hr)) {
				BSTR bstrSdpMid;
				hr = Utils::DispatchGetPropBSTR(RTCIceCandidateInit, L"sdpMid", bstrSdpMid);
				if (SUCCEEDED(hr)) {
					long longSdpMLineIndex;
					hr = Utils::DispatchGetPropInteger(RTCIceCandidateInit, L"sdpMLineIndex", longSdpMLineIndex);
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
	}
	if (!exIceCandidate.get()) {
		// https://www.w3.org/TR/webrtc/#dom-rtcicecandidate
		RTC_CHECK_HR_RETURN((Utils::QueryEx<IRTCIceCandidate, CRTCIceCandidate, ExRTCIceCandidate>(Candidate, exIceCandidate)));
	}

	CComObject<CPromise>* promiseVoid;
	std::shared_ptr<ExRTCPeerConnection> peerconnection = m_ex;
	std::shared_ptr<ExPromiseAtl<CEmpty, ExEmpty, CRTCError, ExRTCError> > atlPromise =
		std::make_shared<ExPromiseAtl<CEmpty, ExEmpty, CRTCError, ExRTCError> >();
	std::weak_ptr<ExPromiseAtl<CEmpty, ExEmpty, CRTCError, ExRTCError> > atlPromiseWeak(atlPromise);
	auto funcCore = [peerconnection, exIceCandidate, atlPromiseWeak]() -> HRESULT {
		auto atlPromisePtr = atlPromiseWeak.lock();
		if (atlPromisePtr) {
			if (peerconnection->addIceCandidate(exIceCandidate) == true) {
				return atlPromisePtr->raiseOnFulfilled(std::make_shared<ExEmpty>());
			}
			else {
				return atlPromisePtr->raiseOnRejected(std::make_shared<ExRTCError>(RTC_OperationError));
			}
		}
		return S_OK;
	};
	HRESULT hr = Utils::CreateInstanceWithRef(&promiseVoid, atlPromise->Bind(std::bind(funcCore))->AutoStart());
	if (SUCCEEDED(hr)) {
		*pPromiseVoid = CComVariant(promiseVoid);
	}
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_signalingState(__out BSTR* RTCSignalingState)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->signalingState(), RTCSignalingState));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_iceGatheringState(__out BSTR* RTCIceGatheringState)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->iceGatheringState(), RTCIceGatheringState));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_iceConnectionState(__out BSTR* RTCIceConnectionState)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->iceConnectionState(), RTCIceConnectionState));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_connectionState(__out BSTR* RTCPeerConnectionState)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->connectionState(), RTCPeerConnectionState));
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_canTrickleIceCandidates(__out VARIANT_BOOL* BooleanVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*BooleanVal = m_ex->canTrickleIceCandidates() ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::getConfiguration(__out VARIANT* RTCConfiguration)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return E_NOTIMPL;
}

STDMETHODIMP CRTCPeerConnection::setConfiguration(__in VARIANT RTCConfiguration)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return E_NOTIMPL;
}

STDMETHODIMP CRTCPeerConnection::close()
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	if (!m_ex->close()) {
		RTC_CHECK_HR_RETURN(E_FAIL);
	}
	return S_OK;
}

// Shim not part of the standard
STDMETHODIMP CRTCPeerConnection::addStream(__in VARIANT MediaStream)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::shared_ptr<ExMediaStream> exMediaStream;
	RTC_CHECK_HR_RETURN((Utils::QueryEx<IMediaStreamDoubango, CMediaStream, ExMediaStream>(MediaStream, exMediaStream)));
	if (!m_ex->addStream(exMediaStream)) {
		RTC_CHECK_HR_RETURN(E_FAIL);
	}
	return S_OK;
}

// Shim not part of the standard
STDMETHODIMP CRTCPeerConnection::removeStream(__in VARIANT MediaStream)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::shared_ptr<ExMediaStream> exMediaStream;
	RTC_CHECK_HR_RETURN((Utils::QueryEx<IMediaStreamDoubango, CMediaStream, ExMediaStream>(MediaStream, exMediaStream)));
	if (!m_ex->removeStream(exMediaStream)) {
		RTC_CHECK_HR_RETURN(E_FAIL);
	}
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_onnegotiationneeded(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onnegotiationneeded);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_onnegotiationneeded(__in VARIANT newVal)
{
	m_callback_onnegotiationneeded = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_onicecandidate(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onicecandidate);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_onicecandidate(__in VARIANT newVal)
{
	m_callback_onicecandidate = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_onicecandidateerror(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onicecandidateerror);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_onicecandidateerror(__in VARIANT newVal)
{
	m_callback_onicecandidateerror = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_onsignalingstatechange(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onsignalingstatechange);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_onsignalingstatechange(__in VARIANT newVal)
{
	m_callback_onsignalingstatechange = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_oniceconnectionstatechange(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_oniceconnectionstatechange);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_oniceconnectionstatechange(__in VARIANT newVal)
{
	m_callback_oniceconnectionstatechange = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_onicegatheringstatechange(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onicegatheringstatechange);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_onicegatheringstatechange(__in VARIANT newVal)
{
	m_callback_onicegatheringstatechange = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_onconnectionstatechange(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onconnectionstatechange);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_onconnectionstatechange(__in VARIANT newVal)
{
	m_callback_onconnectionstatechange = Utils::VariantToDispatch(newVal);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::get_onfingerprintfailure(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onfingerprintfailure);
	return S_OK;
}

STDMETHODIMP CRTCPeerConnection::put_onfingerprintfailure(__in VARIANT newVal)
{
	m_callback_onfingerprintfailure = Utils::VariantToDispatch(newVal);
	return S_OK;
}

// Shim not part of the standard
STDMETHODIMP CRTCPeerConnection::get_onaddstream(__out VARIANT* pVal)
{
	*pVal = CComVariant(m_callback_onaddstream);
	return S_OK;
}

// Shim not part of the standard
STDMETHODIMP CRTCPeerConnection::put_onaddstream(__in VARIANT newVal)
{
	m_callback_onaddstream = Utils::VariantToDispatch(newVal);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions-1
// RTCDataChannel createDataChannel([TreatNullAs=EmptyString] USVString label, optional RTCDataChannelInit dataChannelDict);
STDMETHODIMP CRTCPeerConnection::createDataChannel(__in BSTR bstrLabel, __in_opt VARIANT varDataChannelDict, __out VARIANT* varDataChannel)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::shared_ptr<RTCDataChannelInit> dataChannelDict;
	RTC_CHECK_HR_RETURN(Utils::BuildRTCDataChannelInit(varDataChannelDict, dataChannelDict));

	char *label = _com_util::ConvertBSTRToString(bstrLabel ? bstrLabel : _T(""));
	if (!label) {
		RTC_CHECK_HR_RETURN(E_OUTOFMEMORY);
	}
	std::shared_ptr<ExRTCDataChannel> exDataChannel = m_ex->createDataChannel(label, dataChannelDict);
	delete[] label;
	if (!exDataChannel) {
		RTC_CHECK_HR_RETURN(E_OUTOFMEMORY);
	}

	CComObject<CRTCDataChannel>* dataChannel;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&dataChannel, exDataChannel));
	*varDataChannel = CComVariant(dataChannel);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions-1
// readonly attribute RTCSctpTransport? sctp;
STDMETHODIMP CRTCPeerConnection::get_sctp(__out VARIANT* varRTCSctpTransport)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions-1
// attribute EventHandler ondatachannel;
STDMETHODIMP CRTCPeerConnection::get_ondatachannel(__out VARIANT* varEventHandler)
{
	*varEventHandler = CComVariant(m_callback_ondatachannel);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions-1
// attribute EventHandler ondatachannel;
STDMETHODIMP CRTCPeerConnection::put_ondatachannel(__in VARIANT varEventHandler)
{
	m_callback_ondatachannel = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// sequence<RTCRtpSender> getSenders();
STDMETHODIMP CRTCPeerConnection::getSenders(__out VARIANT* varSequenceRTCRtpSender)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComPtr<IDispatch> spDispatch;
	RTC_CHECK_HR_RETURN(CPlugin::Singleton()->GetDispatch(spDispatch));

	std::vector<std::shared_ptr<ExRTCRtpSender > > exVect = m_ex->getSenders();
	std::vector<CComVariant> atlVect;
	for (std::vector<std::shared_ptr<ExRTCRtpSender > >::iterator it = exVect.begin(); it < exVect.end(); ++it) {
		CComObject<CRTCRtpSender>* sender;
		if (SUCCEEDED(Utils::CreateInstanceWithRef(&sender, *it))) {
			atlVect.push_back(CComVariant(sender));
			RTC_SAFE_RELEASE(&sender);
		}
	}

	CComQIPtr<IDispatchEx> spArray;
	RTC_CHECK_HR_RETURN(Utils::CreateJsArray(spDispatch, atlVect, spArray));
	*varSequenceRTCRtpSender = CComVariant(spArray.Detach());
	
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// sequence<RTCRtpReceiver> getReceivers()
STDMETHODIMP CRTCPeerConnection::getReceivers(__out VARIANT* varSequenceRTCRtpReceiver)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComPtr<IDispatch> spDispatch;
	RTC_CHECK_HR_RETURN(CPlugin::Singleton()->GetDispatch(spDispatch));

	std::vector<std::shared_ptr<ExRTCRtpReceiver > > exVect = m_ex->getReceivers();
	std::vector<CComVariant> atlVect;
	for (std::vector<std::shared_ptr<ExRTCRtpReceiver > >::iterator it = exVect.begin(); it < exVect.end(); ++it) {
		CComObject<CRTCRtpReceiver>* receiver;
		if (SUCCEEDED(Utils::CreateInstanceWithRef(&receiver, *it))) {
			atlVect.push_back(CComVariant(receiver));
			RTC_SAFE_RELEASE(&receiver);
		}
	}

	CComQIPtr<IDispatchEx> spArray;
	RTC_CHECK_HR_RETURN(Utils::CreateJsArray(spDispatch, atlVect, spArray));
	*varSequenceRTCRtpReceiver = CComVariant(spArray.Detach());

	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// sequence<RTCRtpTransceiver> getTransceivers()
STDMETHODIMP CRTCPeerConnection::getTransceivers(__out VARIANT* varSequenceRTCRtpTransceiver)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// RTCRtpSender addTrack(MediaStreamTrack track, MediaStream... streams)
STDMETHODIMP CRTCPeerConnection::addTrack(__in VARIANT varMediaStreamTrack, __in_opt VARIANT varMediaStreams, __out VARIANT* varRTCRtpSender)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// void removeTrack(RTCRtpSender sender)
STDMETHODIMP CRTCPeerConnection::removeTrack(__in VARIANT varRTCRtpSender)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// RTCRtpTransceiver addTransceiver((MediaStreamTrack or DOMString) trackOrKind, optional RTCRtpTransceiverInit init)
STDMETHODIMP CRTCPeerConnection::addTransceiver(__in VARIANT varMediaStreamTrackorDOMStringTrackOrKind, __in_opt VARIANT varRTCRtpTransceiverInit)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(E_NOTIMPL);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// attribute EventHandler ontrack
STDMETHODIMP CRTCPeerConnection::get_ontrack(__out VARIANT* varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*varEventHandler = CComVariant(m_callback_ontrack);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions
// attribute EventHandler ontrack
STDMETHODIMP CRTCPeerConnection::put_ontrack(__in VARIANT varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_ontrack = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface-extensions-2
// Promise<RTCStatsReport> getStats(optional MediaStreamTrack? selector = null);
STDMETHODIMP CRTCPeerConnection::getStats(__in_opt VARIANT varMediaStreamTrack, __out VARIANT* varPromiseRTCStatsReport)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	HRESULT hr = S_OK;
	std::shared_ptr<ExMediaStreamTrack> exMediaStreamTrack;
	if (varMediaStreamTrack.vt == VT_DISPATCH && varMediaStreamTrack.pdispVal) { // check not null (arg is optional) and type is correct
		RTC_CHECK_HR_RETURN((Utils::QueryEx<IMediaStreamTrack, CMediaStreamTrack, ExMediaStreamTrack>(varMediaStreamTrack, exMediaStreamTrack)));
	}
	std::shared_ptr<ExRTCPeerConnection> peerconnection = m_ex;
	std::shared_ptr<ExPromiseAtl<CRTCStatsReport, ExRTCStatsReport, CRTCError, ExRTCError> > atlPromise =
		std::make_shared<ExPromiseAtl<CRTCStatsReport, ExRTCStatsReport, CRTCError, ExRTCError> >(RTC_WM_GETSTATS_SUCESS, RTC_WM_GETSTATS_ERROR);
	std::weak_ptr<ExPromiseAtl<CRTCStatsReport, ExRTCStatsReport, CRTCError, ExRTCError> > atlPromiseWeak(atlPromise);
	auto funcCore = [exMediaStreamTrack, peerconnection, atlPromiseWeak]() -> HRESULT {
		auto atlPromisePtr = atlPromiseWeak.lock();
		if (atlPromisePtr) {
			return peerconnection->getStats(
				exMediaStreamTrack,
				[=](std::shared_ptr<ExRTCStatsReport> report) { atlPromisePtr->raiseOnFulfilled(report); },
				[=](std::shared_ptr<ExRTCError> err) { atlPromisePtr->raiseOnRejected(err); }
			) ? S_OK : E_FAIL;
		}
		return S_OK;
	};
	CComObject<CPromise>* promiseRTCStatsReport;
	hr = Utils::CreateInstanceWithRef(&promiseRTCStatsReport, atlPromise->Bind(std::bind(funcCore)));
	if (SUCCEEDED(hr)) {
		*varPromiseRTCStatsReport = CComVariant(promiseRTCStatsReport);
	}
	return hr;
}

HRESULT CRTCPeerConnection::createOfferAnswer(bool offer, __in_opt VARIANT RTCOfferAnswerOptions, __out VARIANT* pPromiseRTCSessionDescriptionInit)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	HRESULT hr = S_OK;
	std::shared_ptr<webrtc::PeerConnectionInterface::RTCOfferAnswerOptions> rtcOfferAnswerOptions;
	RTC_CHECK_HR_RETURN(hr = Utils::BuildRTCOfferAnswerOptions(RTCOfferAnswerOptions, rtcOfferAnswerOptions));

	CComObject<CPromise>* promiseRTCSessionDescription;
	std::shared_ptr<ExRTCPeerConnection> peerconnection = m_ex;
	std::shared_ptr<ExPromiseAtl<CRTCSessionDescription, ExRTCSessionDescription, CRTCError, ExRTCError> > atlPromise =
		std::make_shared<ExPromiseAtl<CRTCSessionDescription, ExRTCSessionDescription, CRTCError, ExRTCError> >(offer ? RTC_WM_CREATEOFFER_SUCCESS : RTC_WM_CREATEANSWER_SUCCESS, offer ? RTC_WM_CREATEOFFER_ERROR : RTC_WM_CREATEANSWER_ERROR);
	std::weak_ptr<ExPromiseAtl<CRTCSessionDescription, ExRTCSessionDescription, CRTCError, ExRTCError> > atlPromiseWeak(atlPromise);
	auto funcCore = [offer, peerconnection, rtcOfferAnswerOptions, atlPromiseWeak]() -> HRESULT {
		auto atlPromisePtr = atlPromiseWeak.lock();
		if (atlPromisePtr) {
			if (offer) {
				return peerconnection->createOffer(
					[=](std::shared_ptr<ExRTCSessionDescription> sdp) { atlPromisePtr->raiseOnFulfilled(sdp); },
					[=](std::shared_ptr<ExRTCError> err) { atlPromisePtr->raiseOnRejected(err); },
					rtcOfferAnswerOptions
				) ? S_OK : E_FAIL;
			}
			else {
				return peerconnection->createAnswer(
					[=](std::shared_ptr<ExRTCSessionDescription> sdp) { atlPromisePtr->raiseOnFulfilled(sdp); },
					[=](std::shared_ptr<ExRTCError> err) { atlPromisePtr->raiseOnRejected(err); },
					rtcOfferAnswerOptions
				) ? S_OK : E_FAIL;
			}
		}
		return S_OK;
	};
	hr = Utils::CreateInstanceWithRef(&promiseRTCSessionDescription, atlPromise->Bind(std::bind(funcCore)));
	if (SUCCEEDED(hr)) {
		*pPromiseRTCSessionDescriptionInit = CComVariant(promiseRTCSessionDescription);
	}
	return hr;
}

HRESULT CRTCPeerConnection::setDescription(__in bool local, __in_opt VARIANT RTCSessionDescriptionInit, __out VARIANT* pPromiseVoid)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::shared_ptr<ExRTCSessionDescription> exSdp;
	RTC_CHECK_HR_RETURN((Utils::QueryEx<IRTCSessionDescription, CRTCSessionDescription, ExRTCSessionDescription>(RTCSessionDescriptionInit, exSdp)));

	CComObject<CPromise>* promiseVoid;
	std::shared_ptr<ExRTCPeerConnection> peerconnection = m_ex;
	std::shared_ptr<ExPromiseAtl<CEmpty, ExEmpty, CRTCError, ExRTCError> > atlPromise =
		std::make_shared<ExPromiseAtl<CEmpty, ExEmpty, CRTCError, ExRTCError> >();
	std::weak_ptr<ExPromiseAtl<CEmpty, ExEmpty, CRTCError, ExRTCError> > atlPromiseWeak(atlPromise);
	auto funcCore = [local, peerconnection, exSdp, atlPromiseWeak]() -> HRESULT {
		auto atlPromisePtr = atlPromiseWeak.lock();
		if (atlPromisePtr) {
			if (local) {
				return peerconnection->setLocalDescription(
					exSdp,
					[=]() { atlPromisePtr->raiseOnFulfilled(std::make_shared<ExEmpty>()); },
					[=](std::shared_ptr<ExRTCError> err) { atlPromisePtr->raiseOnRejected(err); }
				) ? S_OK : E_FAIL;
			}
			else {
				return peerconnection->setRemoteDescription(
					exSdp,
					[=]() { atlPromisePtr->raiseOnFulfilled(std::make_shared<ExEmpty>()); },
					[=](std::shared_ptr<ExRTCError> err) { atlPromisePtr->raiseOnRejected(err); }
				) ? S_OK : E_FAIL;
			}
		}
		return S_OK;
	};

	HRESULT hr = Utils::CreateInstanceWithRef(&promiseVoid, atlPromise->Bind(std::bind(funcCore))->AutoStart());
	if (SUCCEEDED(hr)) {
		*pPromiseVoid = CComVariant(promiseVoid);
	}
	return hr;
}

void CRTCPeerConnection::onnegotiationneeded()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onnegotiationneeded, RTC_WM_ONNEGOTIATIONNEEDED)));
}

void CRTCPeerConnection::onicecandidate(std::shared_ptr<ExRTCPeerConnectionIceEvent> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CRTCPeerConnectionIceEvent, ExRTCPeerConnectionIceEvent>(m_callback_onicecandidate, RTC_WM_ONICECANDIDATE, e)));
}

void CRTCPeerConnection::onicecandidateerror()
{
	RTC_DEBUG_ERROR("Not implemented");
}

void CRTCPeerConnection::onsignalingstatechange()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onsignalingstatechange, RTC_WM_ONSIGNALINGSTATECHANGE)));
}

void CRTCPeerConnection::oniceconnectionstatechange()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_oniceconnectionstatechange, RTC_WM_ONICECONNECTIONSTATECHANGE)));
}

void CRTCPeerConnection::onicegatheringstatechange()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onicegatheringstatechange, RTC_WM_ONICEGATHERINGSTATECHANGE)));
}

void CRTCPeerConnection::onconnectionstatechange()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onconnectionstatechange, RTC_WM_ONCONNECTIONSTATECHANGE)));
}

void CRTCPeerConnection::onfingerprintfailure()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onfingerprintfailure, RTC_WM_ONFINGERPRINTFAILURE)));
}

void CRTCPeerConnection::onaddstream(std::shared_ptr<ExMediaStreamEvent> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CMediaStreamEvent, ExMediaStreamEvent>(m_callback_onaddstream, RTC_WM_ONADDSTREAM, e)));
}

void CRTCPeerConnection::onremovestream(std::shared_ptr<ExMediaStreamEvent> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CMediaStreamEvent, ExMediaStreamEvent>(m_callback_onremovestream, RTC_WM_ONREMOVESTREAM, e)));
}

void CRTCPeerConnection::ondatachannel(std::shared_ptr<ExRTCDataChannelEvent> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CRTCDataChannelEvent, ExRTCDataChannelEvent>(m_callback_ondatachannel, RTC_WM_ONDATACHANNEL, e)));
}

void CRTCPeerConnection::ontrack(std::shared_ptr<ExRTCTrackEvent> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CRTCTrackEvent, ExRTCTrackEvent>(m_callback_ontrack, RTC_WM_ONTRACK, e)));
}