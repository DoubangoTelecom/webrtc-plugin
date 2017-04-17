#pragma once

#include "Config.h"
#include "Debug.h"
#include "CustomAudioDeviceModule.h"

#include "webrtc/api/peerconnectioninterface.h"
#include "webrtc/api/mediaconstraintsinterface.h"
#include "webrtc/api/mediastreaminterface.h"
#include "webrtc/base/thread.h"

class Buffer;
class ExErrorMessage;
class ExRTCError;
class ExMediaStream;
class ExMediaStreamConstraints;
class RTCMediaConstraints;
class ExRTCSessionDescription;
class ExRTCIceCandidate;
class ExRTCPeerConnectionIceEvent;
class ExMediaStreamEvent;
class ExRTCDataChannelEvent;

typedef void* VoidPtr;
typedef VoidPtr DtmfSenderInterfacePtr,
VideoTrackInterfacePtr,
MediaStreamInterfacePtr,
MediaStreamTrackInterfacePtr,
VideoRendererPtr,
DataChannelInterfacePtr;

#define RTC_MAX_ARGS_PARAMS 10

// Errors
#define RTC_ConstraintNotSatisfiedError		"ConstraintNotSatisfiedError"
#define RTC_PermissionDeniedError			"PermissionDeniedError"
#define RTC_OperationError					"OperationError"

#define RTC_SAFE_RELEASE(ppObj) { if ((ppObj) && *(ppObj)) { (*(ppObj))->Release(); *(ppObj) = NULL; } }
#define RTC_SAFE_RELEASE_OBJECT(ppObj) { if ((ppObj) && *(ppObj)) { (*(ppObj))->ReleaseObject(); *(ppObj) = NULL; } }
#define RTC_SAFE_FREE(ppObj) { if ((ppObj) && *(ppObj)) { free(*(ppObj)); *(ppObj) = NULL; } }

// In CHECK_HR(x) When (x) is a function it will be executed twice when used in "WE_DEBUG_ERROR(x)" and "If(x)"
#define RTC_CHECK_HR_BAIL(x) { HRESULT __hr__ = (x); if (FAILED(__hr__)) { RTC_DEBUG_ERROR("Operation Failed (%08x)", __hr__); goto bail; } }
#define RTC_CHECK_HR_RETURN(x) { HRESULT __hr__ = (x); if (FAILED(__hr__)) { RTC_DEBUG_ERROR("Operation Failed (%08x)", __hr__); return __hr__; } }
#define RTC_CHECK_HR_NOP(x) { HRESULT __hr__ = (x); if (FAILED(__hr__)) { RTC_DEBUG_ERROR("Operation Failed (%08x)", __hr__); } }

enum TrackTypeFlags {
	TrackTypeFlagsNone = 0x00,
	TrackTypeFlagsAudio = (0x01 << 0),
	TrackTypeFlagsVideo = (0x01 << 1),
	TrackTypeFlagsAudioVideo = TrackTypeFlagsAudio | TrackTypeFlagsVideo,
	TrackTypeFlagsAll = 0xFF
};


struct RTCIceServer {
public:
	std::vector<std::string> urls;
	std::string username;
	std::string password;
	RTCIceServer(std::vector<std::string> _urls, std::string _username = std::string(""), std::string _password = std::string("")) {
		urls = _urls, username = _username, password = _password;
	}
};

struct RTCConfiguration {
public:
	std::vector<RTCIceServer>iceServers;
	RTCConfiguration() {
	}
	~RTCConfiguration() {
		iceServers.clear();
	}
};

// http://www.w3.org/TR/webrtc/#event-datachannel-message
struct MessageEvent {
public:
	std::shared_ptr<Buffer>data;
	bool binary = false;
	MessageEvent() {
	}
};


// http://www.w3.org/TR/mediacapture-streams/#idl-def-NavigatorUserMediaSuccessCallback
typedef std::function<void(std::shared_ptr<ExMediaStream> stream)> NavigatorUserMediaSuccessCallback;

// http://www.w3.org/TR/mediacapture-streams/#idl-def-NavigatorUserMediaErrorCallback
typedef std::function<void(std::shared_ptr<ExErrorMessage> e)> NavigatorUserMediaErrorCallback;

typedef std::function<void()> FunctionCallbackVoid;
typedef std::function<void(std::shared_ptr<std::string> string)> FunctionCallbackString;
typedef std::function<void(std::shared_ptr<ExErrorMessage> e)> FunctionCallbackError; // DomError
typedef std::function<void(std::shared_ptr<ExRTCError> e)> FunctionCallbackRTCError; // RTCError
typedef std::function<void(std::shared_ptr<ExRTCSessionDescription> e)> FunctionCallbackSessionDescription;
typedef std::function<void(std::shared_ptr<ExRTCPeerConnectionIceEvent> e)> FunctionCallbackIceCandidate;
typedef std::function<void(std::shared_ptr<ExMediaStreamEvent> e)> FunctionCallbackStream;
typedef std::function<void(std::shared_ptr<ExRTCDataChannelEvent> e)> FunctionCallbackDataChannel;

static const std::string kStringEmpty = "";

// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrackState
static const char kMediaStreamTrackStateLive[] = "live";
static const char kMediaStreamTrackStateEnded[] = "ended";

// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaDeviceKind
static const char kMediaDeviceKindAudioInput[] = "audioinput";
static const char kMediaDeviceKindAudioOutput[] = "audiooutput";
static const char kMediaDeviceKindVideoInput[] = "videoinput";

