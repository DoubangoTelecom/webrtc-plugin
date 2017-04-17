// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaTrackConstraints
// Samples: https://www.w3.org/TR/mediacapture-streams/#idl-def-ConstrainBooleanParameters
#pragma once
#include "config.h"
#include "Common.h"

enum ExMediaTrackConstraintsType
{
	ExMediaTrackConstraintsType_Unknown,
	ExMediaTrackConstraintsType_Boolean,
	ExMediaTrackConstraintsType_Composite
};

class ExMediaTrackConstraints
{
public:
	ExMediaTrackConstraints(bool bVal);
	ExMediaTrackConstraints(std::shared_ptr<MediaConstraintSet> exact = nullptr, std::shared_ptr<MediaConstraintSet> ideal = nullptr);
	virtual ~ExMediaTrackConstraints();

	_inline ExMediaTrackConstraintsType type()const { return m_eType; }
	_inline bool isBool()const { return type() == ExMediaTrackConstraintsType_Boolean; }
	_inline bool boolVal()const { return m_bValue; }
	_inline const std::shared_ptr<MediaConstraintSet> exact()const { return m_exact; }
	_inline const std::shared_ptr<MediaConstraintSet> ideal()const { return m_ideal; }

private:
#if _MSC_VER
#pragma warning(push)
#pragma warning(disable:4251)
#endif
	ExMediaTrackConstraintsType m_eType;
	bool m_bValue; // only if type is ExMediaTrackConstraintsTypeBoolean
	std::shared_ptr<MediaConstraintSet> m_exact; // only if type is ExMediaTrackConstraintsTypeComposite
	std::shared_ptr<MediaConstraintSet> m_ideal; // only if type is ExMediaTrackConstraintsTypeComposite
#if _MSC_VER
#pragma warning(pop)
#endif
};
