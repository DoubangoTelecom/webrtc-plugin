// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStream
#include "stdafx.h"
#include "ExMediaStream.h"
#include "helper.h"
#include "Utils.h"

#define RETURN_IF_NOT_VALID() if (!IsValid()) return;

ExMediaStream::ExMediaStream(MediaStreamInterfacePtr stream /*= NULL*/)
	: m_stream(NULL)
	, m_onaddtrack(NULL)
	, m_onremovetrack(NULL)
{
	m_stream = dynamic_cast<webrtc::MediaStreamInterface*>((webrtc::MediaStreamInterface*)stream);
	if (!m_stream) {
		rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> peer_connection_factory = GetPeerConnectionFactory();
		if (peer_connection_factory) {
			static long __id = 1;
			std::string _id = Helper::ToString(InterlockedIncrement(&__id));
			m_stream = peer_connection_factory->CreateLocalMediaStream(_id);
		}
	}
	if (!m_stream) {
		RTC_DEBUG_ERROR("Failed to create stream");
	}
	else {
		m_id = m_stream->label();
	}
}
	
ExMediaStream::~ExMediaStream()
{
	m_stream = NULL;
	RTC_DEBUG_INFO("ExMediaStream::~ExMediaStream");
}

std::shared_ptr<Sequence<ExMediaStreamTrack> > ExMediaStream::getAudioTracks()
{
	std::shared_ptr<Sequence<ExMediaStreamTrack> > seq(new Sequence<ExMediaStreamTrack>());
	if (IsValid()) {
		webrtc::AudioTrackVector tracks = m_stream->GetAudioTracks();
		for (size_t i = 0; i < tracks.size(); ++i) {
			if (tracks[i]) {
				seq->Add(std::shared_ptr<ExMediaStreamTrackAudio>(new ExMediaStreamTrackAudio(tracks[i])));
			}
		}
	}

	return seq;
}

std::shared_ptr<Sequence<ExMediaStreamTrack> > ExMediaStream::getVideoTracks()
{
	std::shared_ptr<Sequence<ExMediaStreamTrack> > seq(new Sequence<ExMediaStreamTrack>());
	if (IsValid()) {
		webrtc::VideoTrackVector tracks = m_stream->GetVideoTracks();
		for (size_t i = 0; i < tracks.size(); ++i) {
			if (tracks[i]) {
				seq->Add(std::shared_ptr<ExMediaStreamTrackVideo>(new ExMediaStreamTrackVideo(tracks[i])));
			}
		}
	}

	return seq;
}

std::shared_ptr<Sequence<ExMediaStreamTrack> > ExMediaStream::getTracks()
{
	std::shared_ptr<Sequence<ExMediaStreamTrack> > seq = getVideoTracks();
	seq->AddSeq(getAudioTracks().get());
	return seq;
}

// void addTrack (MediaStreamTrack track); 
// http://www.w3.org/TR/mediacapture-streams/#widl-MediaStream-addTrack-void-MediaStreamTrack-track
void ExMediaStream::addTrack(ExMediaStreamTrack* p_track)
{
	RETURN_IF_NOT_VALID();
	if (!p_track) {
		RTC_DEBUG_ERROR("Invalid parameter");
		return;
	}

	ExMediaStreamTrackBase *_pTrack = dynamic_cast<ExMediaStreamTrackBase*>(p_track);
	bool added = false;
	if (_pTrack) {
		switch (p_track->type())
		{
		case ExMediaStreamTrackType_Audio:
		{
			added = m_stream->AddTrack(dynamic_cast<ExMediaStreamTrackAudio*>(_pTrack)->track());
			break;
		}
		case ExMediaStreamTrackType_Video:
		{
			added = m_stream->AddTrack(dynamic_cast<ExMediaStreamTrackVideo*>(_pTrack)->track());
			break;
		}
		default:
			RTC_DEBUG_ERROR("%d not valid stream track type", p_track->type());
			break;
		}
	}
	else {
		RTC_DEBUG_ERROR("Invalid stream track");
	}

	if (added && m_onaddtrack) {
		m_onaddtrack();
	}
}

// void removeTrack (MediaStreamTrack track);
// http://www.w3.org/TR/mediacapture-streams/#widl-MediaStream-removeTrack-void-MediaStreamTrack-track
void ExMediaStream::removeTrack(ExMediaStreamTrack* p_track)
{
	RETURN_IF_NOT_VALID();
	if (!p_track) {
		RTC_DEBUG_ERROR("Invalid parameter");
		return;
	}

	ExMediaStreamTrackBase *_pTrack = dynamic_cast<ExMediaStreamTrackBase*>(p_track);
	bool removed = false;
	if (_pTrack) {
		switch (p_track->type())
		{
		case ExMediaStreamTrackType_Audio:
			removed = m_stream->RemoveTrack(dynamic_cast<ExMediaStreamTrackAudio*>(_pTrack)->track());
			break;
		case ExMediaStreamTrackType_Video:
			removed = m_stream->RemoveTrack(dynamic_cast<ExMediaStreamTrackVideo*>(_pTrack)->track());
			break;
		default:
			RTC_DEBUG_ERROR("%d not valid stream track type", p_track->type());
			break;
		}
	}
	else {
		RTC_DEBUG_ERROR("Invalid stream track");
	}

	if (removed && m_onremovetrack) {
		m_onremovetrack();
	}
}

std::shared_ptr<ExMediaStreamTrack> ExMediaStream::getTrackById(const char* trackId)
{
	std::shared_ptr<ExMediaStreamTrack> track = nullptr;
	if (trackId && IsValid()) {
		rtc::scoped_refptr<webrtc::AudioTrackInterface> track_audio = m_stream->FindAudioTrack(std::string(trackId));
		if (track_audio.get()) {
			track = std::shared_ptr<ExMediaStreamTrackAudio>(new ExMediaStreamTrackAudio(track_audio));
		}
		else {
			rtc::scoped_refptr<webrtc::VideoTrackInterface> track_video = m_stream->FindVideoTrack(std::string(trackId));
			if (track_video.get()) {
				track = std::shared_ptr<ExMediaStreamTrackVideo>(new ExMediaStreamTrackVideo(track_video));
			}
		}
	}

	return track;
}

std::shared_ptr<ExMediaStream> ExMediaStream::clone()
{
	// http://www.w3.org/TR/mediacapture-streams/#widl-MediaStream-clone-MediaStream
	std::shared_ptr<ExMediaStream> _clone = nullptr;
	if (IsValid()) {
		_clone = std::shared_ptr<ExMediaStream>(new ExMediaStream());
		if (_clone && _clone->IsValid()) {
			// audio
			std::shared_ptr<Sequence<ExMediaStreamTrack> > audioTracks = getAudioTracks();
			if (audioTracks) {
				for (size_t i = 0; i < audioTracks->values.size(); ++i) {
					if (audioTracks->values[i].get()) {
						_clone->addTrack(audioTracks->values[i].get());
					}
				}
			}
			// video
			std::shared_ptr<Sequence<ExMediaStreamTrack> > videoTracks = getVideoTracks();
			if (videoTracks) {
				for (size_t i = 0; i < videoTracks->values.size(); ++i) {
					if (videoTracks->values[i].get()) {
						_clone->addTrack(videoTracks->values[i].get());
					}
				}
			}
		}
	}
	return _clone;
}

VideoTrackInterfacePtr ExMediaStream::GetVideoTrack(int index /*= 0*/)const
{
	if (m_stream && index >= 0 && index < (int)m_stream->GetVideoTracks().size()) {
		return m_stream->GetVideoTracks().at(index);
	}
	return NULL;
}