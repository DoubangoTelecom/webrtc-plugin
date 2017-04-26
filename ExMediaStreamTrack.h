// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrack
#pragma once
#include "config.h"
#include "Common.h"
#include "ExMediaTrackConstraints.h"
#include "ExPeerConnectionFactory.h"

#include "webrtc/api/mediastreaminterface.h"
#include "webrtc/modules/audio_device/include/audio_device_defines.h"
#include "webrtc/modules/audio_processing/rms_level.h"
#include "webrtc/common_audio/resampler/include/push_resampler.h"
#include "webrtc/system_wrappers/include/critical_section_wrapper.h"

//
//	ExMediaStreamTrackType
//
enum ExMediaStreamTrackType
{
	ExMediaStreamTrackType_Unknown,
	ExMediaStreamTrackType_Audio,
	ExMediaStreamTrackType_Video
};

//
//	ExMediaStreamTrack
//
class ExMediaStreamTrack
{
public:
	ExMediaStreamTrack(ExMediaStreamTrackType eType, MediaStreamTrackInterfacePtr track = nullptr, const ExMediaTrackConstraints* constrains = nullptr);
	virtual ~ExMediaStreamTrack();

	_inline ExMediaStreamTrackType type() { return m_eType; }
	_inline virtual bool IsValid() = 0;

	virtual const char* kind() { return m_kind.c_str(); }; // readonly attribute DOMString kind;
	virtual const char* id() { return m_id.c_str(); }; // readonly attribute DOMString id;
	virtual const char* label() { return m_label.c_str(); }; // readonly attribute DOMString id;
	virtual bool enabledSet(bool enabled) = 0; // attribute boolean enabled;
	virtual bool enabled() = 0; // attribute boolean enabled;
	virtual bool muted() = 0; // readonly attribute boolean muted;

	void onmuteSet(FunctionCallbackVoid onmute) { m_onmute = onmute; }; // attribute EventHandler onmute;
	void onunmuteSet(FunctionCallbackVoid onunmute) { m_onunmute = onunmute; }; // attribute EventHandler onunmute;

	virtual bool readonly() = 0; // readonly attribute boolean _readonly;
	virtual bool remote() { return  m_bRemote; } // readonly attribute boolean remote;
	virtual const char* readyState() = 0; // readonly attribute MediaStreamTrackState readyState;

	void onstartedSet(FunctionCallbackVoid onstarted) { m_onstarted = onstarted; } // attribute EventHandler onstarted;
	void onendedSet(FunctionCallbackVoid onended) { m_onended = onended; } // attribute EventHandler onended;

	std::shared_ptr<ExMediaTrackConstraints> getConstraints() { return m_pConstraints; } // MediaConstraints? constraints ();
#if 0
	virtual std::shared_ptr<_AllCapabilities> getCapabilities() = 0; // MediaTrackCapabilities getCapabilities ();
#endif
	virtual void applyConstraints(const ExMediaTrackConstraints* constrains) = 0; // void applyConstraints(MediaConstraints constraints);

	void onoverconstrainedSet(FunctionCallbackVoid onoverconstrained) { m_onoverconstrained = onoverconstrained; }; // attribute EventHandler onoverconstrained;

	virtual std::shared_ptr<ExMediaStreamTrack> clone() = 0; // MediaStreamTrack clone ();
	virtual void stop() = 0; // void stop ();

	virtual int micLevel() { return -1; } // Not part of WebRTC standard. For audio only. See rfc6464.
	virtual bool micLevelMonitoringStart() { return false; } // Not part of WebRTC standard. For audio only.
	virtual bool micLevelMonitoringStop() { return false; } // Not part of WebRTC standard. For audio only.

protected:
#if _MSC_VER
#pragma warning(push)
#pragma warning(disable:4251)
#endif
	ExMediaStreamTrackType m_eType;
	// local strings to avoid "dangling pointer" issue
	std::string m_label;
	std::string m_id;
	std::string m_kind;

	bool m_bRemote;
	std::shared_ptr<ExMediaTrackConstraints> m_pConstraints;

	FunctionCallbackVoid m_onmute;
	FunctionCallbackVoid m_onunmute;
	FunctionCallbackVoid m_onstarted;
	FunctionCallbackVoid m_onended;
	FunctionCallbackVoid m_onoverconstrained;
#if _MSC_VER
#pragma warning(pop)
#endif
};

//
//	ExMediaStreamTrackBase
//
class ExMediaStreamTrackBase : public ExMediaStreamTrack
{
protected:
	ExMediaStreamTrackBase(ExMediaStreamTrackType eType, std::shared_ptr<ExPeerConnectionFactory> pcf, MediaStreamTrackInterfacePtr track = nullptr, const ExMediaTrackConstraints* constrains = nullptr);
public:
	virtual ~ExMediaStreamTrackBase();

