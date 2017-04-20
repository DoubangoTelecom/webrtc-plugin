#include "Common.h"
#include "ExMediaStream.h"
#include "ExMediaStreamConstraints.h"
#include "ExErrorMessage.h"
#include "ExMediaStreamTrack.h"
#include "RTCMediaConstraints.h"
#include "DoubangoAudioDeviceModule.h"

#include "webrtc/system_wrappers/include/critical_section_wrapper.h"
#include "webrtc/p2p/client/basicportallocator.h"

static rtc::Thread* _worker_thread = NULL;
static rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> _fake_peer_connection = nullptr; // TODO: "getUserMedia" fails if no PeerconnectionFactory instance exists. Why?
static rtc::scoped_refptr<webrtc::AudioDeviceModule> _fake_adm = nullptr;
static webrtc::CriticalSectionWrapper* _fake_peer_connection_cs = webrtc::CriticalSectionWrapper::CreateCriticalSection();

static const char kAutoDetectPattern[] = "";

#define kAgentHoldingProxyInfo		kAutoDetectPattern

rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> GetPeerConnectionFactory()
{
	_fake_peer_connection_cs->Enter();
	rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface> _peer = _fake_peer_connection;
	_fake_peer_connection_cs->Leave();
	return _peer;
}

rtc::scoped_refptr<webrtc::AudioDeviceModule> GetAudioDeviceModule()
{
	_fake_peer_connection_cs->Enter();
	rtc::scoped_refptr<webrtc::AudioDeviceModule> _adm = _fake_adm;
	_fake_peer_connection_cs->Leave();
	return _adm;
}

void TakeFakePeerConnectionFactory()
{
	_fake_peer_connection_cs->Enter();
	if (!_worker_thread) {
		_worker_thread = new rtc::Thread;
		if (_worker_thread) {
			_worker_thread->Start();
		}
	}
	if (!_fake_peer_connection) {
		if (!_fake_adm) {
			_fake_adm = _worker_thread->Invoke<rtc::scoped_refptr<webrtc::AudioDeviceModule>>(RTC_FROM_HERE, []() {
				return webrtc::DoubangoAudioDeviceModule::Create(-1, webrtc::AudioDeviceModule::AudioLayer::kPlatformDefaultAudio);
			});
		}
		_fake_peer_connection = webrtc::CreatePeerConnectionFactory(_worker_thread, _worker_thread, _fake_adm, NULL, NULL);
	}
	else {
		_fake_peer_connection->AddRef();
	}
	_fake_peer_connection_cs->Leave();
}

void ReleaseFakePeerConnectionFactory()
{
	_fake_peer_connection_cs->Enter();
	if (_fake_peer_connection) {
		// hack because no function to retrieve the refCount value;
		webrtc::PeerConnectionFactoryInterface* tmp = _fake_peer_connection.get();
		tmp->AddRef();
		if (tmp->Release() == 1) {
			_fake_peer_connection = NULL;
#if 0
			_port_allocator_factory = NULL;
#endif
			if (_worker_thread) {
				_worker_thread->Invoke<void>(RTC_FROM_HERE, []() {
					_fake_adm = nullptr;
				});
				delete _worker_thread, _worker_thread = NULL;
			}
		}
		else {
			_fake_peer_connection->Release();
		}
	}
	_fake_peer_connection_cs->Leave();
}

rtc::Thread* GetWorkerThread()
{
	return _worker_thread;
}

rtc::scoped_refptr<RTCMediaConstraints> BuildConstraints(const MediaConstraintSets* constraints /*= NULL*/)
{
	rtc::scoped_refptr<RTCMediaConstraints> contraints = new rtc::RefCountedObject<RTCMediaConstraints>();

	MediaConstraintSet::const_iterator it;

	if (constraints) {
		if (constraints->ideal) {
			for (it = constraints->ideal->begin(); it != constraints->ideal->end(); ++it) {
				contraints->AddOptional(it->first, it->second);
			}
		}
		if (constraints->exact) {
			for (it = constraints->exact->begin(); it != constraints->exact->end(); ++it) {
				contraints->AddMandatory(it->first, it->second);
			}
		}
	}
	return contraints;
}

webrtc::MediaStreamInterface* BuildMediaStream(const ExMediaStream* stream)
{
	if (!stream) {
		return nullptr;
	}
	return dynamic_cast<webrtc::MediaStreamInterface*>((webrtc::MediaStreamInterface*)stream->GetWrappedStream());
}

void getUserMedia(const ExMediaStreamConstraints* constraints /*= NULL*/, NavigatorUserMediaSuccessCallback successCallback /*= nullptr*/, NavigatorUserMediaErrorCallback errorCallback /*= nullptr*/)
{
	std::shared_ptr<ExMediaStream> stream(new ExMediaStream());
	if (!stream) {
		if (errorCallback) {
			std::shared_ptr<ExErrorMessage> err(new ExErrorMessage("Failed to create media stream"));
			errorCallback(err); 
		}
		return;
	}

	bool bHaveAudio = !constraints || !constraints->audio() || !constraints->audio()->isBool() || constraints->audio()->boolVal();
	bool bHaveVideo = !constraints || !constraints->video() || !constraints->video()->isBool() || constraints->video()->boolVal();

	if (bHaveAudio) {
		ExMediaStreamTrackAudio audio(NULL, constraints ? constraints->audio().get() : NULL);
		if (audio.IsValid()) {
			stream->addTrack(&audio);
		}
	}
	if (bHaveVideo) {
		ExMediaStreamTrackVideo video(NULL, constraints ? constraints->video().get() : NULL);
		if (video.IsValid()) {
			stream->addTrack(&video);
		}
	}

	if (successCallback) {
		successCallback(stream);
	}
}
