// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaTrackConstraints
// Samples: https://www.w3.org/TR/mediacapture-streams/#idl-def-ConstrainBooleanParameters

#include "ExMediaTrackConstraints.h"

ExMediaTrackConstraints::ExMediaTrackConstraints(bool bVal)
	: m_bValue(bVal)
	, m_eType(ExMediaTrackConstraintsType_Boolean)
{
}

ExMediaTrackConstraints::ExMediaTrackConstraints(std::shared_ptr<MediaTrackConstraintSet> exact /*= nullptr*/, std::shared_ptr<MediaTrackConstraintSet> ideal /*= nullptr*/)
	: m_exact(exact)
	, m_ideal(ideal)
	, m_eType(ExMediaTrackConstraintsType_Composite)
{
}

ExMediaTrackConstraints::~ExMediaTrackConstraints()
{
	RTC_DEBUG_INFO("ExMediaTrackConstraints::~ExMediaTrackConstraints");
}
