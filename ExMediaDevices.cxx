#include "stdafx.h"
#include "ExMediaDevices.h"
#include "Utils.h"
#include "MediaDeviceInfo.h"

#include "webrtc/modules/video_capture/video_capture_factory.h"

ExMediaDevices::ExMediaDevices()
{

}

ExMediaDevices::~ExMediaDevices()
{

}

std::shared_ptr<Sequence<ExMediaDeviceInfo> > ExMediaDevices::enumerateDevices()
{
	std::shared_ptr<Sequence<ExMediaDeviceInfo> > devices(new Sequence<ExMediaDeviceInfo>());
	std::shared_ptr<ExMediaDeviceInfo> device;

	//
	//	Video
	//
	std::unique_ptr<webrtc::VideoCaptureModule::DeviceInfo> info(webrtc::VideoCaptureFactory::CreateDeviceInfo());
	if (info) {
		int num_devices = info->NumberOfDevices();
		for (int i = 0; i < num_devices; ++i) {
			static const uint32_t kSize = 1024;
			char name[kSize] = { 0 };
			char id[kSize] = { 0 };
			if (info->GetDeviceName(i, name, kSize, id, kSize) != -1) {
				device = std::shared_ptr<ExMediaDeviceInfo>(new ExMediaDeviceInfo(id, kMediaDeviceKindVideoInput, name, std::to_string(i)));
				if (device.get()) {
					devices->Add(device);
				}
			}
		}
	}

	//
	//	Audio
	//
	rtc::scoped_refptr<webrtc::AudioDeviceModule> adm = GetAudioDeviceModule();
	if (adm) {
		char name[webrtc::kAdmMaxDeviceNameSize];
		char guid[webrtc::kAdmMaxGuidSize];
		const int16_t playOutDevices = adm->PlayoutDevices();
		for (int16_t i = 0; i < playOutDevices; ++i) {
			if (adm->PlayoutDeviceName(i, name, guid) == 0) {
				device = std::shared_ptr<ExMediaDeviceInfo>(new ExMediaDeviceInfo(guid, kMediaDeviceKindAudioOutput, name, std::to_string(i)));
				if (device.get()) {
					devices->Add(device);
				}
			}
		}
		const int16_t recordingDevices = adm->RecordingDevices();
		for (int16_t i = 0; i < recordingDevices; ++i) {
			if (adm->RecordingDeviceName(i, name, guid) == 0) {
				device = std::shared_ptr<ExMediaDeviceInfo>(new ExMediaDeviceInfo(guid, kMediaDeviceKindAudioInput, name, std::to_string(i)));
				if (device.get()) {
					devices->Add(device);
				}
			}
		}
	}

	return devices;
}

HRESULT ExMediaDevices::enumerateDevices(__in CComPtr<IDispatch> spDispatch, __out CComQIPtr<IDispatchEx>& spDevices)
{
	std::shared_ptr<Sequence<ExMediaDeviceInfo> > devices = ExMediaDevices::enumerateDevices();

	HRESULT hr = S_OK;

	std::vector<CComVariant> vect;
	if (devices) {
		for (size_t i = 0; i < devices->values.size(); ++i) {
			if (!devices->values[i]) {
				continue;
			}
			CComObject<CMediaDeviceInfo>* device;
			hr = Utils::CreateInstanceWithRef(&device, devices->values[i]);
			if (SUCCEEDED(hr)) {
				vect.push_back(CComVariant(device));
				RTC_SAFE_RELEASE(&device);
			}
		}
	}

	RTC_CHECK_HR_RETURN(hr = Utils::CreateJsArray(spDispatch, vect, spDevices));

	return hr;
}
