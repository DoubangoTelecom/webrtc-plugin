#include "ExMediaStreamConstraints.h"

ExMediaStreamConstraints::ExMediaStreamConstraints(std::shared_ptr<ExMediaTrackConstraints> audio /*= nullPtr*/, std::shared_ptr<ExMediaTrackConstraints> video /*= nullPtr*/)
	: m_audio(audio)
	, m_video(video)
{
	
}

ExMediaStreamConstraints::~ExMediaStreamConstraints()
{
	m_audio = nullptr;
	m_video = nullptr;
}
