#pragma once
#include "config.h"
#include "Common.h"
#include "DoubangoAudioDeviceModule.h"

class ExPeerConnectionFactory
{
public:
	ExPeerConnectionFactory();
	ExPeerConnectionFactory(rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> factory, rtc::scoped_refptr<webrtc::AudioDeviceModule> adm);
	virtual ~ExPeerConnectionFactory();

	rtc::scoped_refptr<webrtc::AudioDeviceModule> adm() { return m_adm; }
	rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> factory() { return m_peerconnection_factory; }
private:
	rtc::scoped_refptr<webrtc::AudioDeviceModule> m_adm;
	rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> m_peerconnection_factory;
};
