// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface
#include "ExRTCPeerConnection.h"
#include "ExErrorMessage.h"
#include "ExRTCError.h"
#include "ExRTCIceCandidate.h"
#include "ExRTCPeerConnectionIceEvent.h"
#include "ExMediaStreamEvent.h"
#include "ExRTCStats.h"
#include "ExRTCStatsReport.h"
#include "ExRTCDataChannelEvent.h"
#include "ExRTCDataChannel.h"
#include "RTCMediaConstraints.h"


//
//	DummySetSessionDescriptionObserver
//
class DummySetSessionDescriptionObserver
	: public webrtc::SetSessionDescriptionObserver {
public:
	static DummySetSessionDescriptionObserver* Create(FunctionCallbackVoid successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr) {
		return new rtc::RefCountedObject<DummySetSessionDescriptionObserver>(successCallback, failureCallback);
	}
	virtual void OnSuccess() {
		LOG(INFO) << __FUNCTION__;
		if (m_successCallback) {
			m_successCallback();
		}
	}
	virtual void OnFailure(const std::string& error) {
		LOG(INFO) << __FUNCTION__ << " " << error;
		if (m_failureCallback) {
			m_failureCallback(std::make_shared<ExRTCError>(RTC_OperationError, error));
		}
	}

protected:
	DummySetSessionDescriptionObserver(FunctionCallbackVoid successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr) : m_successCallback(successCallback), m_failureCallback(failureCallback) {}
	~DummySetSessionDescriptionObserver()
	{
		RTC_DEBUG_INFO("~DummySetSessionDescriptionObserver");
	}
private:
	FunctionCallbackVoid m_successCallback;
	FunctionCallbackRTCError m_failureCallback;
};


//
//	DummyCreateSessionDescriptionObserver
//
class DummyCreateSessionDescriptionObserver
	: public webrtc::CreateSessionDescriptionObserver {
public:
	static DummyCreateSessionDescriptionObserver* Create(const ExRTCPeerConnection* pc, FunctionCallbackSessionDescription successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr) {
		return new rtc::RefCountedObject<DummyCreateSessionDescriptionObserver>(pc, successCallback, failureCallback);
	}
	virtual void OnSuccess(webrtc::SessionDescriptionInterface* desc) {
		LOG(INFO) << __FUNCTION__;
		std::string sdpString;
		if (desc->ToString(&sdpString)) {
			webrtc::SdpParseError error;
			std::shared_ptr<ExRTCSessionDescription> sdpObj(new ExRTCSessionDescription(desc->type(), sdpString, &error));
			if (!sdpObj.get()) {
				if (m_failureCallback) {
					std::shared_ptr<ExRTCError> err(new ExRTCError(RTC_OperationError, error.description));
					err->setErrorDetail(error.line);
					m_failureCallback(err);
				}
				return;
			}
			if (!sdpObj->isValid()) {
				// TODO(dmi) use 'error' to build RTCError object (https://www.w3.org/TR/webrtc/#rtcerror-object)
				if (m_failureCallback) {
					std::shared_ptr<ExRTCError> err(new ExRTCError(RTC_OperationError, error.description));
					err->setErrorDetail(error.line);
					m_failureCallback(err);
				}
				return;
			}
			if (m_successCallback) {
				m_successCallback(sdpObj);
			}
		}
		else if (m_failureCallback) {
			m_failureCallback(std::make_shared<ExRTCError>(RTC_OperationError, "Sdp parsing failed"));
		}
	}
	virtual void OnFailure(const std::string& error) {
		LOG(INFO) << __FUNCTION__ << " " << error;
		if (m_failureCallback) {
			m_failureCallback(std::make_shared<ExRTCError>(RTC_OperationError, error));
		}
	}

protected:
	DummyCreateSessionDescriptionObserver(const ExRTCPeerConnection* pc, FunctionCallbackSessionDescription successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr)
		: m_pc(pc)
		, m_successCallback(successCallback)
		, m_failureCallback(failureCallback) {}
	virtual ~DummyCreateSessionDescriptionObserver()
	{
		RTC_DEBUG_INFO("~DummyCreateSessionDescriptionObserver");
	}
private:
	const ExRTCPeerConnection* m_pc;
	FunctionCallbackSessionDescription m_successCallback;
	FunctionCallbackRTCError m_failureCallback;
};


