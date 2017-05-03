// https://www.w3.org/TR/webrtc/#rtcdtmfsender
#include "ExRTCDTMFSender.h"
#include "ExRTCDTMFToneChangeEvent.h"

ExRTCDTMFSender::ExRTCDTMFSender(rtc::scoped_refptr<webrtc::DtmfSenderInterface> obj)
	: m_obj(obj)
{
	m_obj->RegisterObserver(this);
}

ExRTCDTMFSender::~ExRTCDTMFSender()
{
	m_obj->UnregisterObserver();
	m_obj = nullptr;
}

void ExRTCDTMFSender::OnToneChange(const std::string& tone) /*override*/
{
	if (m_callback_ontonechange) {
		m_callback_ontonechange(std::make_shared<ExRTCDTMFToneChangeEvent>(tone));
	}
}

bool ExRTCDTMFSender::insertDTMF(const std::string& tones,
	unsigned long duration /*= 100*/,
	unsigned long interToneGap /*= 70*/)
{
	return m_obj->InsertDtmf(tones, static_cast<int>(duration), static_cast<int>(interToneGap));
}

std::string ExRTCDTMFSender::toneBuffer() const
{
	return m_obj->tones();
}
