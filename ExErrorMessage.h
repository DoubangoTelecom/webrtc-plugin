#pragma once
#include "Config.h"

class ExErrorMessage {
public:
	ExErrorMessage(const std::string& name);
	virtual ~ExErrorMessage();

	_inline const std::string& name()const { return m_Name; }

private:
	std::string m_Name;
};