//
//	DummyStatsObserver
//
class DummyStatsObserver
	: public webrtc::StatsObserver {
public:
	static DummyStatsObserver* Create(FunctionCallbackStatsReport successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr) {
		return
			new rtc::RefCountedObject<DummyStatsObserver>(successCallback, failureCallback);
	}
	virtual void OnComplete(const webrtc::StatsReports& reports) {
		LOG(INFO) << __FUNCTION__;
		if (m_successCallback) {
			std::shared_ptr<ExRTCStatsReport> exReports = std::make_shared<ExRTCStatsReport>();
			if (exReports.get()) {
				const webrtc::StatsReport* report;
				for (size_t i = 0; i < reports.size(); ++i) {
					report = reports[i];
					if (report) {
						std::shared_ptr<ExRTCStats> exStat = ExRTCStats::Create(report);
						if (exStat.get()) {
							exReports->insert(std::pair<std::string, std::shared_ptr<ExRTCStats> >(exStat->id(), exStat));
						}
					}
				}
				m_successCallback(exReports);
			}
		}
	}
protected:
	DummyStatsObserver(FunctionCallbackStatsReport successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr) {
		m_successCallback = successCallback;
		m_failureCallback = failureCallback;
	}
	~DummyStatsObserver() {
		RTC_DEBUG_INFO("~DummyStatsObserver");
	}
private:
	FunctionCallbackStatsReport m_successCallback;
	FunctionCallbackRTCError m_failureCallback;
};


//
//		ExRTCPeerConnection
//

ExRTCPeerConnection::ExRTCPeerConnection(const RTCConfiguration* rtcConfiguration_ /*= nullptr*/, const MediaConstraintSets* mediaConstraints /*= nullptr*/)
	: m_peer_connection(nullptr)
	, m_peer_connection_factory(nullptr)
	, m_callback_onnegotiationneeded(nullptr)
	, m_callback_onicecandidate(nullptr)
	, m_callback_onicecandidateerror(nullptr)
	, m_callback_onsignalingstatechange(nullptr)
	, m_callback_oniceconnectionstatechange(nullptr)
	, m_callback_onicegatheringstatechange(nullptr)
	, m_callback_onconnectionstatechange(nullptr)
	, m_callback_onfingerprintfailure(nullptr)
	, m_callback_onaddstream(nullptr)
{
	webrtc::PeerConnectionInterface::RTCConfiguration rtcConfiguration/*(webrtc::PeerConnectionInterface::IceTransportsType::kAll)*/;
	webrtc::PeerConnectionInterface::IceServers servers;
	if (rtcConfiguration_) {
		for (size_t i = 0; i < rtcConfiguration_->iceServers.size(); ++i) {
			if (!rtcConfiguration_->iceServers[i].urls.empty()) { // PeerConnection fails to create when urls are empty
				webrtc::PeerConnectionInterface::IceServer server;
				server.urls.insert(server.urls.end(), rtcConfiguration_->iceServers[i].urls.begin(), rtcConfiguration_->iceServers[i].urls.end());
				server.password = rtcConfiguration_->iceServers[i].password;
				server.username = rtcConfiguration_->iceServers[i].username;
				rtcConfiguration.servers.push_back(server);
			}
		}
	}

	rtc::scoped_refptr<RTCMediaConstraints> rtcConstraints = BuildConstraints(mediaConstraints);
	// DTLS is required, enable it unless the end-user decided to disable it
	std::string value;
	if (!rtcConstraints->GetMandatory().FindFirst(webrtc::MediaConstraintsInterface::kEnableDtlsSrtp, &value)) {
		rtcConstraints->AddMandatory(webrtc::MediaConstraintsInterface::kEnableDtlsSrtp, webrtc::MediaConstraintsInterface::kValueTrue);
	}

	m_peer_connection_factory = GetPeerConnectionFactory();
	if (!m_peer_connection_factory.get()) {
		RTC_DEBUG_ERROR("Failed to create factory");
		return;
	}

	m_peer_connection = m_peer_connection_factory->CreatePeerConnection(
		rtcConfiguration,
		rtcConstraints,
		nullptr, // Port allocator
		nullptr,
		this);
}

