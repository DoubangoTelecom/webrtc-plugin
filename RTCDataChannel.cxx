// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
#include "stdafx.h"
#include "RTCDataChannel.h"
#include "ErrorMessage.h"
#include "MessageEvent.h"
#include "Buffer.h"
#include "Utils.h"

CRTCDataChannel::CRTCDataChannel()
	: m_ex(nullptr)
	, m_callback_onopen(nullptr)
	, m_callback_onerror(nullptr)
	, m_callback_onclose(nullptr)
	, m_callback_onmessage(nullptr)
	, m_callback_onbufferedamountlow(nullptr)
{

}

HRESULT CRTCDataChannel::FinalConstruct()
{
	return S_OK;
}

void CRTCDataChannel::FinalRelease()
{
	if (m_ex.get()) {
		m_ex->onopenSet(nullptr);
		m_ex->onerrorSet(nullptr);
		m_ex->oncloseSet(nullptr);
		m_ex->onmessageSet(nullptr);
		m_ex->onbufferedamountlowSet(nullptr);

		m_ex = nullptr;
	}
}

void CRTCDataChannel::SetEx(std::shared_ptr<ExRTCDataChannel> ex)
{
	if ((m_ex = ex).get()) {
		m_ex->onopenSet(std::bind(&CRTCDataChannel::onopen, this));
		m_ex->onerrorSet(std::bind(&CRTCDataChannel::onerror, this, std::placeholders::_1));
		m_ex->oncloseSet(std::bind(&CRTCDataChannel::onclose, this));
		m_ex->onmessageSet(std::bind(&CRTCDataChannel::onmessage, this, std::placeholders::_1));
		m_ex->onbufferedamountlowSet(std::bind(&CRTCDataChannel::onbufferedamountlow, this));
	}
}