// https://www.w3.org/TR/webrtc/#dom-rtcsdptype
static const char kRTCSdpTypeOffer[] = "offer";
static const char kRTCSdpTypePranswer[] = "pranswer";
static const char kRTCSdpTypeAnswer[] = "answer";
static const char kRTCSdpTypeRollback[] = "rollback";

// https://www.w3.org/TR/webrtc/#dom-rtcsignalingstate
static const char kSignalingStateStable[] = "stable";
static const char kSignalingStateHaveLocalOffer[] = "have-local-offer";
static const char kSignalingStateHaveRemoteOffer[] = "have-remote-offer";
static const char kSignalingStateHaveLocalPrAnswer[] = "have-local-pranswer";
static const char kSignalingStateHaveRemotePrAnswer[] = "have-remote-pranswer";
static const char kSignalingStateClosed[] = "closed";

// https://www.w3.org/TR/webrtc/#dom-rtcicegatheringstate
static const char kRTCIceGatheringStateNew[] = "new";
static const char kRTCIceGatheringStateGathering[] = "gathering";
static const char kRTCIceGatheringStateComplete[] = "complete";

// https://www.w3.org/TR/webrtc/#dom-rtciceconnectionstate
static const char kRTCIceConnectionStateNew[] = "new";
static const char kRTCIceConnectionStateChecking[] = "checking";
static const char kRTCIceConnectionStateConnected[] = "connected";
static const char kRTCIceConnectionStateCompleted[] = "completed";
static const char kRTCIceConnectionStateFailed[] = "failed";
static const char kRTCIceConnectionStateDisconnected[] = "disconnected";
static const char kRTCIceConnectionStateClosed[] = "closed";

// https://www.w3.org/TR/webrtc/#dom-rtcpeerconnectionstate
static const char kRTCPeerConnectionStateNew[] = "new";
static const char kRTCPeerConnectionStateConnecting[] = "connecting";
static const char kRTCPeerConnectionStateConnected[] = "connected";
static const char kRTCPeerConnectionStateDisconnected[] = "disconnected";
static const char kRTCPeerConnectionStateFailed[] = "failed";
static const char kRTCPeerConnectionStateClosed[] = "closed";

// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaConstraintSet
typedef std::pair< std::string, std::string> MediaConstraint;
typedef std::map<std::string, std::string> MediaConstraintSet;
struct MediaConstraintSets {
public:
	std::shared_ptr<MediaConstraintSet> ideal;
	std::shared_ptr<MediaConstraintSet> exact;
	MediaConstraintSets(std::shared_ptr<MediaConstraintSet> _ideal = nullptr, std::shared_ptr<MediaConstraintSet> _exact = nullptr) {
		ideal = _ideal;
		exact = _exact;
	}
};

template <typename T>
struct Sequence {
	std::vector<std::shared_ptr<T> > values;
	Sequence() {

	}
	void Clear() {
		values.clear();
	}
	void Add(std::shared_ptr<T> v) {
		values.push_back(v);
	}
	void AddSeq(Sequence<T>* seq) {
		if (seq) {
			for (size_t i = 0; i < seq->values.size(); ++i) {
				values.push_back(seq->values[i]);
			}
		}
	}
	~Sequence() {
		Clear();
	}
};

template <typename T>
class AutoLock {
public:
	explicit AutoLock(T* obj) : obj_(obj) { obj_->Enter(); }
	virtual ~AutoLock() { obj_->Leave(); }
protected:
	T* obj_;
};

struct BrowserObject {
public:
	virtual struct BrowserObject* RetainObject() = 0;
	virtual struct BrowserObject* ReleaseObject() = 0;
};

#define RTC_DECLARE_BROWSER_OBJECT_RETAIN_RELEASE() \
	virtual BrowserObject* RetainObject() override { \
		if (AddRef()) return dynamic_cast<BrowserObject*>(this); \
		return NULL; \
	} \
	virtual BrowserObject* ReleaseObject() override { \
		if (Release()) return dynamic_cast<BrowserObject*>(this); \
		return NULL; \
	}

#define RTC_DECLARE_BROWSER_OBJECT_RETAIN_RELEASE_INLINE() \
	private: \
	volatile long m_nRefCount = 1; \
	public: \
	struct BrowserObject* RetainObject() { \
		assert(m_nRefCount > 0); \
		InterlockedIncrement(&m_nRefCount); return this; \
	} \
struct BrowserObject* ReleaseObject() { \
	assert(m_nRefCount > 0); \
    InterlockedDecrement(&m_nRefCount); \
	if (m_nRefCount) return this; \
	delete this; return NULL; \
}

struct BrowserCallback : public BrowserObject {
public:
	unsigned msgid;
	BrowserCallback(unsigned _msgid) {
		msgid = _msgid;
	}
	virtual unsigned GetMsgId() { return msgid; }
	virtual bool Invoke() = 0;
};

extern rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> GetPeerConnectionFactory();
extern rtc::scoped_refptr<webrtc::AudioDeviceModule> GetAudioDeviceModule();
extern rtc::Thread* GetWorkerThread();
extern void TakeFakePeerConnectionFactory();
extern void ReleaseFakePeerConnectionFactory();
extern rtc::scoped_refptr<RTCMediaConstraints> BuildConstraints(const MediaConstraintSets* constraints = NULL);
extern webrtc::MediaStreamInterface* BuildMediaStream(const ExMediaStream* stream);
extern void getUserMedia(const ExMediaStreamConstraints* constraints = NULL, NavigatorUserMediaSuccessCallback successCallback = nullptr, NavigatorUserMediaErrorCallback errorCallback = nullptr);