ExRTCPeerConnection::~ExRTCPeerConnection()
{
	m_peer_connection = nullptr;
	m_peer_connection_factory = nullptr;
}

bool ExRTCPeerConnection::createOffer(FunctionCallbackSessionDescription successCallback /*= nullptr*/, FunctionCallbackRTCError failureCallback /*= nullptr*/, std::shared_ptr<webrtc::PeerConnectionInterface::RTCOfferAnswerOptions> options /*= nullptr*/)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	m_peer_connection->CreateOffer(DummyCreateSessionDescriptionObserver::Create(this, successCallback, failureCallback), options ? *options : webrtc::PeerConnectionInterface::RTCOfferAnswerOptions());
	return true;
}

bool ExRTCPeerConnection::createAnswer(FunctionCallbackSessionDescription successCallback /*= nullptr*/, FunctionCallbackRTCError failureCallback /*= nullptr*/, std::shared_ptr<webrtc::PeerConnectionInterface::RTCOfferAnswerOptions> options /*= nullptr*/)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	m_peer_connection->CreateAnswer(DummyCreateSessionDescriptionObserver::Create(this, successCallback, failureCallback), options ? *options : webrtc::PeerConnectionInterface::RTCOfferAnswerOptions());
	return true;
}

bool ExRTCPeerConnection::setLocalDescription(std::shared_ptr<ExRTCSessionDescription> sdp, FunctionCallbackVoid successCallback /*= nullptr*/, FunctionCallbackRTCError failureCallback /*= nullptr*/)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	// JsepInterface takes the ownership of |sdp| even if it fails.
	webrtc::SdpParseError error;
	m_peer_connection->SetLocalDescription(DummySetSessionDescriptionObserver::Create(successCallback, failureCallback), sdp->CreateSessionDescription(&error));
	return true;
}

std::shared_ptr<ExRTCSessionDescription> ExRTCPeerConnection::localDescription()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	webrtc::SdpParseError error;
	return ExRTCSessionDescription::CreateSessionDescription(m_peer_connection->local_description(), &error);
}

std::shared_ptr<ExRTCSessionDescription> ExRTCPeerConnection::currentLocalDescription()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	webrtc::SdpParseError error;
	return ExRTCSessionDescription::CreateSessionDescription(m_peer_connection->current_local_description(), &error);
}

std::shared_ptr<ExRTCSessionDescription> ExRTCPeerConnection::pendingLocalDescription()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	webrtc::SdpParseError error;
	return ExRTCSessionDescription::CreateSessionDescription(m_peer_connection->pending_local_description(), &error);
}

bool ExRTCPeerConnection::setRemoteDescription(std::shared_ptr<ExRTCSessionDescription> sdp, FunctionCallbackVoid successCallback /*= nullptr*/, FunctionCallbackRTCError failureCallback /*= nullptr*/)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	// JsepInterface takes the ownership of |sdp| even if it fails.
	webrtc::SdpParseError error;
	m_peer_connection->SetRemoteDescription(DummySetSessionDescriptionObserver::Create(successCallback, failureCallback), sdp->CreateSessionDescription(&error));
	return true;
}

std::shared_ptr<ExRTCSessionDescription> ExRTCPeerConnection::remoteDescription()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	webrtc::SdpParseError error;
	return ExRTCSessionDescription::CreateSessionDescription(m_peer_connection->remote_description(), &error);
}

