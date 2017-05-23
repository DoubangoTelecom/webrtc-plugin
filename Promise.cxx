// https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/Promise

#include "stdafx.h"
#include "Promise.h"
#include "Plugin.h"
#include "Utils.h"
#include "ErrorMessage.h"
#include "ATLBrowserCallback.h"

CPromise::CPromise()
	: m_ex(nullptr)
{

}

HRESULT CPromise::FinalConstruct()
{
	return S_OK;
}

void CPromise::FinalRelease()
{
	m_ex = nullptr;
}

void CPromise::SetEx(std::shared_ptr<ExPromiseBase> ex)
{
	m_ex = ex;
}

// Used to hack 'catch' method which is a reserved keyword
STDMETHODIMP CPromise::GetIDsOfNames(
	_In_ REFIID riid,
	_In_reads_(cNames) _Deref_pre_z_ LPOLESTR* rgszNames,
	_In_range_(0, 16384) UINT cNames,
	LCID lcid,
	_Out_ DISPID* rgdispid)
{
	if (rgszNames && *rgszNames && _wcsicmp(*rgszNames, TEXT("catch")) == 0) {
		*rgdispid = 2; // same Id as in "rtc.idl"
		return S_OK;
	}
	return IDispatchImpl::GetIDsOfNames(riid, rgszNames, cNames, lcid, rgdispid);
}

// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise/then
STDMETHODIMP CPromise::then(__in VARIANT onFulfilled, __in_opt VARIANT onRejected, __out VARIANT* pThePromise)
{
	if (m_ex.get()) {
		std::shared_ptr<ExPromiseChild> exChild = m_ex->then(Utils::VariantToDispatch(onFulfilled), Utils::VariantToDispatch(onRejected));
		CComObject<CPromise>* promiseChild;
		RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&promiseChild, exChild));
		*pThePromise = CComVariant(promiseChild);
	}
	return S_OK;
}

// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise/catch
STDMETHODIMP CPromise::catchh(__in_opt VARIANT onRejected, __out VARIANT* pThePromise) // 'catch' is reserved name
{
	if (m_ex.get()) {
		std::shared_ptr<ExPromiseChild> exChild = m_ex->catchh(Utils::VariantToDispatch(onRejected));
		CComObject<CPromise>* promiseChild;
		RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&promiseChild, exChild));
		*pThePromise = CComVariant(promiseChild);
	}
	return S_OK;
}

STDMETHODIMP CPromise::toString(__out BSTR* String)
{
	if (m_ex.get()) {
		return Utils::CopyAnsiStr("IPromise", String);
	}
	return E_POINTER;
}
