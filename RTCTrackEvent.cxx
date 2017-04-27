// https://www.w3.org/TR/webrtc/#dom-rtctrackevent

#include "stdafx.h"
#include "RTCTrackEvent.h"

CRTCTrackEvent::CRTCTrackEvent()
{
}

HRESULT CRTCTrackEvent::FinalConstruct()
{
	return S_OK;
}

void CRTCTrackEvent::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCTrackEvent::SetEx(std::shared_ptr<ExRTCTrackEvent> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCTrackEvent> CRTCTrackEvent::GetEx()
{
	return m_ex;
}