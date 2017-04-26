// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrack
#include "ExMediaStreamTrack.h"
#include "RTCMediaConstraints.h"
#include "ExRTCWindow.h"
#include "ExRTCScreen.h"
#include "Helper.h"
#include "DoubangoDesktopCapturer.h"

#include "webrtc/media/engine/webrtcvideocapturerfactory.h"
#include "webrtc/modules/video_capture/video_capture_factory.h"
#if _MSC_VER
#pragma warning(push)
#pragma warning(disable:4244)
#endif
#include "webrtc/modules/audio_processing/audio_processing_impl.h"
#if _MSC_VER
#pragma warning(pop)
#endif
#include "webrtc/media/base/videocapturer.h"
#include "webrtc/media/engine/webrtcvideocapturer.h"
#include "webrtc/media/engine/webrtcvideoframe.h"
#include "webrtc/voice_engine/utility.h"

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

ExMediaStreamTrackBase::ExMediaStreamTrackBase(ExMediaStreamTrackType eType, std::shared_ptr<ExPeerConnectionFactory> pcf, MediaStreamTrackInterfacePtr track /*= nullptr*/, const ExMediaTrackConstraints* constrains /*= nullptr*/)
	: ExMediaStreamTrack(eType, track, constrains)
	, m_pcf(pcf)
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
		return std::shared_ptr<ExMediaStreamTrack>(new ExMediaStreamTrackVideo(dynamic_cast<ExMediaStreamTrackBase*>(this)->peerconnection_factory(), dynamic_cast<ExMediaStreamTrackVideo*>(this)->track()));
	}
	else if (m_eType == ExMediaStreamTrackType_Audio) {
		return std::shared_ptr<ExMediaStreamTrack>(new ExMediaStreamTrackAudio(dynamic_cast<ExMediaStreamTrackBase*>(this)->peerconnection_factory(), dynamic_cast<ExMediaStreamTrackAudio*>(this)->track()));
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
//	ExMediaStreamTrackAudioTransport
//

ExMediaStreamTrackAudioTransport::ExMediaStreamTrackAudioTransport()
	: m_cs(webrtc::CriticalSectionWrapper::CreateCriticalSection())
{
	
}

ExMediaStreamTrackAudioTransport::~ExMediaStreamTrackAudioTransport()
{
	if (m_cs) {
		delete m_cs, m_cs = nullptr;
	}
}

int32_t ExMediaStreamTrackAudioTransport::RecordedDataIsAvailable(const void* audioSamples,
	const size_t nSamples,
	const size_t nBytesPerSample,
	const size_t nChannels,
	const uint32_t samplesPerSec,
	const uint32_t totalDelayMS,
	const int32_t clockDrift,
	const uint32_t currentMicLevel,
	const bool keyPressed,
	uint32_t& newMicLevel)
{
	AutoLock<ExMediaStreamTrackAudioTransport> lock(this);
	webrtc::AudioFrame audioFrame;
	const int min_processing_rate = static_cast<int>(samplesPerSec);
	for (size_t i = 0; i < webrtc::AudioProcessing::kNumNativeSampleRates; ++i) {
		audioFrame.sample_rate_hz_ = webrtc::AudioProcessing::kNativeSampleRatesHz[i];
		if (audioFrame.sample_rate_hz_ >= min_processing_rate) {
			break;
		}
	}
	audioFrame.num_channels_ = std::min(nChannels, static_cast<size_t>(1));
	webrtc::voe::RemixAndResample(static_cast<const int16_t*>(audioSamples), nSamples, nChannels, samplesPerSec,
		&m_resampler, &audioFrame);
	const size_t length = audioFrame.samples_per_channel_ * audioFrame.num_channels_;
	RTC_CHECK_LE(length, sizeof(audioFrame.data_));
	m_rms.Analyze(rtc::ArrayView<const int16_t>(audioFrame.data_, length));
	return 0;
}

int32_t ExMediaStreamTrackAudioTransport::NeedMorePlayData(const size_t nSamples,
	const size_t nBytesPerSample,
	const size_t nChannels,
	const uint32_t samplesPerSec,
	void* audioSamples,
	size_t& nSamplesOut,
	int64_t* elapsed_time_ms,
	int64_t* ntp_time_ms)
{
	return 0;
}

void ExMediaStreamTrackAudioTransport::PushCaptureData(int voe_channel,
	const void* audio_data,
	int bits_per_sample,
	int sample_rate,
	size_t number_of_channels,
	size_t number_of_frames)
{
}

void ExMediaStreamTrackAudioTransport::PullRenderData(int bits_per_sample,
	int sample_rate,
	size_t number_of_channels,
	size_t number_of_frames,
	void* audio_data,
	int64_t* elapsed_time_ms,
	int64_t* ntp_time_ms)
{
}

int ExMediaStreamTrackAudioTransport::micLevel()
{
	AutoLock<ExMediaStreamTrackAudioTransport> lock(this);
	return m_rms.Average();
}

std::unique_ptr<ExMediaStreamTrackAudioTransport> ExMediaStreamTrackAudioTransport::Create()
{
	return std::make_unique<ExMediaStreamTrackAudioTransport>();
}


//
//	ExMediaStreamTrackAudio
//

ExMediaStreamTrackAudio::ExMediaStreamTrackAudio(std::shared_ptr<ExPeerConnectionFactory> pcf, rtc::scoped_refptr<webrtc::AudioTrackInterface> track /*= nullptr*/, const ExMediaTrackConstraints* constrains /*= nullptr*/)
	: ExMediaStreamTrackBase(ExMediaStreamTrackType_Audio, pcf, track, constrains)
	, m_track(track)
	, m_bMicLevelMonitoringStarted(false)
{
	rtc::scoped_refptr<webrtc::AudioDeviceModule> adm = peerconnection_factory()->adm();
	MediaConstraintSets constrainSets(constrains ? constrains->ideal() : nullptr, constrains ? constrains->exact() : nullptr);
	rtc::scoped_refptr<RTCMediaConstraints> rtcConstrains = BuildConstraints(&constrainSets);

	if (!m_track) {
		if (rtcConstrains.get()) {
			std::string deviceId;
			if (!rtcConstrains->GetMandatory().FindFirst("deviceId", &deviceId)) {
				rtcConstrains->GetOptional().FindFirst("deviceId", &deviceId);
			}
			// Set Input Device Identifier (only on local stream -> track is null)
			if (!deviceId.empty()) {
				const int16_t recordingDevices = adm->RecordingDevices();
				char name[webrtc::kAdmMaxDeviceNameSize];
				char guid[webrtc::kAdmMaxGuidSize];
				for (int16_t i = 0; i < recordingDevices; ++i) {
					if (adm->RecordingDeviceName(i, name, guid) == 0 && deviceId.compare(guid) == 0) {
						adm->SetRecordingDevice(i);
						break;
					}
				}
			}
		}
		m_label += "_audio_track";
		MediaConstraintSets constrainSets(constrains ? constrains->ideal() : nullptr, constrains ? constrains->exact() : nullptr);
		m_track = peerconnection_factory()->factory()->CreateAudioTrack(m_label, peerconnection_factory()->factory()->CreateAudioSource(BuildConstraints(&constrainSets)));
	}
	InitLocalVarsToAvoidDanglingPointerIssue();
}

ExMediaStreamTrackAudio::~ExMediaStreamTrackAudio()
{
	micLevelMonitoringStop();
	GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [this]() {
		m_track = nullptr;
		m_transport = nullptr;
	});
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
	if (m_bMicLevelMonitoringStarted) {
		return m_transport->micLevel();
	}
	RTC_DEBUG_ERROR("Must call micLevelMonitoringStart first");
	return ExMediaStreamTrack::micLevel(); // default value from base class
}

