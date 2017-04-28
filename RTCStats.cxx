// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
#include "stdafx.h"
#include "RTCStats.h"
#include "Utils.h"
#include "Helper.h"

static const DISPID kReservedDispIDsStart = 100;

CRTCStats::CRTCStats()
{
}

HRESULT CRTCStats::FinalConstruct()
{
	return S_OK;
}

void CRTCStats::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCStats::SetEx(std::shared_ptr<ExRTCStats> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCStats> CRTCStats::GetEx()
{
	return m_ex;
}

STDMETHODIMP CRTCStats::GetIDsOfNames(
	_In_ REFIID riid,
	_In_reads_(cNames) _Deref_pre_z_ LPOLESTR* rgszNames,
	_In_range_(0, 16384) UINT cNames,
	LCID lcid,
	_Out_ DISPID* rgdispid)
{
	if (m_ex.get() && rgszNames && *rgszNames) {
		const ExRTCStats::Value* value = m_ex->stat(Helper::ToString(std::wstring(*rgszNames)));
		if (value) {
			*rgdispid = kReservedDispIDsStart + static_cast<DISPID>(value->name());
			return S_OK;
		}
	}
	return IDispatchImpl::GetIDsOfNames(riid, rgszNames, cNames, lcid, rgdispid);
}

STDMETHODIMP CRTCStats::Invoke(
	_In_ DISPID dispidMember,
	_In_ REFIID riid,
	_In_ LCID lcid,
	_In_ WORD wFlags,
	_In_ DISPPARAMS* pdispparams,
	_Out_opt_ VARIANT* pvarResult,
	_Out_opt_ EXCEPINFO* pexcepinfo,
	_Out_opt_ UINT* puArgErr)
{
	if (dispidMember >= kReservedDispIDsStart && m_ex.get()) {
		const ExRTCStats::Value* value = m_ex->stat(static_cast<webrtc::StatsReport::StatsValueName>(dispidMember - kReservedDispIDsStart));
		if (value) {
			switch (value->value()->type()) {
			case webrtc::StatsReport::Value::Type::kInt: {
				*pvarResult = CComVariant(value->value()->int_val());
				return S_OK;
			}
			case webrtc::StatsReport::Value::Type::kInt64: {
				*pvarResult = CComVariant(value->value()->int64_val());
				return S_OK;
			}
			case webrtc::StatsReport::Value::Type::kFloat: {
				*pvarResult = CComVariant(value->value()->float_val());
				return S_OK;
			}
			case webrtc::StatsReport::Value::Type::kString: {
				CComBSTR bstr;
				RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(value->value()->string_val(), &bstr));
				*pvarResult = CComVariant(bstr);
				return S_OK;
			}
			case webrtc::StatsReport::Value::Type::kStaticString: {
				CComBSTR bstr;
				RTC_CHECK_HR_RETURN(Utils::CopyAnsiStr(value->value()->static_string_val(), &bstr));
				*pvarResult = CComVariant(bstr);
				return S_OK;
			}
			case webrtc::StatsReport::Value::Type::kBool: {
				*pvarResult = CComVariant(value->value()->bool_val());
				return S_OK;
			}
			case webrtc::StatsReport::Value::Type::kId: // WebRTC: id_val() not implemented
			default:
				RTC_DEBUG_ERROR("Invalid type: %d", value->value()->type());
				return E_FAIL;
			}
		}
	}
	return IDispatchImpl::Invoke(dispidMember, riid, lcid, wFlags, pdispparams, pvarResult, pexcepinfo, puArgErr);
}

// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
// DOMHighResTimeStamp timestamp;
STDMETHODIMP CRTCStats::get_timestamp(__out DOUBLE* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal =  static_cast<DOUBLE>(m_ex->timestamp());
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
// RTCStatsType type;
STDMETHODIMP CRTCStats::get_type(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->type(), pVal));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#rtcstats-dictionary
// DOMString id;
STDMETHODIMP CRTCStats::get_id(__out BSTR* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->id(), pVal));
	return S_OK;
}
