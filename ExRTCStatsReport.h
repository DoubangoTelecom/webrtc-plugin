// https://www.w3.org/TR/webrtc/#dom-rtcstatsreport
#pragma once
#include "Config.h"
#include "Common.h"

class ExRTCStats;

class ExRTCStatsReport : public std::map<std::string, std::shared_ptr<ExRTCStats> > {
public:
	ExRTCStatsReport();
	virtual ~ExRTCStatsReport();

private:
};
