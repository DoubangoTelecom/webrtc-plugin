// http://www.w3.org/TR/mediacapture-streams/#idl-def-MediaStreamConstraints
#pragma once
#include "config.h"
#include "Common.h"
#include "ExMediaTrackConstraints.h"

class ExMediaStreamConstraints
{
public:
	ExMediaStreamConstraints(std::shared_ptr<ExMediaTrackConstraints> audio = nullptr, std::shared_ptr<ExMediaTrackConstraints> video = nullptr);
	virtual ~ExMediaStreamConstraints();

	_inline std::shared_ptr<ExMediaTrackConstraints> audio() const { return m_audio; }
	_inline std::shared_ptr<ExMediaTrackConstraints> video() const { return m_video; }

private:
#if _MSC_VER
#pragma warning(push)
#pragma warning(disable:4251)
#endif
	std::shared_ptr<ExMediaTrackConstraints> m_audio;
	std::shared_ptr<ExMediaTrackConstraints> m_video;
#if _MSC_VER
#pragma warning(pop)
#endif
};
