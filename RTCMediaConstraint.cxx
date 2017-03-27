#include "RTCMediaConstraints.h"

RTCMediaConstraints::RTCMediaConstraints()
{
}

RTCMediaConstraints::RTCMediaConstraints(const Constraints& mandatory, const Constraints& optional)
	: m_mandatory(mandatory)
	, m_optional(optional)
{
}

RTCMediaConstraints::~RTCMediaConstraints()
{
}

void RTCMediaConstraints::AddOptional(const std::string& key, const std::string& value)
{
	m_optional.push_back(webrtc::MediaConstraintsInterface::Constraint(key, value));
}

bool RTCMediaConstraints::AddMandatory(const std::string& key, const std::string& value, bool override_if_exists /*= true*/) {
	for (webrtc::MediaConstraintsInterface::Constraints::iterator iter = m_mandatory.begin();
		iter != m_mandatory.end();
		++iter) {
		if (iter->key == key) {
			if (override_if_exists) {
				iter->value = value;
			}
			return override_if_exists;
		}
	}
	m_mandatory.push_back(webrtc::MediaConstraintsInterface::Constraint(key, value));
	return true;
}