std::shared_ptr<ExRTCSessionDescription> ExRTCPeerConnection::currentRemoteDescription()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	webrtc::SdpParseError error;
	return ExRTCSessionDescription::CreateSessionDescription(m_peer_connection->current_remote_description(), &error);
}

std::shared_ptr<ExRTCSessionDescription> ExRTCPeerConnection::pendingRemoteDescription()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	webrtc::SdpParseError error;
	return ExRTCSessionDescription::CreateSessionDescription(m_peer_connection->pending_remote_description(), &error);
}

bool ExRTCPeerConnection::addIceCandidate(std::shared_ptr<ExRTCIceCandidate> iceCandidate)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	if (iceCandidate.get()) {
		return m_peer_connection->AddIceCandidate(iceCandidate->iceCandidateObj());
	}
	return false;
}

const std::string ExRTCPeerConnection::signalingState() const
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return kStringEmpty;
	}
	switch (m_peer_connection->signaling_state()) {
	case webrtc::PeerConnectionInterface::kStable: return kSignalingStateStable;
	case webrtc::PeerConnectionInterface::kHaveLocalOffer: return kSignalingStateHaveLocalOffer;
	case webrtc::PeerConnectionInterface::kHaveLocalPrAnswer: return kSignalingStateHaveLocalPrAnswer;
	case webrtc::PeerConnectionInterface::kHaveRemoteOffer: return kSignalingStateHaveRemoteOffer;
	case webrtc::PeerConnectionInterface::kHaveRemotePrAnswer: return kSignalingStateHaveRemotePrAnswer;
	case webrtc::PeerConnectionInterface::kClosed: return kSignalingStateClosed;
	}
	return kStringEmpty;
}

const std::string ExRTCPeerConnection::iceGatheringState() const
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return kStringEmpty;
	}
	switch (m_peer_connection->ice_gathering_state()) {
	case webrtc::PeerConnectionInterface::kIceGatheringNew: return kRTCIceGatheringStateNew;
	case webrtc::PeerConnectionInterface::kIceGatheringGathering: return kRTCIceGatheringStateGathering;
	case webrtc::PeerConnectionInterface::kIceGatheringComplete: return kRTCIceGatheringStateComplete;
	}
	return kStringEmpty;
}

const std::string ExRTCPeerConnection::iceConnectionState() const
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return kStringEmpty;
	}
	switch (m_peer_connection->ice_connection_state()) {
	case webrtc::PeerConnectionInterface::kIceConnectionNew: return kRTCIceConnectionStateNew;
	case webrtc::PeerConnectionInterface::kIceConnectionChecking: return kRTCIceConnectionStateChecking;
	case webrtc::PeerConnectionInterface::kIceConnectionConnected: return kRTCIceConnectionStateConnected;
	case webrtc::PeerConnectionInterface::kIceConnectionCompleted: return kRTCIceConnectionStateCompleted;
	case webrtc::PeerConnectionInterface::kIceConnectionFailed: return kRTCIceConnectionStateFailed;
	case webrtc::PeerConnectionInterface::kIceConnectionDisconnected: return kRTCIceConnectionStateDisconnected;
	case webrtc::PeerConnectionInterface::kIceConnectionClosed: return kRTCIceConnectionStateClosed;
	case webrtc::PeerConnectionInterface::kIceConnectionMax: break;
	}
	return kStringEmpty;
}

const std::string ExRTCPeerConnection::connectionState() const
{
	// https://www.w3.org/TR/webrtc/#dom-rtcpeerconnectionstate
	RTC_DEBUG_ERROR("Not implemented");
	return kStringEmpty;
}

bool ExRTCPeerConnection::canTrickleIceCandidates() const
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return true;
	}
	return true;
}

void* ExRTCPeerConnection::getConfiguration() const
{
	RTC_DEBUG_ERROR("Not implemented");
	return nullptr;
}

