#pragma once

#include <atlbase.h>
#include "Config.h"
#include "Common.h"

//
//	ATLBrowserCallback
//

class ATLBrowserCallback: public BrowserCallback
{
public:
	ATLBrowserCallback(unsigned msgid, CComPtr<IDispatch> disp);
	virtual ~ATLBrowserCallback();

	RTC_DECLARE_BROWSER_OBJECT_RETAIN_RELEASE_INLINE()

	HRESULT AddDispatch(CComPtr<IDispatch> obj);
	HRESULT AddBSTR(const CComBSTR& bstr);

	virtual bool Invoke() override /*BrowserCallback::Invoke()*/;

private:
	CComPtr<IDispatch> m_disp;
	unsigned m_params_count;
	CComVariant m_params[RTC_MAX_ARGS_PARAMS];
};

//
//	ATLGetStatsBrowserCallback
//

class ATLGetStatsBrowserCallback : public ATLBrowserCallback
{
public:
	ATLGetStatsBrowserCallback(unsigned msgid, CComPtr<IDispatch> disp, std::shared_ptr<ExRTCStatsReport> report);
	virtual ~ATLGetStatsBrowserCallback();

	virtual bool Invoke() override /*ATLBrowserCallback::Invoke()*/;

private:
	std::shared_ptr<ExRTCStatsReport> m_report;
};