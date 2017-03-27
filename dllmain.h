// dllmain.h : Declaration of module class.

class CrtcModule : public ATL::CAtlDllModuleT< CrtcModule >
{
public :
	DECLARE_LIBID(LIBID_rtcLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_RTC, "{C0B25A6E-BA25-4803-A628-A8BE621754D9}")
};

extern class CrtcModule _AtlModule;