bool ExRTCPeerConnection::setConfiguration()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}

	RTC_DEBUG_ERROR("Not implemented");
	return false;
}

bool ExRTCPeerConnection::close()
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	m_peer_connection->Close();
	return true;
}

bool ExRTCPeerConnection::addStream(std::shared_ptr<ExMediaStream> mediaStream)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	if (mediaStream.get()) {
		return m_peer_connection->AddStream(BuildMediaStream(mediaStream.get()));
	}
	return false;
}

bool ExRTCPeerConnection::removeStream(std::shared_ptr<ExMediaStream> mediaStream)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	if (mediaStream.get()) {
		m_peer_connection->RemoveStream(BuildMediaStream(mediaStream.get()));
		return true;
	}
	return false;
}

std::shared_ptr<ExRTCRtpSender> ExRTCPeerConnection::addTrack(std::shared_ptr<ExMediaStreamTrack> track, std::vector<std::shared_ptr<ExMediaStream> > streams)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	std::vector<webrtc::MediaStreamInterface*> stream_;
	for (std::vector<std::shared_ptr<ExMediaStream> >::iterator it = streams.begin(); it < streams.end(); ++it) {
		stream_.push_back(static_cast<webrtc::MediaStreamInterface*>((*it)->GetWrappedStream()));
	}
	return std::make_shared<ExRTCRtpSender>(
		m_peer_connection->AddTrack(static_cast<ExMediaStreamTrackBase*>(track.get())->_track(), stream_));
}

bool ExRTCPeerConnection::removeTrack(std::shared_ptr<ExRTCRtpSender> sender)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	return m_peer_connection->RemoveTrack(sender->obj().get());
}

std::vector<std::shared_ptr<ExRTCRtpSender > > ExRTCPeerConnection::getSenders()
{
	std::vector<std::shared_ptr<ExRTCRtpSender > > senders;
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return senders;
	}
	std::vector<rtc::scoped_refptr<webrtc::RtpSenderInterface> > senders_ = m_peer_connection->GetSenders();
	for (std::vector<rtc::scoped_refptr<webrtc::RtpSenderInterface> >::iterator it = senders_.begin(); it < senders_.end(); ++it) {
		senders.push_back(std::make_shared<ExRTCRtpSender>(*it));
	}
	return senders;
}

std::vector<std::shared_ptr<ExRTCRtpReceiver > > ExRTCPeerConnection::getReceivers()
{
	std::vector<std::shared_ptr<ExRTCRtpReceiver > > receivers;
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return receivers;
	}
	std::vector<rtc::scoped_refptr<webrtc::RtpReceiverInterface> > receivers_ = m_peer_connection->GetReceivers();
	for (std::vector<rtc::scoped_refptr<webrtc::RtpReceiverInterface> >::iterator it = receivers_.begin(); it < receivers_.end(); ++it) {
		receivers.push_back(std::make_shared<ExRTCRtpReceiver>(*it));
	}
	return receivers;
}

bool ExRTCPeerConnection::getStats(std::shared_ptr<ExMediaStreamTrack> selector /*= nullptr*/, FunctionCallbackStatsReport successCallback /*= nullptr*/, FunctionCallbackRTCError failureCallback /*= nullptr*/)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return false;
	}
	
	bool ret = m_peer_connection->GetStats(
		DummyStatsObserver::Create(successCallback, failureCallback),
		selector.get() ? static_cast<ExMediaStreamTrackBase*>(selector.get())->_track() : nullptr,
		webrtc::PeerConnectionInterface::kStatsOutputLevelStandard
	);
	if (!ret && failureCallback) {
		failureCallback(std::make_shared<ExRTCError>(RTC_OperationError));
	}
	
	return true; // do not break ATL function call chain
}