std::shared_ptr<ExRTCDataChannel> CRTCDataChannel::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute USVString           label;
STDMETHODIMP CRTCDataChannel::get_label(__out BSTR* USVString)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->label(), USVString));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute boolean             ordered;
STDMETHODIMP CRTCDataChannel::get_ordered(__out VARIANT_BOOL* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->ordered() ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute unsigned short?     maxPacketLifeTime;
STDMETHODIMP CRTCDataChannel::get_maxPacketLifeTime(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = (m_ex->maxPacketLifeTime() == RTC_nullable_ushort_null)
		? CComVariant(NULL)
		: CComVariant(static_cast<USHORT>(m_ex->maxPacketLifeTime()));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute unsigned short?     maxRetransmits;
STDMETHODIMP CRTCDataChannel::get_maxRetransmits(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = (m_ex->maxRetransmits() == RTC_nullable_ushort_null)
		? CComVariant(NULL)
		: CComVariant(static_cast<USHORT>(m_ex->maxRetransmits()));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute USVString           protocol;
STDMETHODIMP CRTCDataChannel::get_protocol(__out BSTR* USVString)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->protocol(), USVString));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute boolean             negotiated;
STDMETHODIMP CRTCDataChannel::get_negotiated(__out VARIANT_BOOL* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = m_ex->negotiated() ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute unsigned short?     id;
STDMETHODIMP CRTCDataChannel::get_id(__out VARIANT* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = (m_ex->id() == RTC_nullable_ushort_null)
		? CComVariant(NULL)
		: CComVariant(static_cast<USHORT>(m_ex->id()));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute RTCPriorityType     priority;
STDMETHODIMP CRTCDataChannel::get_priority(__out BSTR* RTCPriorityType)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->priority(), RTCPriorityType));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute RTCDataChannelState readyState;
STDMETHODIMP CRTCDataChannel::get_readyState(__out BSTR* RTCDataChannelState)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->readyState(), RTCDataChannelState));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// readonly attribute unsigned long       bufferedAmount;
STDMETHODIMP CRTCDataChannel::get_bufferedAmount(__out ULONG64* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = static_cast<ULONG64>(m_ex->bufferedAmount());
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute unsigned long       bufferedAmountLowThreshold;
STDMETHODIMP CRTCDataChannel::get_bufferedAmountLowThreshold(__out ULONG64* pVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*pVal = static_cast<ULONG64>(m_ex->bufferedAmountLowThreshold());
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute unsigned long       bufferedAmountLowThreshold;
STDMETHODIMP CRTCDataChannel::put_bufferedAmountLowThreshold(__in ULONG64 newVal)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	return m_ex->setBufferedAmountLowThreshold(static_cast<unsigned long>(newVal))
		? S_OK
		: E_FAIL;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute DOMString           binaryType;
STDMETHODIMP CRTCDataChannel::get_binaryType(__out BSTR* DOMString)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	RTC_CHECK_HR_RETURN(Utils::CopyAnsiString(m_ex->binaryType(), DOMString));
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute DOMString           binaryType;
STDMETHODIMP CRTCDataChannel::put_binaryType(__in BSTR bstrDOMString)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::string strDOMString;
	RTC_CHECK_HR_RETURN(Utils::ToString(&bstrDOMString, strDOMString));
	return m_ex->setBinaryType(strDOMString)
		? S_OK
		: E_FAIL;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onopen;
STDMETHODIMP CRTCDataChannel::get_onopen(__out VARIANT* varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*varEventHandler = CComVariant(m_callback_onopen);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onopen;
STDMETHODIMP CRTCDataChannel::put_onopen(__in VARIANT varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onopen = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onerror;
STDMETHODIMP CRTCDataChannel::get_onerror(__out VARIANT* varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*varEventHandler = CComVariant(m_callback_onerror);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onerror;
STDMETHODIMP CRTCDataChannel::put_onerror(__in VARIANT varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onerror = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onclose;
STDMETHODIMP CRTCDataChannel::get_onclose(__out VARIANT* varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*varEventHandler = CComVariant(m_callback_onclose);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onclose;
STDMETHODIMP CRTCDataChannel::put_onclose(__in VARIANT varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onclose = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onmessage;
STDMETHODIMP CRTCDataChannel::get_onmessage(__out VARIANT* varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*varEventHandler = CComVariant(m_callback_onmessage);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onmessage;
STDMETHODIMP CRTCDataChannel::put_onmessage(__in VARIANT varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onmessage = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onbufferedamountlow;
STDMETHODIMP CRTCDataChannel::get_onbufferedamountlow(__out VARIANT* varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	*varEventHandler = CComVariant(m_callback_onbufferedamountlow);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// attribute EventHandler        onbufferedamountlow;
STDMETHODIMP CRTCDataChannel::put_onbufferedamountlow(__in VARIANT varEventHandler)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_callback_onbufferedamountlow = Utils::VariantToDispatch(varEventHandler);
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// void close();
STDMETHODIMP CRTCDataChannel::close()
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	m_ex->close();
	return S_OK;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel
// void send(USVString data);
// void send(Blob data);
// void send(ArrayBuffer data);
// void send(ArrayBufferView data);
STDMETHODIMP CRTCDataChannel::send(__in VARIANT varData)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComPtr<IDispatch> spDispatch;
	RTC_CHECK_HR_RETURN(CPlugin::Singleton()->GetDispatch(spDispatch));

	if (Utils::VariantIsJsBLOB(varData)) {
		RTC_CHECK_HR_RETURN(Utils::DataChannelSendBlob(spDispatch, this, Utils::VariantToDispatch(varData)));
	}
	else {
		HRESULT hr;
		std::shared_ptr<Buffer> data;
		RTC_CHECK_HR_RETURN(hr = Utils::BuildData(spDispatch, varData, data));
		hr = m_ex->send(data.get(), varData.vt != VT_BSTR) ? S_OK : E_FAIL;
		RTC_CHECK_HR_RETURN(hr);
	}

	return S_OK;
}

// Not part of the std.
STDMETHODIMP CRTCDataChannel::addEventListener(__in BSTR bstrType, __in_opt VARIANT listenerCallback, __in_opt VARIANT useCapture)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::string strType;
	RTC_CHECK_HR_RETURN(Utils::ToString(&bstrType, strType));
	// TODO(dmi): not correct, use array and add new listenerCallback
	if (strType.compare("open")) {
		m_callback_onopen = Utils::VariantToDispatch(listenerCallback);
	}
	else if (strType.compare("bufferedamountlow")) {
		m_callback_onbufferedamountlow = Utils::VariantToDispatch(listenerCallback);
	}
	else if (strType.compare("message")) {
		m_callback_onmessage = Utils::VariantToDispatch(listenerCallback);
	}
	else if (strType.compare("error")) {
		m_callback_onerror = Utils::VariantToDispatch(listenerCallback);
	}
	else if (strType.compare("close")) {
		m_callback_onclose = Utils::VariantToDispatch(listenerCallback);
	}
	else {
		RTC_CHECK_HR_RETURN(E_NOTIMPL);
	}
	return S_OK;
}

// Not part of the std.
STDMETHODIMP CRTCDataChannel::removeEventListener(__in BSTR bstrType, __in_opt VARIANT listenerCallback, __in_opt VARIANT useCapture)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	std::string strType;
	RTC_CHECK_HR_RETURN(Utils::ToString(&bstrType, strType));
	// TODO(dmi): not correct, use array and remove item with event = listenerCallback
	if (strType.compare("open")) {
		m_callback_onopen = nullptr;
	}
	else if (strType.compare("message")) {
		m_callback_onmessage = nullptr;
	}
	else if (strType.compare("bufferedamountlow")) {
		m_callback_onbufferedamountlow = nullptr;
	}
	else if (strType.compare("error")) {
		m_callback_onerror = nullptr;
	}
	else if (strType.compare("close")) {
		m_callback_onclose = nullptr;
	}
	else {
		RTC_CHECK_HR_RETURN(E_NOTIMPL);
	}
	return S_OK;
}

void CRTCDataChannel::onopen()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onopen, RTC_WM_SUCCESS)));
}

void CRTCDataChannel::onerror(std::shared_ptr<ExErrorMessage> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CErrorMessage, ExErrorMessage>(m_callback_onerror, RTC_WM_ERROR, e)));
}

void CRTCDataChannel::onclose()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onclose, RTC_WM_SUCCESS)));
}

void CRTCDataChannel::onmessage(std::shared_ptr<ExMessageEvent> e)
{
	RTC_CHECK_HR_NOP((Utils::RaiseEvent<CMessageEvent, ExMessageEvent>(m_callback_onmessage, RTC_WM_SUCCESS, e)));
}

void CRTCDataChannel::onbufferedamountlow()
{
	RTC_CHECK_HR_NOP((Utils::RaiseEventVoid(m_callback_onbufferedamountlow, RTC_WM_SUCCESS)));
}
