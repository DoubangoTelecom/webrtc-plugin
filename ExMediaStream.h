// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStream
#pragma once
#include "config.h"
#include "Common.h"
#include "ExMediaStreamTrack.h"

#include "webrtc/api/mediastreaminterface.h"

class ExMediaStream
{
public:
	ExMediaStream(MediaStreamInterfacePtr stream = NULL);
	virtual ~ExMediaStream();

public:
	// readonly    attribute DOMString    id;
	const char* id() { return m_id.c_str(); }
	// sequence<MediaStreamTrack> getAudioTracks ();
	std::shared_ptr<Sequence<ExMediaStreamTrack> > getAudioTracks();
	// sequence<MediaStreamTrack> getVideoTracks ();
	std::shared_ptr<Sequence<ExMediaStreamTrack> > getVideoTracks();
	// sequence<MediaStreamTrack> getTracks();
	std::shared_ptr<Sequence<ExMediaStreamTrack> > getTracks();
	// http://www.w3.org/TR/mediacapture-streams/#widl-MediaStream-addTrack-void-MediaStreamTrack-track
	// void addTrack (MediaStreamTrack track); 
	void addTrack(ExMediaStreamTrack* p_track);
	// http://www.w3.org/TR/mediacapture-streams/#widl-MediaStream-removeTrack-void-MediaStreamTrack-track
	// void removeTrack (MediaStreamTrack track);
	void removeTrack(ExMediaStreamTrack* p_track);
	// MediaStreamTrack? getTrackById (DOMString trackId);
	std::shared_ptr<ExMediaStreamTrack> getTrackById(const char* trackId);
	// MediaStream clone ();
	std::shared_ptr<ExMediaStream> clone();

	void onaddtrackSet(FunctionCallbackVoid onaddtrack) { m_onaddtrack = onaddtrack; } // attribute EventHandler onaddtrack;
	void onremovetrackSet(FunctionCallbackVoid onremovetrack) { m_onremovetrack = onremovetrack; } // attribute EventHandler onremovetrack;

	bool IsValid()const { return m_stream != NULL; }
	MediaStreamInterfacePtr GetWrappedStream() const { return m_stream; }
	VideoTrackInterfacePtr GetVideoTrack(int index = 0) const;

private:
#if _MSC_VER
#pragma warning(push)
#pragma warning(disable:4251)
#endif
	std::string m_id;
	rtc::scoped_refptr<webrtc::MediaStreamInterface> m_stream;
	FunctionCallbackVoid m_onaddtrack;
	FunctionCallbackVoid m_onremovetrack;
#if _MSC_VER
#pragma warning(pop)
#endif
};
