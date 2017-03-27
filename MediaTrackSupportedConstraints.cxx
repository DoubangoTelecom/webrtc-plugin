// https://www.w3.org/TR/mediacapture-streams/#idl-def-MediaTrackSupportedConstraints

#include "stdafx.h"
#include "MediaTrackSupportedConstraints.h"

CMediaTrackSupportedConstraints::CMediaTrackSupportedConstraints()
{
}

HRESULT CMediaTrackSupportedConstraints::FinalConstruct()
{
	return S_OK;
}

void CMediaTrackSupportedConstraints::FinalRelease()
{
}


STDMETHODIMP CMediaTrackSupportedConstraints::get_width(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_height(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_aspectRatio(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_frameRate(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_facingMode(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_volume(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_sampleRate(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_sampleSize(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_echoCancellation(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_latency(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_channelCount(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_deviceId(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}

STDMETHODIMP CMediaTrackSupportedConstraints::get_groupId(__out VARIANT_BOOL* pVal)
{
	*pVal = VARIANT_TRUE;
	return S_OK;
}