bool ExMediaStreamTrackAudio::micLevelMonitoringStart()
{
	if (m_track.get()) {
		if (!m_bMicLevelMonitoringStarted) {
			GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [this]() {
				rtc::scoped_refptr<webrtc::AudioDeviceModule> adm = peerconnection_factory()->adm();
				adm->InitRecording();
				m_transport = ExMediaStreamTrackAudioTransport::Create();
				adm->RegisterAudioCallback(m_transport.get()); // must be set before starting to record
				adm->StartRecording();
				m_bMicLevelMonitoringStarted = true;
			});
		}
		return true;
	}
	return false;
}

bool ExMediaStreamTrackAudio::micLevelMonitoringStop()
{
	if (m_track.get()) {
		if (m_bMicLevelMonitoringStarted) {
			GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [this]() {
				rtc::scoped_refptr<webrtc::AudioDeviceModule> adm = peerconnection_factory()->adm();
				adm->StopRecording();
				adm->RegisterAudioCallback(nullptr);
				m_transport = nullptr;
				m_bMicLevelMonitoringStarted = false;
			});
		}
		return true;
	}
	return false;
}

//
//	ExMediaStreamTrackVideo
//
static cricket::VideoCapturer* OpenVideoCaptureDevice(const std::string& deviceId, const std::string& chromeMediaSource, const std::string& chromeMediaSourceId);

