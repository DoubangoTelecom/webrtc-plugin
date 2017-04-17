#pragma once
#include "Config.h"
#include "Common.h"
#include "ExMediaDeviceInfo.h"

class ExMediaDevices {
public:
	ExMediaDevices();
	virtual ~ExMediaDevices();

	static std::shared_ptr<Sequence<ExMediaDeviceInfo> > enumerateDevices();
	static HRESULT enumerateDevices(__in CComPtr<IDispatch> spDispatch, __out CComQIPtr<IDispatchEx>& spDevices);

private:

};