	// "ExMediaStreamTrack" interface implementation
	virtual bool enabledSet(bool enabled) override;
	virtual bool enabled() override;
	virtual bool muted() { return false; } // override in "_MediaStreamTrackAudio"
	virtual bool readonly() override;
	virtual const char* readyState() override;
#if 0
	virtual std::shared_ptr<_AllCapabilities> getCapabilities();
#endif
	virtual void applyConstraints(const ExMediaTrackConstraints* constrains);
	virtual std::shared_ptr<ExMediaStreamTrack> clone();
	virtual void stop();

	std::shared_ptr<ExPeerConnectionFactory > peerconnection_factory() { return m_pcf; }

public:
	virtual webrtc::MediaStreamTrackInterface* _track() = 0;

protected:
	void InitLocalVarsToAvoidDanglingPointerIssue();

private:
	std::shared_ptr<ExPeerConnectionFactory> m_pcf;
};

//
//	ExMediaStreamTrackAudioTransport
//
class ExMediaStreamTrackAudioTransport : public webrtc::AudioTransport
{
public:
	ExMediaStreamTrackAudioTransport();
	virtual ~ExMediaStreamTrackAudioTransport();

	void Enter() { m_cs->Enter(); }
	void Leave() { m_cs->Leave(); }
	
	virtual int32_t RecordedDataIsAvailable(const void* audioSamples,
		const size_t nSamples,
		const size_t nBytesPerSample,
		const size_t nChannels,
		const uint32_t samplesPerSec,
		const uint32_t totalDelayMS,
		const int32_t clockDrift,
		const uint32_t currentMicLevel,
		const bool keyPressed,
		uint32_t& newMicLevel) override;

	virtual int32_t NeedMorePlayData(const size_t nSamples,
		const size_t nBytesPerSample,
		const size_t nChannels,
		const uint32_t samplesPerSec,
		void* audioSamples,
		size_t& nSamplesOut,
		int64_t* elapsed_time_ms,
		int64_t* ntp_time_ms) override;

	virtual void PushCaptureData(int voe_channel,
		const void* audio_data,
		int bits_per_sample,
		int sample_rate,
		size_t number_of_channels,
		size_t number_of_frames) override;
	
	virtual void PullRenderData(int bits_per_sample,
		int sample_rate,
		size_t number_of_channels,
		size_t number_of_frames,
		void* audio_data,
		int64_t* elapsed_time_ms,
		int64_t* ntp_time_ms) override;

	int micLevel();

	static std::unique_ptr<ExMediaStreamTrackAudioTransport> Create();

private:
	webrtc::CriticalSectionWrapper *m_cs;
	webrtc::RmsLevel m_rms;
	webrtc::PushResampler<int16_t> m_resampler;
};

//
//	ExMediaStreamTrackAudio
//
class ExMediaStreamTrackAudio
	: public ExMediaStreamTrackBase
{
public:
	ExMediaStreamTrackAudio(std::shared_ptr<ExPeerConnectionFactory> pcf, rtc::scoped_refptr<webrtc::AudioTrackInterface> track = nullptr, const ExMediaTrackConstraints* constrains = nullptr);
	virtual ~ExMediaStreamTrackAudio();

	_inline virtual bool IsValid() override { return !!m_track; }
	virtual rtc::scoped_refptr<webrtc::AudioTrackInterface> track() { return m_track; };

	// ExMediaStreamTrackBase Interface
	virtual webrtc::MediaStreamTrackInterface* _track() override { return track(); }

	// ExMediaStreamTrack interface implementation
	virtual bool muted() override;
	virtual int micLevel() override;	
	virtual bool micLevelMonitoringStart() override; 
	virtual bool micLevelMonitoringStop() override;

private:
	rtc::scoped_refptr<webrtc::AudioTrackInterface > m_track;
	std::unique_ptr<ExMediaStreamTrackAudioTransport> m_transport;
	bool m_bMicLevelMonitoringStarted;
};

//
//	ExMediaStreamTrackVideo
//
class ExMediaStreamTrackVideo
	: public ExMediaStreamTrackBase
{
public:
	ExMediaStreamTrackVideo(std::shared_ptr<ExPeerConnectionFactory> pcf, rtc::scoped_refptr<webrtc::VideoTrackInterface> track = nullptr, const ExMediaTrackConstraints* constrains = nullptr);
	virtual ~ExMediaStreamTrackVideo();

	_inline virtual bool IsValid() override { return !!m_track; }
	virtual rtc::scoped_refptr<webrtc::VideoTrackInterface> track() { return m_track; };

	// _MediaStreamTrackBase Interface
	virtual webrtc::MediaStreamTrackInterface* _track() override { return track(); }
	virtual void stop();

private:
	void StartOnWorkerThread(const ExMediaTrackConstraints* constrains);
	void StopOnWorkerThread();

private:
	rtc::scoped_refptr<webrtc::VideoTrackInterface> m_track;
	cricket::VideoCapturer* m_capturerWeakRef;
};
