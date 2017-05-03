// https://www.w3.org/TR/webmessaging/#the-messageevent-interfaces
#include "ExMessageEvent.h"

ExMessageEvent::ExMessageEvent(std::shared_ptr<Buffer> data, bool binary /*= false*/)
	: m_data(data)
	, m_binary(binary)
{

}

ExMessageEvent::~ExMessageEvent()
{

}

std::shared_ptr<Buffer> ExMessageEvent::data()
{
	return m_data;
}

const std::string& ExMessageEvent::origin() const
{
	return kStringEmpty;
}

const std::string& ExMessageEvent::lastEventId() const
{
	return kStringEmpty;
}

bool ExMessageEvent::binary()const
{
	return m_binary;
}
