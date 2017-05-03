// https://www.w3.org/TR/webrtc/#dom-rtcdatachannelevent

#include "stdafx.h"
#include "RTCDataChannelEvent.h"
#include "RTCDataChannel.h"
#include "Utils.h"

CRTCDataChannelEvent::CRTCDataChannelEvent()
{

}

HRESULT CRTCDataChannelEvent::FinalConstruct()
{
	return S_OK;
}

void CRTCDataChannelEvent::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCDataChannelEvent::SetEx(std::shared_ptr<ExRTCDataChannelEvent> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCDataChannelEvent> CRTCDataChannelEvent::GetEx()
{
	return m_ex;
}

// https://www.w3.org/TR/webrtc/#dom-rtcdatachannelevent
// readonly attribute RTCDataChannel channel;
STDMETHODIMP CRTCDataChannelEvent::get_channel(__out VARIANT* varRTCDataChannel)
{
	if (!m_ex.get()) {
		RTC_CHECK_HR_RETURN(E_POINTER);
	}
	CComObject<CRTCDataChannel>* dataChannel;
	RTC_CHECK_HR_RETURN(Utils::CreateInstanceWithRef(&dataChannel, m_ex->channel()));
	*varRTCDataChannel = CComVariant(dataChannel);
	return S_OK;
}
