// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
#pragma once
#include "Config.h"
#include "Common.h"
#include "Buffer.h"

#include "webrtc/api/datachannelinterface.h"

class ExRTCDataChannel : public webrtc::DataChannelObserver {
public:
	ExRTCDataChannel(rtc::scoped_refptr<webrtc::DataChannelInterface> obj);
	virtual ~ExRTCDataChannel();

	const std::string label() const;
	bool ordered() const;
	RTC_nullable_ushort maxPacketLifeTime() const;
	RTC_nullable_ushort maxRetransmits() const;
	const std::string protocol() const;
	bool negotiated() const;
	RTC_nullable_ushort id() const;
	const std::string& priority() const;
	const std::string readyState() const;
	uint64_t bufferedAmount() const;
	uint64_t bufferedAmountLowThreshold() const;
	const std::string& binaryType() const;

	bool setBinaryType(const std::string& newVal);
	bool setBufferedAmountLowThreshold(unsigned long newVal);
	bool send(const Buffer* data, bool binary = true);
	void close();


	// Overrides(DataChannelObserver)
	virtual void OnStateChange() override;
	virtual void OnMessage(const webrtc::DataBuffer& buffer) override;
	virtual void OnBufferedAmountChange(uint64_t previous_amount) override;

	_inline void onopenSet(FunctionCallbackVoid callback) { m_callback_onopen = callback; }
	_inline void onerrorSet(FunctionCallbackError callback) { m_callback_onerror = callback; }
	_inline void oncloseSet(FunctionCallbackVoid callback) { m_callback_onclose = callback; }
	_inline void onmessageSet(FunctionCallbackMessage callback) { m_callback_onmessage = callback; }
	_inline void onbufferedamountlowSet(FunctionCallbackVoid callback) { m_callback_onbufferedamountlow = callback; }

private:
	FunctionCallbackVoid m_callback_onopen;
	FunctionCallbackError m_callback_onerror;
	FunctionCallbackVoid m_callback_onclose;
	FunctionCallbackMessage m_callback_onmessage;
	FunctionCallbackVoid m_callback_onbufferedamountlow;
	rtc::scoped_refptr<webrtc::DataChannelInterface> m_obj;
	std::string m_binaryType;
	uint64_t m_bufferedAmountLowThreshold;
};
