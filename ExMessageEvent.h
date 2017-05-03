// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
#pragma once
#include "config.h"
#include "Common.h"
#include "Buffer.h"

class ExMessageEvent
{
public:
	ExMessageEvent(std::shared_ptr<Buffer> data, bool binary = false);
	virtual ~ExMessageEvent();

	std::shared_ptr<Buffer> data();
	const std::string& origin() const;
	const std::string& lastEventId() const;
	bool binary()const;

private:
	std::shared_ptr<Buffer> m_data;
	bool m_binary;
};
