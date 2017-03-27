#pragma once

#include "Config.h"
#include "Debug.h"

#include "webrtc/api/peerconnectioninterface.h"
#include "webrtc/api/mediaconstraintsinterface.h"
#include "webrtc/api/mediastreaminterface.h"
#include "webrtc/base/thread.h"

class Buffer;
class ExErrorMessage;
class ExMediaStream;
class ExMediaStreamConstraints;
class RTCMediaConstraints;

typedef void* VoidPtr;
typedef VoidPtr DtmfSenderInterfacePtr,
VideoTrackInterfacePtr,
MediaStreamInterfacePtr,
MediaStreamTrackInterfacePtr,
VideoRendererPtr,
DataChannelInterfacePtr;

#define RTC_MAX_ARGS_PARAMS 10

// Errors
#define RTC_ConstraintNotSatisfiedError	"ConstraintNotSatisfiedError"
#define RTC_PermissionDeniedError		"PermissionDeniedError"

#define RTC_SAFE_RELEASE(ppObj) { if ((ppObj) && *(ppObj)) { (*(ppObj))->Release(); *(ppObj) = NULL; } }
#define RTC_SAFE_RELEASE_OBJECT(ppObj) { if ((ppObj) && *(ppObj)) { (*(ppObj))->ReleaseObject(); *(ppObj) = NULL; } }
#define RTC_SAFE_FREE(ppObj) { if ((ppObj) && *(ppObj)) { free(*(ppObj)); *(ppObj) = NULL; } }

// In CHECK_HR(x) When (x) is a function it will be executed twice when used in "WE_DEBUG_ERROR(x)" and "If(x)"
#define RTC_CHECK_HR_BAIL(x) { HRESULT __hr__ = (x); if (FAILED(__hr__)) { RTC_DEBUG_ERROR("Operation Failed (%08x)", __hr__); goto bail; } }
#define RTC_CHECK_HR_RETURN(x) { HRESULT __hr__ = (x); if (FAILED(__hr__)) { RTC_DEBUG_ERROR("Operation Failed (%08x)", __hr__); return __hr__; } }

enum TrackTypeFlags {
	TrackTypeFlagsNone = 0x00,
	TrackTypeFlagsAudio = (0x01 << 0),
	TrackTypeFlagsVideo = (0x01 << 1),
	TrackTypeFlagsAudioVideo = TrackTypeFlagsAudio | TrackTypeFlagsVideo,
	TrackTypeFlagsAll = 0xFF
};


struct RTCIceServer {
public:
	std::string uri;
	std::string username;
	std::string password;
	RTCIceServer(std::string _uri, std::string _username = std::string(""), std::string _password = std::string("")) {
		uri = _uri, username = _username, password = _password;
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

// http://www.w3.org/TR/webrtc/#idl-def-RTCDTMFToneChangeEvent
struct RTCDTMFToneChangeEvent {
public:
	std::string tone; // readonly attribute DOMString tone;
	RTCDTMFToneChangeEvent(std::string _tone = "") {
		tone = _tone;
	}
};

// http://www.w3.org/TR/webrtc/#idl-def-RTCDataChannelEvent
#if 0
struct RTCDataChannelEvent {
public:
	std::shared_ptr<RTCDataChannel> channel; // readonly    attribute RTCDataChannel channel;
	RTCDataChannelEvent(std::shared_ptr<RTCDataChannel>& _channel) {
		channel = _channel;
	}
};
#endif

// http://www.w3.org/TR/webrtc/#event-datachannel-message
struct MessageEvent {
public:
	std::shared_ptr<Buffer>data;
	bool binary = false;
	MessageEvent() {
	}
};


// http://www.w3.org/TR/webrtc/#idl-def-RTCPeerConnectionIceEvent
#if 0
struct RTCPeerConnectionIceEvent {
public:
	std::shared_ptr<RTCIceCandidate> candidate;
	RTCPeerConnectionIceEvent(std::shared_ptr<RTCIceCandidate> _candidate = nullptr) {
		candidate = _candidate;
	}
	~RTCPeerConnectionIceEvent() {
		candidate = nullptr;
	}
};
#endif

// http://www.w3.org/TR/webrtc/#idl-def-MediaStreamEvent
struct MediaStreamEvent {
public:
	std::shared_ptr<ExMediaStream> stream;
	MediaStreamEvent(std::shared_ptr<ExMediaStream> _stream = nullptr) {
		stream = _stream;
	}
	~MediaStreamEvent() {
		stream = nullptr;
	}
};

// http://www.w3.org/TR/mediacapture-streams/#idl-def-NavigatorUserMediaSuccessCallback
typedef std::function<void(std::shared_ptr<ExMediaStream> stream)> NavigatorUserMediaSuccessCallback;

// http://www.w3.org/TR/mediacapture-streams/#idl-def-NavigatorUserMediaErrorCallback
typedef std::function<void(std::shared_ptr<ExErrorMessage> e)> NavigatorUserMediaErrorCallback;

// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrackState
static const char kMediaStreamTrackStateLive[] = "live";
static const char kMediaStreamTrackStateEnded[] = "ended";

// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaTrackConstraintSet
typedef std::pair< std::string, std::string> MediaTrackConstraint;
typedef std::map<std::string, std::string> MediaTrackConstraintSet;
struct MediaTrackConstraintSets {
public:
	std::shared_ptr<MediaTrackConstraintSet> ideal;
	std::shared_ptr<MediaTrackConstraintSet> exact;
	MediaTrackConstraintSets(std::shared_ptr<MediaTrackConstraintSet> _ideal = nullptr, std::shared_ptr<MediaTrackConstraintSet> _exact = nullptr) {
		ideal = _ideal;
		exact = _exact;
	}
};

typedef std::function<void()> FunctionCallbackVoid;
typedef std::function<void(std::shared_ptr<std::string> string)> FunctionCallbackString;


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
extern rtc::Thread* GetWorkerThread();
extern void TakeFakePeerConnectionFactory();
extern void ReleaseFakePeerConnectionFactory();
extern rtc::scoped_refptr<RTCMediaConstraints> BuildConstraints(const MediaTrackConstraintSets* constraints = NULL);
extern webrtc::MediaStreamInterface* BuildMediaStream(const ExMediaStream* stream);
extern void getUserMedia(const ExMediaStreamConstraints* constraints = NULL, NavigatorUserMediaSuccessCallback successCallback = nullptr, NavigatorUserMediaErrorCallback errorCallback = nullptr);
