#include "ExMediaDeviceInfo.h"

ExMediaDeviceInfo::ExMediaDeviceInfo(const std::string& deviceId, const std::string& kind, const std::string& label, const std::string& groupId)
	: m_deviceId(deviceId)
	, m_kind(kind)
	, m_label(label)
	, m_groupId(groupId)
{

}

ExMediaDeviceInfo::~ExMediaDeviceInfo()
{

}
