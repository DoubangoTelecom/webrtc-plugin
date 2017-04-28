// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
#pragma once
#include "Config.h"
#include "Common.h"

#include "webrtc/api/statstypes.h"

class ExRTCStats {
public:
	class Value {
	public:
		Value(webrtc::StatsReport::StatsValueName name, webrtc::StatsReport::ValuePtr value) 
			: m_name(name)
			, m_value(value)
		{

		}
		virtual ~Value() {
			GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [this]() {
				m_value = nullptr;
			});
		}

		_inline webrtc::StatsReport::StatsValueName name()const { return m_name; }
		_inline const webrtc::StatsReport::Value* value()const { return m_value.get(); }

	private:
		webrtc::StatsReport::StatsValueName m_name;
		webrtc::StatsReport::ValuePtr m_value;
	};
	ExRTCStats(double timestamp, const std::string& type, const std::string& id);
	virtual ~ExRTCStats();

	_inline double timestamp()const { return m_timestamp; }
	_inline const std::string& type()const { return m_type; }
	_inline const std::string& id()const { return m_id; }
	
	_inline const ExRTCStats::Value* stat(std::string name) const {
		std::map<std::string, std::unique_ptr<ExRTCStats::Value > >::const_iterator it = m_values.find(name);
		if (it != m_values.end()) {
			return (*it).second.get();
		}
		return nullptr;
	}

	_inline const ExRTCStats::Value* stat(webrtc::StatsReport::StatsValueName name)  {
		for (std::map<std::string, std::unique_ptr<ExRTCStats::Value > >::const_iterator iter
			= m_values.begin(); iter != m_values.end(); ++iter) {
			if (iter->second->name() == name) {
				return iter->second.get();
			}
		}
		return nullptr;
	}

	static std::shared_ptr<ExRTCStats> Create(const webrtc::StatsReport* report);

private:
	double m_timestamp;
	std::string m_type;
	std::string m_id;
	std::map<std::string, std::unique_ptr<ExRTCStats::Value > > m_values;
};
