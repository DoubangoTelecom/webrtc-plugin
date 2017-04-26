// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStream
#include "stdafx.h"
#include "ExMediaStream.h"
#include "helper.h"
#include "Utils.h"

#include <algorithm>

#define RETURN_IF_NOT_VALID() if (!IsValid()) return;

ExMediaStream::ExMediaStream(MediaStreamInterfacePtr stream /*= NULL*/)
	: m_stream(NULL)
	, m_onaddtrack(NULL)
	, m_onremovetrack(NULL)
{
	m_peerconnection_factory = std::make_shared<ExPeerConnectionFactory>();
	m_stream = dynamic_cast<webrtc::MediaStreamInterface*>((webrtc::MediaStreamInterface*)stream);
	if (m_stream) {
		webrtc::AudioTrackVector audioTracks = m_stream->GetAudioTracks();
		for (size_t i = 0; i < audioTracks.size(); ++i) {
			if (audioTracks[i]) {
				m_exTracks.push_back(std::make_shared<ExMediaStreamTrackAudio>(m_peerconnection_factory, audioTracks[i]));
			}
		}
		webrtc::VideoTrackVector videoTracks = m_stream->GetVideoTracks();
		for (size_t i = 0; i < videoTracks.size(); ++i) {
			if (videoTracks[i]) {
				m_exTracks.push_back(std::make_shared<ExMediaStreamTrackVideo>(m_peerconnection_factory, videoTracks[i]));
			}
		}
	}
	else {
		static long __id = 1;
		std::string _id = Helper::ToString(InterlockedIncrement(&__id));
		m_stream = m_peerconnection_factory->factory()->CreateLocalMediaStream(_id);
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
	GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [this]() {
		m_stream = nullptr;
		m_peerconnection_factory = nullptr;
		m_exTracks.clear(); // must be last (to have m_track->refCount == 1)
	});
	RTC_DEBUG_INFO("ExMediaStream::~ExMediaStream");
}

std::shared_ptr<Sequence<ExMediaStreamTrack> > ExMediaStream::getAudioTracks()
{
	std::shared_ptr<Sequence<ExMediaStreamTrack> > seq(new Sequence<ExMediaStreamTrack>());
	if (IsValid()) {
		for (std::vector<std::shared_ptr<ExMediaStreamTrack > >::iterator it = m_exTracks.begin(); it < m_exTracks.end(); ++it) {
			if ((*it)->type() == ExMediaStreamTrackType_Audio) {
				seq->Add(*it);
			}
		}
	}
	return seq;
}

std::shared_ptr<Sequence<ExMediaStreamTrack> > ExMediaStream::getVideoTracks()
{
	std::shared_ptr<Sequence<ExMediaStreamTrack> > seq(new Sequence<ExMediaStreamTrack>());
	if (IsValid()) {
		for (std::vector<std::shared_ptr<ExMediaStreamTrack > >::iterator it = m_exTracks.begin(); it < m_exTracks.end(); ++it) {
			if ((*it)->type() == ExMediaStreamTrackType_Video) {
				seq->Add(*it);
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
void ExMediaStream::addTrack(std::shared_ptr<ExMediaStreamTrack> track)
{
	RETURN_IF_NOT_VALID();
	bool added = false;
	if (track.get()) {
		ExMediaStreamTrackBase *pTrackBase = dynamic_cast<ExMediaStreamTrackBase*>(track.get());
		if (pTrackBase) {
			switch (pTrackBase->type()) {
			case ExMediaStreamTrackType_Audio: {
				added = m_stream->AddTrack(dynamic_cast<ExMediaStreamTrackAudio*>(pTrackBase)->track());
				break;
			}
			case ExMediaStreamTrackType_Video: {
				added = m_stream->AddTrack(dynamic_cast<ExMediaStreamTrackVideo*>(pTrackBase)->track());
				break;
			}
			default:
				RTC_DEBUG_ERROR("%d not valid stream track type", pTrackBase->type());
				break;
			}
		}
	}
	if (added) {
		if (m_onaddtrack) {
			m_onaddtrack();
		}
		m_exTracks.push_back(track);
	}
}

// void removeTrack (MediaStreamTrack track);
// http://www.w3.org/TR/mediacapture-streams/#widl-MediaStream-removeTrack-void-MediaStreamTrack-track
void ExMediaStream::removeTrack(std::shared_ptr<ExMediaStreamTrack> track)
{
	RETURN_IF_NOT_VALID();
	bool removed = false;
	if (track.get()) {
		ExMediaStreamTrackBase *pTrackBase = dynamic_cast<ExMediaStreamTrackBase*>(track.get());
		if (pTrackBase) {
			switch (pTrackBase->type()) {
			case ExMediaStreamTrackType_Audio: {
				GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [pTrackBase, &removed, this]() {
					removed = m_stream->RemoveTrack(dynamic_cast<ExMediaStreamTrackAudio*>(pTrackBase)->track());
				});
				break;
			}
			case ExMediaStreamTrackType_Video: {
				GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [pTrackBase, &removed, this]() {
					removed = m_stream->RemoveTrack(dynamic_cast<ExMediaStreamTrackVideo*>(pTrackBase)->track());
				});
				break;
			}
			default:
				RTC_DEBUG_ERROR("%d not valid stream track type", pTrackBase->type());
				break;
			}
		}
	}
	if (removed) {
		if (m_onremovetrack) {
			m_onremovetrack();
		}
		m_exTracks.erase(std::find_if(m_exTracks.begin(), m_exTracks.end(),
			[track](std::shared_ptr<ExMediaStreamTrack> const& item)
		{
			return std::string(track->id()).compare(item->id()) == 0;
		}));
	}

}

std::shared_ptr<ExMediaStreamTrack> ExMediaStream::getTrackById(const std::string& trackId)
{
	auto foundItem = std::find_if(m_exTracks.begin(), m_exTracks.end(),
		[trackId](std::shared_ptr<ExMediaStreamTrack> const& item)  
	{
		return trackId.compare(item->id()) == 0;
	});
	if (foundItem != m_exTracks.end()) {
		return *foundItem;
	}
	return nullptr;
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
						_clone->addTrack(audioTracks->values[i]);
					}
				}
			}
			// video
			std::shared_ptr<Sequence<ExMediaStreamTrack> > videoTracks = getVideoTracks();
			if (videoTracks) {
				for (size_t i = 0; i < videoTracks->values.size(); ++i) {
					if (videoTracks->values[i].get()) {
						_clone->addTrack(videoTracks->values[i]);
					}
				}
			}
		}
	}
	return _clone;
}

VideoTrackInterfacePtr ExMediaStream::GetVideoTrack(int index /*= 0*/)const
{
	int i = 0;
	if (IsValid()) {
		for (std::vector<std::shared_ptr<ExMediaStreamTrack > >::const_iterator it = m_exTracks.begin(); it < m_exTracks.end(); ++it) {
			if ((*it)->type() == ExMediaStreamTrackType_Video) {
				if (i >= index) {
					return dynamic_cast<ExMediaStreamTrackVideo*>((*it).get())->track().get();
				}
				++i;
			}
		}
	}
	return nullptr;
}