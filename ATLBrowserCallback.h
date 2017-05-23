#pragma once

#include <atlbase.h>
#include "Config.h"
#include "Common.h"

typedef std::function<void(CComVariant& retVal)> FunctionCallbackAtlInvoked;

//
//	ATLBrowserCallback
//

class ATLBrowserCallback: public BrowserCallback
{
public:
	ATLBrowserCallback(unsigned msgid, CComPtr<IDispatch> spCallback, FunctionCallbackAtlInvoked cbInvoked = nullptr);
	virtual ~ATLBrowserCallback();

	RTC_DECLARE_BROWSER_OBJECT_RETAIN_RELEASE_INLINE()

	HRESULT AddDispatch(CComPtr<IDispatch> obj);
	HRESULT AddBSTR(const CComBSTR& bstr);
	HRESULT AddVariant(const CComVariant& variant);

	_inline void SetCbInvoked(FunctionCallbackAtlInvoked cbInvoked) {
		m_cbInvoked = cbInvoked;
	}
	_inline void SetCallback(CComPtr<IDispatch> spCallback) {
		m_spCallback = spCallback;
	}

	virtual bool Invoke() override /*BrowserCallback::Invoke()*/;

	_inline CComPtr<IDispatch> callback() { return m_spCallback; }
	_inline CComVariant& ret() { return m_ret; }
	_inline const bool& isInvoked()const { return m_bInvoked; }

private:
	CComPtr<IDispatch> m_spCallback;
	CComVariant m_ret;
	unsigned m_params_count;
	CComVariant m_params[RTC_MAX_ARGS_PARAMS];
	FunctionCallbackAtlInvoked m_cbInvoked;
	bool m_bInvoked;
};
