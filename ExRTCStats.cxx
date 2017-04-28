// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
#include "ExRTCStats.h"

ExRTCStats::ExRTCStats(double timestamp, const std::string& type, const std::string& id)
	: m_timestamp(timestamp)
	, m_type(type)
	, m_id(id)
{

}
	
ExRTCStats::~ExRTCStats()
{
}

std::shared_ptr<ExRTCStats> ExRTCStats::Create(const webrtc::StatsReport* report)
{
	if (report) {
		std::shared_ptr<ExRTCStats> exStats = std::make_shared<ExRTCStats>(
			report->timestamp(), report->TypeToString(), report->id()->ToString());
		if (exStats.get()) {
			for (std::map<webrtc::StatsReport::StatsValueName, webrtc::StatsReport::ValuePtr>::const_iterator iter
				= report->values().begin(); iter != report->values().end(); ++iter) {
				exStats->m_values.insert(std::pair<std::string, std::unique_ptr<ExRTCStats::Value >>(iter->second->display_name(), 
					std::make_unique<ExRTCStats::Value>(iter->first, iter->second)));
			}
			return exStats;
		}
	}
	return nullptr;
}