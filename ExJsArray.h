#pragma once
#include "Config.h"
#include <atlctl.h>
#include <comutil.h>

class ExJsArray {
public:
	ExJsArray(CComQIPtr<IDispatchEx>& spJsArray);
	virtual ~ExJsArray();

	_inline CComQIPtr<IDispatchEx>& spJsArray() { return m_spJsArray; }

private:
	CComQIPtr<IDispatchEx> m_spJsArray;
};
