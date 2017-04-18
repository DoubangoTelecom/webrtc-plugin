// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrack
#include "ExMediaStreamTrack.h"
#include "RTCMediaConstraints.h"
#include "Helper.h"
#include "DoubangoDesktopCapturer.h"

#include "webrtc/media/engine/webrtcvideocapturerfactory.h"
#include "webrtc/modules/video_capture/video_capture_factory.h"
#include "webrtc/media/base/videocapturer.h"
#include "webrtc/media/engine/webrtcvideocapturer.h"
#include "webrtc/media/engine/webrtcvideoframe.h"

//
//	ExMediaStreamTrack
//

ExMediaStreamTrack::ExMediaStreamTrack(ExMediaStreamTrackType eType, MediaStreamTrackInterfacePtr track /*= NULL*/, const ExMediaTrackConstraints* constrains /*= NULL*/)
	: m_eType(eType)
	, m_bRemote(!!track)
	, m_pConstraints(nullptr)
{
	static long __label = 1;

	m_label = Helper::ToString(InterlockedIncrement(&__label));
}

ExMediaStreamTrack::~ExMediaStreamTrack()
{

}

//
//	ExMediaStreamTrackBase
//

ExMediaStreamTrackBase::ExMediaStreamTrackBase(ExMediaStreamTrackType eType, MediaStreamTrackInterfacePtr track /*= NULL*/, const ExMediaTrackConstraints* constrains /*= NULL*/)
	: ExMediaStreamTrack(eType, track, constrains)
{

}

ExMediaStreamTrackBase::~ExMediaStreamTrackBase()
{

}

void ExMediaStreamTrackBase::InitLocalVarsToAvoidDanglingPointerIssue()
{
	if (_track()) {
		m_id = _track()->id();
		m_kind = _track()->kind();
	}
}

// "ExMediaStreamTrack" interface implementation

bool ExMediaStreamTrackBase::enabledSet(bool enabled)
{
	if (_track()) {
		return _track()->set_enabled(enabled);
	}
	return false;
}
bool ExMediaStreamTrackBase::enabled()
{
	if (_track()) {
		return _track()->enabled();
	}
	return false;
}

bool ExMediaStreamTrackBase::readonly()
{
	if (_track()) {
		return false;
	}
	return true;
}

const char* ExMediaStreamTrackBase::readyState()
{
	if (_track()) {
		switch (_track()->state()) {
		case webrtc::MediaStreamTrackInterface::kEnded:
			return kMediaStreamTrackStateEnded;
		case webrtc::MediaStreamTrackInterface::kLive:
			return kMediaStreamTrackStateLive;
		}
	}
	return "unknown";
}

// https://www.w3.org/TR/mediacapture-streams/#widl-MediaStreamTrack-applyConstraints-Promise-void--MediaConstraints-constraints
void ExMediaStreamTrackBase::applyConstraints(const ExMediaTrackConstraints* constrains)
{
	if (_track()) {

	}
}

// http://www.w3.org/TR/mediacapture-streams/#widl-MediaStreamTrack-clone-MediaStreamTrack
std::shared_ptr<ExMediaStreamTrack> ExMediaStreamTrackBase::clone()
{
	if (m_eType == ExMediaStreamTrackType_Video) {
		return std::shared_ptr<ExMediaStreamTrack>(new ExMediaStreamTrackVideo(dynamic_cast<ExMediaStreamTrackVideo*>(this)->track()));
	}
	else if (m_eType == ExMediaStreamTrackType_Audio) {
		return std::shared_ptr<ExMediaStreamTrack>(new ExMediaStreamTrackAudio(dynamic_cast<ExMediaStreamTrackAudio*>(this)->track()));
	}
	return nullptr;
}

void ExMediaStreamTrackBase::stop()
{
	// Overrided in ExMediaStreamTrackVideo
	if (_track()) {
		enabledSet(false);
		_track()->set_enabled(false);

		if (m_eType == ExMediaStreamTrackType_Video) {
			rtc::scoped_refptr<webrtc::VideoTrackSourceInterface> videoSrc = dynamic_cast<ExMediaStreamTrackVideo*>(this)->track() ? dynamic_cast<ExMediaStreamTrackVideo*>(this)->track()->GetSource() : NULL;
			if (videoSrc) {

#if 0
				// stop cricket::VideoCapturer
				videoSrc->Stop();
#endif
			}
		}
		else if (m_eType == ExMediaStreamTrackType_Audio) {
			rtc::scoped_refptr<webrtc::AudioSourceInterface> audioSrc = dynamic_cast<ExMediaStreamTrackAudio*>(this)->track() ? dynamic_cast<ExMediaStreamTrackAudio*>(this)->track()->GetSource() : NULL;
			if (audioSrc) {

			}
		}
	}
}



