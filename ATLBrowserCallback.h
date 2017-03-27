#pragma once

#include <atlbase.h>
#include "Config.h"
#include "Common.h"

class _AsyncEventToken;

class ATLBrowserCallback: public BrowserCallback
{
public:
	ATLBrowserCallback(unsigned msgid, CComPtr<IDispatch> disp);
	virtual ~ATLBrowserCallback();

	RTC_DECLARE_BROWSER_OBJECT_RETAIN_RELEASE_INLINE()

	HRESULT AddDispatch(CComPtr<IDispatch> obj);
	HRESULT AddBSTR(const CComBSTR& bstr);

	// BrowserCallback implementation
	virtual bool Invoke() override;

private:
	CComPtr<IDispatch> m_disp;
	unsigned m_params_count;
	CComVariant m_params[RTC_MAX_ARGS_PARAMS];
};
