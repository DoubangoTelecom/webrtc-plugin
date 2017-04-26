#include "ExPeerConnectionFactory.h"

ExPeerConnectionFactory::ExPeerConnectionFactory()
{
	m_adm = GetWorkerThread()->Invoke<rtc::scoped_refptr<webrtc::AudioDeviceModule>>(RTC_FROM_HERE, []() {
		return webrtc::DoubangoAudioDeviceModule::Create(-1, webrtc::AudioDeviceModule::AudioLayer::kPlatformDefaultAudio);
	});
	m_peerconnection_factory = webrtc::CreatePeerConnectionFactory(GetWorkerThread(), GetWorkerThread(), m_adm, nullptr, nullptr);
}

ExPeerConnectionFactory::~ExPeerConnectionFactory()
{
	GetWorkerThread()->Invoke<void>(RTC_FROM_HERE, [this]() {
		m_peerconnection_factory = nullptr;
		m_adm = nullptr;
	});
}
