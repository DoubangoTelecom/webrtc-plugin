// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrack
#include "ExMediaStreamTrack.h"
#include "RTCMediaConstraints.h"
#include "Helper.h"

#include "webrtc/media/engine/webrtcvideocapturerfactory.h"
#include "webrtc/modules/video_capture/video_capture_factory.h"

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

// https://www.w3.org/TR/mediacapture-streams/#widl-MediaStreamTrack-applyConstraints-Promise-void--MediaTrackConstraints-constraints
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
			MediaTrackConstraintSets constrainSets(constrains ? constrains->ideal() : nullptr, constrains ? constrains->exact() : nullptr);
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
static std::unique_ptr<cricket::VideoCapturer> OpenVideoCaptureDevice(std::string _deviceId, std::string _windowId = "");

ExMediaStreamTrackVideo::ExMediaStreamTrackVideo(rtc::scoped_refptr<webrtc::VideoTrackInterface> track /*= NULL*/, const ExMediaTrackConstraints* constrains /*= NULL*/)
	: ExMediaStreamTrackBase(ExMediaStreamTrackType_Video, track, constrains)
	, m_track(track)
{
	if (!m_track) {
		rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> peer_connection_factory = GetPeerConnectionFactory();
		if (peer_connection_factory) {
			MediaTrackConstraintSets constrainSets(constrains ? constrains->ideal() : nullptr, constrains ? constrains->exact() : nullptr);
			rtc::scoped_refptr<RTCMediaConstraints> rtcConstrains = BuildConstraints(&constrainSets);
			std::string sourceId;
			std::string windowId; // for screenCast (when sourceId is equal to kDoubangoScreenshareSourceId)
			if (rtcConstrains) {
				if (!rtcConstrains->GetMandatory().FindFirst("sourceId", &sourceId)) {
					rtcConstrains->GetOptional().FindFirst("sourceId", &sourceId);
				}
				if (!rtcConstrains->GetMandatory().FindFirst("windowId", &windowId)) {
					rtcConstrains->GetOptional().FindFirst("windowId", &windowId);
				}
			}
			// OpenVideoCaptureDevice returns 'std::unique_ptr' which must not be used as local variable (crash when ExmediaStream)
			m_label += "_video_track";
			m_track = peer_connection_factory->CreateVideoTrack(m_label, peer_connection_factory->CreateVideoSource(OpenVideoCaptureDevice(sourceId, windowId), rtcConstrains));
		}
	}
	InitLocalVarsToAvoidDanglingPointerIssue();
}


ExMediaStreamTrackVideo:: ~ExMediaStreamTrackVideo()
{
	m_track = NULL;

	RTC_DEBUG_INFO("ExMediaStreamTrackVideo::~ExMediaStreamTrackVideo");
}

static std::unique_ptr<cricket::VideoCapturer> OpenVideoCaptureDevice(std::string _deviceId, std::string _windowId /*= ""*/)
{
	std::unique_ptr<webrtc::VideoCaptureModule::DeviceInfo> info(
		webrtc::VideoCaptureFactory::CreateDeviceInfo());
	if (!info) {
		return nullptr;
	}

	std::vector<std::string> device_names;
	int num_devices = info->NumberOfDevices();
	for (int i = 0; i < num_devices; ++i) {
		const uint32_t kSize = 256;
		char name[kSize] = { 0 };
		char id[kSize] = { 0 };
		if (info->GetDeviceName(i, name, kSize, id, kSize) != -1) {
			device_names.push_back(name);
		}
	}

	cricket::WebRtcVideoDeviceCapturerFactory factory;
	std::unique_ptr<cricket::VideoCapturer> capturer;
	if (!_deviceId.empty()) {
		for (const auto& name : device_names) {
			if (name.compare(_deviceId) == 0) {
				capturer = factory.Create(cricket::Device(name, 0));
				if (capturer) {
					break;
				}
			}
		}
	}
	if (!capturer) {
		for (const auto& name : device_names) {
			capturer = factory.Create(cricket::Device(name, 0));
			if (capturer) {
				break;
			}
		}
	}
#if 0
	if (capturer) {
		const cricket::VideoFormat& capture_format = *capturer->GetSupportedFormats()->begin();
		capturer->Start(capture_format);
	}
#endif
	return capturer;
}
