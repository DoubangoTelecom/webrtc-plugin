// https://www.w3.org/TR/webrtc/#dom-rtcdatachannelevent

#include "stdafx.h"
#include "RTCDataChannelEvent.h"

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