std::shared_ptr<ExRTCDataChannel> ExRTCPeerConnection::createDataChannel(const char* label/*[TreatNullAs=EmptyString]*/ /*= NULL*/, std::shared_ptr<RTCDataChannelInit> dataChannelDict /*= nullptr*/)
{
	if (!isValid()) {
		RTC_DEBUG_ERROR("Not valid");
		return nullptr;
	}
	std::string label_(label ? label : "");
	webrtc::DataChannelInit dataChannelDict_;
	if (dataChannelDict) {
		dataChannelDict_.ordered = dataChannelDict->ordered;
		dataChannelDict_.maxRetransmitTime = dataChannelDict->maxPacketLifeTime; // TODO(dmi): Is this correct?
		dataChannelDict_.maxRetransmits = dataChannelDict->maxRetransmits;
		dataChannelDict_.protocol = dataChannelDict->protocol;
		dataChannelDict_.negotiated = dataChannelDict->negotiated;
		dataChannelDict_.id = dataChannelDict->id;
	}
	return std::make_shared<ExRTCDataChannel>(m_peer_connection->CreateDataChannel(label_, &dataChannelDict_));
}

void ExRTCPeerConnection::OnSignalingChange(webrtc::PeerConnectionInterface::SignalingState new_state) /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_onsignalingstatechange) {
		m_callback_onsignalingstatechange();
	}
}

void ExRTCPeerConnection::OnAddStream(rtc::scoped_refptr<webrtc::MediaStreamInterface> stream) /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_onaddstream) {
		m_callback_onaddstream(std::make_shared<ExMediaStreamEvent>(std::make_shared<ExMediaStream>(stream)));
	}
}

void ExRTCPeerConnection::OnRemoveStream(rtc::scoped_refptr<webrtc::MediaStreamInterface> stream) /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_onremovestream) {
		m_callback_onremovestream(std::make_shared<ExMediaStreamEvent>(std::make_shared<ExMediaStream>(stream)));
	}
}

void ExRTCPeerConnection::OnDataChannel(rtc::scoped_refptr<webrtc::DataChannelInterface> data_channel) /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_ondatachannel) {
		m_callback_ondatachannel(std::make_shared<ExRTCDataChannelEvent>(std::make_shared<ExRTCDataChannel>(data_channel)));
	}
}

void ExRTCPeerConnection::OnRenegotiationNeeded() /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_onnegotiationneeded) {
		m_callback_onnegotiationneeded();
	}
}

void ExRTCPeerConnection::OnIceConnectionChange(webrtc::PeerConnectionInterface::IceConnectionState new_state) /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_oniceconnectionstatechange) {
		m_callback_oniceconnectionstatechange();
	}
}

void ExRTCPeerConnection::OnIceGatheringChange(webrtc::PeerConnectionInterface::IceGatheringState new_state) /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_onicegatheringstatechange) {
		m_callback_onicegatheringstatechange();
	}
}

void ExRTCPeerConnection::OnIceCandidate(const webrtc::IceCandidateInterface* candidate) /*overrides(PeerConnectionObserver)*/
{
	if (m_callback_onicecandidate) {
		webrtc::SdpParseError error;		
		m_callback_onicecandidate(std::make_shared<ExRTCPeerConnectionIceEvent>(ExRTCIceCandidate::CreateIceCandidate(candidate, &error)));
	}
}

void ExRTCPeerConnection::OnIceCandidatesRemoved(const std::vector<cricket::Candidate>& candidates) /*overrides(PeerConnectionObserver)*/
{
	RTC_DEBUG_ERROR("Not implemented");
}

void ExRTCPeerConnection::OnIceConnectionReceivingChange(bool receiving) /*overrides(PeerConnectionObserver)*/
{
	RTC_DEBUG_ERROR("Not implemented");
}

void ExRTCPeerConnection::OnAddTrack(rtc::scoped_refptr<webrtc::RtpReceiverInterface> receiver, const std::vector<rtc::scoped_refptr<webrtc::MediaStreamInterface>>& streams) /*overrides(PeerConnectionObserver)*/
{
	RTC_DEBUG_ERROR("Not implemented");
	if (m_callback_ontrack) {

	}
}
