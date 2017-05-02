// https://www.w3.org/TR/webrtc/#rtcpeerconnection-interface
#pragma once
#include "config.h"
#include "Common.h"
#include "ExMediaStream.h"
#include "ExRTCSessionDescription.h"
#include "ExRTCIceCandidate.h"
#include "ExRTCRtpSender.h"
#include "ExRTCRtpReceiver.h"
#include "ExMediaStreamTrack.h"

#include "webrtc/api/mediastreaminterface.h"
#include "webrtc/api/peerconnectioninterface.h"

class ExRTCPeerConnection : public webrtc::PeerConnectionObserver
{
public:
	ExRTCPeerConnection(const RTCConfiguration* rtcConfiguration = nullptr, const MediaConstraintSets* mediaConstraints = nullptr);
	virtual ~ExRTCPeerConnection();

	_inline bool isValid()const { return !!m_peer_connection.get(); }
	_inline rtc::scoped_refptr<webrtc::PeerConnectionInterface> peerconnection() { return m_peer_connection; }

	_inline void onnegotiationneededSet(FunctionCallbackVoid callback) { m_callback_onnegotiationneeded = callback;	}
	_inline void onicecandidateSet(FunctionCallbackIceCandidate callback) { m_callback_onicecandidate = callback; }
	_inline void onicecandidateerrorSet(FunctionCallbackVoid callback) { m_callback_onicecandidateerror = callback; }
	_inline void onsignalingstatechangeSet(FunctionCallbackVoid callback) { m_callback_onsignalingstatechange = callback; }
	_inline void oniceconnectionstatechangeSet(FunctionCallbackVoid callback) { m_callback_oniceconnectionstatechange = callback; }
	_inline void onicegatheringstatechangeSet(FunctionCallbackVoid callback) { m_callback_onicegatheringstatechange = callback; }
	_inline void onconnectionstatechangeSet(FunctionCallbackVoid callback) { m_callback_onconnectionstatechange = callback; }
	_inline void onfingerprintfailureSet(FunctionCallbackVoid callback) { m_callback_onfingerprintfailure = callback; }
	_inline void onaddstreamSet(FunctionCallbackStream callback) { m_callback_onaddstream = callback; }
	_inline void onremovestreamSet(FunctionCallbackStream callback) { m_callback_onremovestream = callback; }
	_inline void ondatachannelSet(FunctionCallbackDataChannel callback) { m_callback_ondatachannel = callback; }
	_inline void ontrackSet(FunctionCallbackTrack callback) { m_callback_ontrack = callback; }
	bool createOffer(FunctionCallbackSessionDescription successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr, std::shared_ptr<webrtc::PeerConnectionInterface::RTCOfferAnswerOptions> options = nullptr);
	bool createAnswer(FunctionCallbackSessionDescription successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr, std::shared_ptr<webrtc::PeerConnectionInterface::RTCOfferAnswerOptions> options = nullptr);
	bool setLocalDescription(std::shared_ptr<ExRTCSessionDescription> sdp, FunctionCallbackVoid successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr);
	std::shared_ptr<ExRTCSessionDescription> localDescription();
	std::shared_ptr<ExRTCSessionDescription> currentLocalDescription();
	std::shared_ptr<ExRTCSessionDescription> pendingLocalDescription();
	bool setRemoteDescription(std::shared_ptr<ExRTCSessionDescription> sdp, FunctionCallbackVoid successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr);
	std::shared_ptr<ExRTCSessionDescription> remoteDescription();
	std::shared_ptr<ExRTCSessionDescription> currentRemoteDescription();
	std::shared_ptr<ExRTCSessionDescription> pendingRemoteDescription();
	bool addIceCandidate(std::shared_ptr<ExRTCIceCandidate> iceCandidate);
	const std::string signalingState() const;
	const std::string iceGatheringState() const;
	const std::string iceConnectionState() const;
	const std::string connectionState() const;
	bool canTrickleIceCandidates() const;
	void* getConfiguration() const;
	bool setConfiguration();
	bool close();
	bool addStream(std::shared_ptr<ExMediaStream> mediaStream);
	bool removeStream(std::shared_ptr<ExMediaStream> mediaStream);
	std::vector<std::shared_ptr<ExRTCRtpSender > > getSenders();
	std::vector<std::shared_ptr<ExRTCRtpReceiver > > getReceivers();
	bool getStats(std::shared_ptr<ExMediaStreamTrack> selector = nullptr, FunctionCallbackStatsReport successCallback = nullptr, FunctionCallbackRTCError failureCallback = nullptr);
	

protected:
	virtual void OnSignalingChange(webrtc::PeerConnectionInterface::SignalingState new_state) override;
	virtual void OnAddStream(rtc::scoped_refptr<webrtc::MediaStreamInterface> stream) override;
	virtual void OnRemoveStream(rtc::scoped_refptr<webrtc::MediaStreamInterface> stream) override;
	virtual void OnDataChannel(rtc::scoped_refptr<webrtc::DataChannelInterface> data_channel) override;
	virtual void OnRenegotiationNeeded() override;
	virtual void OnIceConnectionChange(webrtc::PeerConnectionInterface::IceConnectionState new_state) override;
	virtual void OnIceGatheringChange(webrtc::PeerConnectionInterface::IceGatheringState new_state) override;
	virtual void OnIceCandidate(const webrtc::IceCandidateInterface* candidate) override;
	virtual void OnIceCandidatesRemoved(const std::vector<cricket::Candidate>& candidates) override;
	virtual void OnIceConnectionReceivingChange(bool receiving) override;
	virtual void OnAddTrack(rtc::scoped_refptr<webrtc::RtpReceiverInterface> receiver, const std::vector<rtc::scoped_refptr<webrtc::MediaStreamInterface>>& streams) override;

private:
	rtc::scoped_refptr<webrtc::PeerConnectionInterface> m_peer_connection;
	rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> m_peer_connection_factory;

	FunctionCallbackVoid m_callback_onnegotiationneeded;
	FunctionCallbackIceCandidate m_callback_onicecandidate;
	FunctionCallbackVoid m_callback_onicecandidateerror;
	FunctionCallbackVoid m_callback_onsignalingstatechange;
	FunctionCallbackVoid m_callback_oniceconnectionstatechange;
	FunctionCallbackVoid m_callback_onicegatheringstatechange;
	FunctionCallbackVoid m_callback_onconnectionstatechange;
	FunctionCallbackVoid m_callback_onfingerprintfailure;
	FunctionCallbackStream m_callback_onaddstream;
	FunctionCallbackStream m_callback_onremovestream;
	FunctionCallbackDataChannel m_callback_ondatachannel;
	FunctionCallbackTrack m_callback_ontrack;
};
