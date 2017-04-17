// https://www.w3.org/TR/webrtc/#dom-rtcdatachannel

#include "stdafx.h"
#include "RTCDataChannel.h"

CRTCDataChannel::CRTCDataChannel()
{

}

HRESULT CRTCDataChannel::FinalConstruct()
{
	return S_OK;
}

void CRTCDataChannel::FinalRelease()
{
	m_ex = nullptr;
}

void CRTCDataChannel::SetEx(std::shared_ptr<ExRTCDataChannel> ex)
{
	m_ex = ex;
}

std::shared_ptr<ExRTCDataChannel> CRTCDataChannel::GetEx()
{
	return m_ex;
}
