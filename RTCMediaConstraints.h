#pragma once
#include "config.h"
#include "webrtc/api/mediaconstraintsinterface.h"
#include "webrtc/base/refcount.h"

class RTCMediaConstraints
	: public webrtc::MediaConstraintsInterface
	, public rtc::RefCountInterface
{
public:
	RTCMediaConstraints();
	RTCMediaConstraints(const Constraints& mandatory, const Constraints& optional);
	virtual ~RTCMediaConstraints();

	// MediaConstraintsInterface
	virtual const Constraints& GetMandatory() const override { return m_mandatory; }
	virtual const Constraints& GetOptional() const override { return m_optional; };

	void AddOptional(const std::string& key, const std::string& value);
	bool AddMandatory(const std::string& key, const std::string& value, bool override_if_exists = true);

	void RemoveIfNotInList(const std::vector<std::string>& list);

private:
	Constraints m_mandatory;
	Constraints m_optional;
};
