#pragma once
#include "Config.h"

class ExMediaDeviceInfo {
public:
	ExMediaDeviceInfo(const std::string& deviceId, const std::string& kind, const std::string& label, const std::string& groupId);
	virtual ~ExMediaDeviceInfo();

	_inline const std::string& deviceId()const { return m_deviceId; }
	_inline const std::string& kind()const { return m_kind; }
	_inline const std::string& label()const { return m_label; }
	_inline const std::string& groupId()const { return m_groupId; }

private:
	std::string m_deviceId;
	std::string m_kind;
	std::string m_label;
	std::string m_groupId;
};
