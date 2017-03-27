#include "stdafx.h"
#include "resource.h"
#include "rtc_i.h"
#include "dllmain.h"

CrtcModule _AtlModule;

// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