//
//	ExMediaStreamTrackAudio
//

ExMediaStreamTrackAudio::ExMediaStreamTrackAudio(rtc::scoped_refptr<webrtc::AudioTrackInterface> track /*= NULL*/, const ExMediaTrackConstraints* constrains /*= NULL*/)
	: ExMediaStreamTrackBase(ExMediaStreamTrackType_Audio, track, constrains)
	, m_track(track)
{
	if (!m_track) {
		rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> peer_connection_factory = GetPeerConnectionFactory();
		if (peer_connection_factory) {
			m_label += "_audio_track";
			MediaConstraintSets constrainSets(constrains ? constrains->ideal() : nullptr, constrains ? constrains->exact() : nullptr);
			m_track = peer_connection_factory->CreateAudioTrack(m_label, peer_connection_factory->CreateAudioSource(BuildConstraints(&constrainSets)));
		}
	}
	InitLocalVarsToAvoidDanglingPointerIssue();
}

ExMediaStreamTrackAudio::~ExMediaStreamTrackAudio()
{
	m_track = NULL;
	RTC_DEBUG_INFO("ExMediaStreamTrackAudio::~ExMediaStreamTrackAudio");
}

// "ExMediaStreamTrack" interface implementation
bool ExMediaStreamTrackAudio::muted()
{
	// TODO: no "muted()" function in "AudioTrackInterface"
	if (m_track) {
		return !enabled();
	}
	return true;
}

int ExMediaStreamTrackAudio::micLevel()
{
	return ExMediaStreamTrack::micLevel(); // default value from base class
}

//
//	ExMediaStreamTrackVideo
//
static cricket::VideoCapturer* OpenVideoCaptureDevice(const std::string& deviceId, const std::string& chromeMediaSource, const std::string& chromeMediaSourceId);

std::map<std::string/*label*/, cricket::VideoCapturer* > ExMediaStreamTrackVideo::s_capturerWeakRef;

ExMediaStreamTrackVideo::ExMediaStreamTrackVideo(rtc::scoped_refptr<webrtc::VideoTrackInterface> track /*= NULL*/, const ExMediaTrackConstraints* constrains /*= NULL*/)
	: ExMediaStreamTrackBase(ExMediaStreamTrackType_Video, track, constrains)
	, m_track(track)
	, m_workerThread(GetWorkerThread())
{
	if (!m_track) {
		m_workerThread->Invoke<void>(RTC_FROM_HERE, rtc::Bind(&ExMediaStreamTrackVideo::StartOnWorkerThread, this, constrains));
	}
	InitLocalVarsToAvoidDanglingPointerIssue();
}


ExMediaStreamTrackVideo:: ~ExMediaStreamTrackVideo()
{
	if (m_track) {
		m_track->AddRef();
		if (m_track->Release() == 1) {
			s_capturerWeakRef.erase(m_track->id());
		}
		m_track = nullptr;
	}

	RTC_DEBUG_INFO("ExMediaStreamTrackVideo::~ExMediaStreamTrackVideo");
}

void ExMediaStreamTrackVideo::stop() // Overrides ExMediaStreamTrackBase::stop()
{
	m_workerThread->Invoke<void>(RTC_FROM_HERE, rtc::Bind(&ExMediaStreamTrackVideo::StopOnWorkerThread, this));
}

