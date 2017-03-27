// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamTrack
#pragma once
#include "config.h"
#include "Common.h"
#include "ExMediaTrackConstraints.h"

#include "webrtc/api/mediastreaminterface.h"

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
	ExMediaStreamTrack(ExMediaStreamTrackType eType, MediaStreamTrackInterfacePtr track = NULL, const ExMediaTrackConstraints* constrains = NULL);
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

	std::shared_ptr<ExMediaTrackConstraints> getConstraints() { return m_pConstraints; } // MediaTrackConstraints? constraints ();
#if 0
	virtual std::shared_ptr<_AllCapabilities> getCapabilities() = 0; // MediaTrackCapabilities getCapabilities ();
#endif
	virtual void applyConstraints(const ExMediaTrackConstraints* constrains) = 0; // void applyConstraints(MediaTrackConstraints constraints);

	void onoverconstrainedSet(FunctionCallbackVoid onoverconstrained) { m_onoverconstrained = onoverconstrained; }; // attribute EventHandler onoverconstrained;

	virtual std::shared_ptr<ExMediaStreamTrack> clone() = 0; // MediaStreamTrack clone ();
	virtual void stop() = 0; // void stop ();

	virtual int micLevel() { return -1; } // Not part of WebRTC std. For audio only. See rfc6464.

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
	ExMediaStreamTrackBase(ExMediaStreamTrackType eType, MediaStreamTrackInterfacePtr track = NULL, const ExMediaTrackConstraints* constrains = NULL);
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

public:
	virtual webrtc::MediaStreamTrackInterface* _track() = 0;

protected:
	void InitLocalVarsToAvoidDanglingPointerIssue();

protected:

};

//
//	ExMediaStreamTrackAudio
//
class ExMediaStreamTrackAudio
	: public ExMediaStreamTrackBase
{
public:
	ExMediaStreamTrackAudio(rtc::scoped_refptr<webrtc::AudioTrackInterface> track = NULL, const ExMediaTrackConstraints* constrains = NULL);
	virtual ~ExMediaStreamTrackAudio();

	_inline virtual bool IsValid() override { return !!m_track; }
	virtual rtc::scoped_refptr<webrtc::AudioTrackInterface> track() { return m_track; };

	// ExMediaStreamTrackBase Interface
	virtual webrtc::MediaStreamTrackInterface* _track() override { return track(); }

	// ExMediaStreamTrack interface implementation
	virtual bool muted() override;
	virtual int micLevel() override;

private:
	rtc::scoped_refptr<webrtc::AudioTrackInterface > m_track;
};

//
//	ExMediaStreamTrackVideo
//
class ExMediaStreamTrackVideo
	: public ExMediaStreamTrackBase
{
public:
	ExMediaStreamTrackVideo(rtc::scoped_refptr<webrtc::VideoTrackInterface> track = NULL, const ExMediaTrackConstraints* constrains = NULL);
	virtual ~ExMediaStreamTrackVideo();

	_inline virtual bool IsValid() override { return !!m_track; }
	virtual rtc::scoped_refptr<webrtc::VideoTrackInterface> track() { return m_track; };

	// _MediaStreamTrackBase Interface
	virtual webrtc::MediaStreamTrackInterface* _track() override { return track(); }

private:
	rtc::scoped_refptr<webrtc::VideoTrackInterface> m_track;
};