ExMediaStreamTrackVideo::ExMediaStreamTrackVideo(std::shared_ptr<ExPeerConnectionFactory> pcf, rtc::scoped_refptr<webrtc::VideoTrackInterface> track /*= nullptr*/, const ExMediaTrackConstraints* constrains /*= nullptr*/)
	: ExMediaStreamTrackBase(ExMediaStreamTrackType_Video, pcf, track, constrains)
	, m_track(track)
	, m_capturerWeakRef(nullptr)
{
	if (!m_track) {
		GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, rtc::Bind(&ExMediaStreamTrackVideo::StartOnWorkerThread, this, constrains));
	}
	InitLocalVarsToAvoidDanglingPointerIssue();
}


ExMediaStreamTrackVideo:: ~ExMediaStreamTrackVideo()
{
	if (m_track) {
		m_track->AddRef();
		if (m_track->Release() == 1) {
#if 0
			if (m_capturerWeakRef) {
				delete m_capturerWeakRef;
				m_capturerWeakRef = nullptr;
			}
#endif
		}
		m_track = nullptr;
	}

	RTC_DEBUG_INFO("ExMediaStreamTrackVideo::~ExMediaStreamTrackVideo");
}

void ExMediaStreamTrackVideo::stop() // Overrides ExMediaStreamTrackBase::stop()
{
	GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, rtc::Bind(&ExMediaStreamTrackVideo::StopOnWorkerThread, this));
}

void ExMediaStreamTrackVideo::StartOnWorkerThread(const ExMediaTrackConstraints* constrains)
{
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
	m_capturerWeakRef = OpenVideoCaptureDevice(deviceId, chromeMediaSource, chromeMediaSourceId);
	if (m_capturerWeakRef) {
		m_track = peerconnection_factory()->factory()->CreateVideoTrack(m_label, peerconnection_factory()->factory()->CreateVideoSource(m_capturerWeakRef, rtcConstrains));
	}
}

void ExMediaStreamTrackVideo::StopOnWorkerThread()
{
	if (m_capturerWeakRef) {
		m_capturerWeakRef->Stop();
	}
}

static cricket::VideoCapturer* OpenVideoCaptureDevice(const std::string& deviceId, const std::string& chromeMediaSource, const std::string& chromeMediaSourceId)
{
	if (chromeMediaSource.compare("window") == 0) {
		if (!chromeMediaSourceId.empty()) {
			webrtc::DesktopCapturer::SourceId sourceId = static_cast<webrtc::DesktopCapturer::SourceId>(atoll(chromeMediaSourceId.c_str()));
			ExRTCWindow exRTCWindow(sourceId, kStringEmpty);
			return DoubangoDesktopCapturerFactory::CreateWindowCapturer(&exRTCWindow);
		}
		return DoubangoDesktopCapturerFactory::CreateScreenCapturer();
	}
	else if (chromeMediaSource.compare("desktop") == 0) {
		if (!chromeMediaSourceId.empty()) {
			webrtc::DesktopCapturer::SourceId sourceId = static_cast<webrtc::DesktopCapturer::SourceId>(atoll(chromeMediaSourceId.c_str()));
			ExRTCScreen exRTCScreen(sourceId, kStringEmpty);
			return DoubangoDesktopCapturerFactory::CreateScreenCapturer(&exRTCScreen);
		}
		return DoubangoDesktopCapturerFactory::CreateScreenCapturer();
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

