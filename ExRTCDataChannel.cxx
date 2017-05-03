// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
#include "ExRTCDataChannel.h"
#include "ExMessageEvent.h"

ExRTCDataChannel::ExRTCDataChannel(rtc::scoped_refptr<webrtc::DataChannelInterface> obj)
	: m_obj(obj)
	, m_callback_onopen(nullptr)
	, m_callback_onerror(nullptr)
	, m_callback_onclose(nullptr)
	, m_callback_onmessage(nullptr)
	, m_callback_onbufferedamountlow(nullptr)
	// supported values: "blob" and "arraybuffer"
	// default value: "blob"
	, m_binaryType("blob")
	, m_bufferedAmountLowThreshold(8192)
{
	m_obj->RegisterObserver(this);
}

ExRTCDataChannel::~ExRTCDataChannel()
{
	m_obj->UnregisterObserver();
	m_obj = nullptr;
}

const std::string ExRTCDataChannel::label() const
{
	return m_obj->label();
}

bool ExRTCDataChannel::ordered() const
{
	return m_obj->ordered();
}

RTC_nullable_ushort ExRTCDataChannel::maxPacketLifeTime() const
{
	return m_obj->maxRetransmitTime();
}

RTC_nullable_ushort ExRTCDataChannel::maxRetransmits() const
{
	return m_obj->maxRetransmits();
}

const std::string ExRTCDataChannel::protocol() const
{
	return m_obj->protocol();
}

bool ExRTCDataChannel::negotiated() const
{
	return m_obj->negotiated();
}

RTC_nullable_ushort ExRTCDataChannel::id() const
{
	return m_obj->id();
}

const std::string& ExRTCDataChannel::priority() const
{
	RTC_DEBUG_ERROR("Not implemented");
	return kStringEmpty;
}

const std::string ExRTCDataChannel::readyState() const
{
	switch (m_obj->state()) {
	case webrtc::DataChannelInterface::DataState::kConnecting:
		return kRTCDataChannelStateConnecting;
	case webrtc::DataChannelInterface::DataState::kOpen:
		return kRTCDataChannelStateOpen;
	case webrtc::DataChannelInterface::DataState::kClosing:
		return kRTCDataChannelStateClosing;
	case webrtc::DataChannelInterface::DataState::kClosed:
		return kRTCDataChannelStateClosed;
	}
	return kStringEmpty;
}

uint64_t ExRTCDataChannel::bufferedAmount() const
{
	return m_obj->buffered_amount();
}

uint64_t ExRTCDataChannel::bufferedAmountLowThreshold() const
{
	return m_bufferedAmountLowThreshold;
}

const std::string& ExRTCDataChannel::binaryType() const
{
	return m_binaryType;
}


bool ExRTCDataChannel::setBufferedAmountLowThreshold(unsigned long newVal)
{
	m_bufferedAmountLowThreshold = static_cast<uint64_t>(newVal);
	return true;
}

bool ExRTCDataChannel::send(const Buffer* data, bool binary /*= true*/)
{
	if (data && data->ptr() && data->size()) {
		rtc::CopyOnWriteBuffer _data(reinterpret_cast<const uint8_t *>(data->ptr()), data->size());
		webrtc::DataBuffer buffer(_data, binary);
		return m_obj->Send(buffer);
	}
	return false;
}

bool ExRTCDataChannel::setBinaryType(const std::string& newVal)
{
	if (newVal.compare("blob") == 0 || newVal.compare("arraybuffer") == 0) {
		m_binaryType = newVal;
		return true;
	}
	return false;
}

void ExRTCDataChannel::close()
{
	m_obj->Close();
}


void ExRTCDataChannel::OnStateChange()
{
	switch (m_obj->state()) {
	case webrtc::DataChannelInterface::DataState::kClosed:
		if (m_callback_onclose) {
			m_callback_onclose();
		}
		break;
	case webrtc::DataChannelInterface::DataState::kOpen:
		if (m_callback_onopen) {
			m_callback_onopen();
		}
		break;
	case webrtc::DataChannelInterface::DataState::kClosing:
	case webrtc::DataChannelInterface::DataState::kConnecting:
	default:
		break;
	}
}

void ExRTCDataChannel::OnMessage(const webrtc::DataBuffer& buffer)
{
	if (m_callback_onmessage) {
		m_callback_onmessage(std::make_shared<ExMessageEvent>(
			std::make_shared<Buffer>(buffer.data.data(), buffer.data.size()), buffer.binary));
	}
}

void ExRTCDataChannel::OnBufferedAmountChange(uint64_t previous_amount)
{
	// bufferedamountlow: The RTCDataChannel object's bufferedAmount decreases from above its bufferedAmountLowThreshold to less than or equal to its bufferedAmountLowThreshold.
	if (m_callback_onbufferedamountlow) {
		if (previous_amount > m_bufferedAmountLowThreshold && m_obj->buffered_amount() <= m_bufferedAmountLowThreshold) {
			m_callback_onbufferedamountlow();
		}
	}
}