void ExMediaStreamTrackVideo::StartOnWorkerThread(const ExMediaTrackConstraints* constrains)
{
	rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> peer_connection_factory = GetPeerConnectionFactory();
	if (peer_connection_factory) {
		MediaConstraintSets constrainSets(constrains ? constrains->ideal() : nullptr, constrains ? constrains->exact() : nullptr);
		rtc::scoped_refptr<RTCMediaConstraints> rtcConstrains = BuildConstraints(&constrainSets);
		std::string deviceId;
		std::string chromeMediaSource; // 'desktop' or 'screen'
		std::string chromeMediaSourceId; // screenId when "chromeMediaSource" is equal 'screen'
		if (rtcConstrains) {
			if (!rtcConstrains->GetMandatory().FindFirst("deviceId", &deviceId)) {
				rtcConstrains->GetOptional().FindFirst("deviceId", &deviceId);
			}
			if (!rtcConstrains->GetMandatory().FindFirst("chromeMediaSource", &chromeMediaSource)) {
				rtcConstrains->GetOptional().FindFirst("chromeMediaSource", &chromeMediaSource);
			}
			if (!rtcConstrains->GetMandatory().FindFirst("chromeMediaSourceId", &chromeMediaSourceId)) {
				rtcConstrains->GetOptional().FindFirst("chromeMediaSourceId", &chromeMediaSourceId);
			}
		}

		// We must use supported constraints only, otherwise, NewFormatWithConstraints function (in videocapturertracksource.cc)
		// will filter all formats
		static const std::string kKnownConstraints[] = {
			webrtc::MediaConstraintsInterface::kMinWidth,
			webrtc::MediaConstraintsInterface::kMaxWidth,
			webrtc::MediaConstraintsInterface::kMinHeight,
			webrtc::MediaConstraintsInterface::kMaxHeight,
			webrtc::MediaConstraintsInterface::kMinFrameRate,
			webrtc::MediaConstraintsInterface::kMaxFrameRate,
			webrtc::MediaConstraintsInterface::kMinAspectRatio,
			webrtc::MediaConstraintsInterface::kMaxAspectRatio,
			webrtc::MediaConstraintsInterface::kNoiseReduction
		};
		static std::vector<std::string> vecKnownConstraints;
		if (vecKnownConstraints.empty()) {
			vecKnownConstraints.assign(kKnownConstraints, kKnownConstraints + (sizeof(kKnownConstraints) / sizeof(kKnownConstraints[0])));
		}
		rtcConstrains->RemoveIfNotInList(vecKnownConstraints);

		// GetVideoCaptureDevice returns 'std::unique_ptr' which must not be used as local variable (crash when ExmediaStream)
		m_label += "_video_track";
		cricket::VideoCapturer* capturerWeakRef = OpenVideoCaptureDevice(deviceId, chromeMediaSource, chromeMediaSourceId);
		if (capturerWeakRef) {
			m_track = peer_connection_factory->CreateVideoTrack(m_label, peer_connection_factory->CreateVideoSource(capturerWeakRef, rtcConstrains));
			s_capturerWeakRef[m_track->id()] = capturerWeakRef;
		}
	}
}

void ExMediaStreamTrackVideo::StopOnWorkerThread()
{
	if (m_track) {
		std::map<std::string/*label*/, cricket::VideoCapturer* >::iterator capturerWeakRef = s_capturerWeakRef.find(m_track->id());
		if (capturerWeakRef != s_capturerWeakRef.end() && capturerWeakRef->second) {
			capturerWeakRef->second->Stop();
		}
	}
}

static cricket::VideoCapturer* OpenVideoCaptureDevice(const std::string& deviceId, const std::string& chromeMediaSource, const std::string& chromeMediaSourceId)
{
	if (chromeMediaSource.compare("screen") == 0 || chromeMediaSource.compare("desktop") == 0) {
		return DoubangoDesktopCapturerFactory::Create();
	}
	else {
		std::unique_ptr<webrtc::VideoCaptureModule::DeviceInfo> info(
			webrtc::VideoCaptureFactory::CreateDeviceInfo());
		if (!info) {
			return nullptr;
		}

		std::vector<cricket::Device> devices;
		int num_devices = info->NumberOfDevices();
		for (int i = 0; i < num_devices; ++i) {
			const uint32_t kSize = 256;
			char name[kSize] = { 0 };
			char id[kSize] = { 0 };
			if (info->GetDeviceName(i, name, kSize, id, kSize) != -1) {
				devices.push_back(cricket::Device(name, id));
			}
		}

	#if 0
		cricket::WebRtcVideoDeviceCapturerFactory factory;
	#endif
		cricket::WebRtcVideoCapturer* capturer = nullptr;
		if (!deviceId.empty()) {
			for (const auto& device : devices) {
				if (device.id.compare(deviceId) == 0) {
	#if 0
					capturer = factory.Create(device);
	#else
					capturer = new cricket::WebRtcVideoCapturer();
					if (capturer) {
						if (!(capturer->Init(device))) {
							delete capturer;
							capturer = nullptr;
						}
					}
	#endif
					if (capturer) {
						break;
					}
				}
			}
		}
		if (!capturer) {
			for (const auto& device : devices) {
	#if 0
				capturer = factory.Create(cricket::Device(name, 0));
	#else
				capturer = new cricket::WebRtcVideoCapturer();
				if (capturer) {
					if (!(capturer->Init(device))) {
						delete capturer;
						capturer = nullptr;
					}
				}
	#endif
				if (capturer) {
					break;
				}
			}
		}
		return capturer;
	}
}

