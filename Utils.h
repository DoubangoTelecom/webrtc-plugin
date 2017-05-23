#pragma once
#include "Config.h"
#include "Common.h"
#include "Buffer.h"
#include "ATLBrowserCallback.h"
#include "Plugin.h"

#include <atlctl.h>
#include <comutil.h>
#include <stdio.h>
#include <vector>

class Utils
{
public:
	static HRESULT ToString(__in BSTR* bstr, __out std::string & str);
	static HRESULT CopyAnsiStr(__in LPCSTR psz, __out BSTR* bstr);
	static HRESULT CopyAnsiString(__in std::string str, __out BSTR* bstr);
	static CComPtr<IDispatch> VariantToDispatch(VARIANT var);
	static BOOL VariantIsBool(__in const VARIANT &var);
	static BOOL VariantIsInteger(__in const VARIANT &var);
	static BOOL VariantIsFloat(__in const VARIANT &var);
	static BOOL VariantIsBSTR(__in const VARIANT &var);
	static BOOL VariantIsJsBLOB(__in const VARIANT &var);
	static HRESULT VariantToInteger(VARIANT var, long &integer);
	static HRESULT VariantToDouble(VARIANT var, double &val);
	static HRESULT VariantToBSTR(VARIANT var, BSTR &bstr);
	static HRESULT VariantToArray(__in const CComVariant& var, __out std::vector<CComVariant>& vecVars);
	static HRESULT DispatchGetProp(CComPtr<IDispatch> disp, LPOLESTR name, VARIANT *pVar);
	static HRESULT DispatchGetPropBOOL(__in CComPtr<IDispatch> disp, __in LPOLESTR name, __out bool &val);
	static HRESULT DispatchGetPropBSTR(__in CComPtr<IDispatch> disp, __in LPOLESTR name, __out BSTR &bstr);
	static HRESULT DispatchGetPropInteger(__in CComPtr<IDispatch> disp, __in LPOLESTR name, __out long &_long);
	static HRESULT DispatchCallJsFunction(CComPtr<IDispatch> disp, LPOLESTR name, VARIANT *pVar);
	static HRESULT CreateJsObjectEx(__in CComPtr<IDispatch> spDispatch, __in LPOLESTR className, VARIANTARG *rgvarg, UINT cArgs, __out CComQIPtr<IDispatchEx>& spObject);
	static HRESULT CreateJsObject(__in CComPtr<IDispatch> spDispatch, __in LPOLESTR className, __out CComQIPtr<IDispatchEx>& spObject);
	static HRESULT CreateJsArrayEx(__in CComPtr<IDispatch> spDispatch, __in std::vector<CComVariant> &vecValues, __in LPOLESTR arrayClassName, __out CComQIPtr<IDispatchEx>& spArray);
	static HRESULT CreateJsArray(__in CComPtr<IDispatch> spDispatch, __in std::vector<CComVariant> &vecValues, __out CComQIPtr<IDispatchEx>& spArray);
	static HRESULT BuildMediaConstraints(__in VARIANT varConstraints, __out std::shared_ptr<MediaConstraintSet>& constraints);

	static HRESULT BuildMediaConstraintsUnKnown(const std::string& name, __in VARIANT varConstraints, __out std::shared_ptr<MediaConstraintSet>& optional, __out std::shared_ptr<MediaConstraintSet>& mandatory);
	static HRESULT BuildMediaConstraintsWellKnown(const std::string& name, __in VARIANT varConstraints, __out std::shared_ptr<MediaConstraintSet>& optional, __out std::shared_ptr<MediaConstraintSet>& mandatory);
	
	static HRESULT BuildMediaStreamConstraints(__in VARIANT varConstraints, __out std::shared_ptr<ExMediaStreamConstraints> &constraints);
	static HRESULT BuildMediaConstraintsObjs(__in VARIANT varConstraints, __out std::shared_ptr<MediaConstraintSets> &constraints);
	static HRESULT BuildRTCConfiguration(__in VARIANT varConfiguration, __out std::shared_ptr<RTCConfiguration> &configuration);
	static HRESULT BuildRTCOfferAnswerOptions(__in VARIANT varOptions, __out std::shared_ptr<webrtc::PeerConnectionInterface::RTCOfferAnswerOptions> &options);

	static HRESULT BuildRTCDataChannelInit(__in VARIANT varRTCDataChannelInit, __out std::shared_ptr<RTCDataChannelInit> &configuration);
	static HRESULT BuildData(__in CComPtr<IDispatch> spDispatch, __in VARIANT varData, __out std::shared_ptr<Buffer> &data);
	static HRESULT BuildDataArray(__in CComPtr<IDispatch> spData, __in ArrayType type, __out std::shared_ptr<Buffer> &data);

	static HRESULT WrapArrayBufferIntoUint8Array(__in CComPtr<IDispatch> spDispatch, __in CComPtr<IDispatch> spArrayBuffer, __out CComPtr<IDispatch> &spUint8Array);

	static HRESULT DataChannelSendBlob(__in CComPtr<IDispatch> spDispatch, __in CComPtr<IDispatch> dataChannel, __in CComPtr<IDispatch> blob);

	static HRESULT InstallScripts(__in CComPtr<IHTMLWindow2> spWindow);
	static HRESULT UnInstallScripts(__in CComPtr<IHTMLWindow2> spWindow);

	template <typename ClassType>
	static HRESULT CreateInstanceWithRef(__out ClassType** ppObject)
	{
		CComObject<ClassType> *pObject;
		HRESULT hr = CComObject<ClassType>::CreateInstance(&pObject);
		if (SUCCEEDED(hr)) {
			pObject->AddRef();
			*ppObject = pObject;
		}
		return hr;
	}

	template <typename ClassType, typename ExType>
	static HRESULT CreateInstanceWithRef(__out ClassType** ppObject, __in std::shared_ptr<ExType> ex) {
		CComObject<ClassType> *pObject;
		HRESULT hr = CComObject<ClassType>::CreateInstance(&pObject);
		if (SUCCEEDED(hr)) {
			pObject->AddRef();
			pObject->SetEx(ex);
			*ppObject = pObject;
		}
		return hr;
	}

	template <typename InterfaceType, typename ClassType, typename ExType>
	static HRESULT QueryEx(__in VARIANT var, __out std::shared_ptr<ExType>& ex) {
		CComPtr<IDispatch> sp = Utils::VariantToDispatch(var);
		if (!sp) {
			RTC_CHECK_HR_RETURN(E_INVALIDARG);
		}
		CComPtr<InterfaceType> intf = NULL;
		RTC_CHECK_HR_RETURN(sp->QueryInterface(&intf));
		ClassType* pClazz = dynamic_cast<ClassType*>(intf.p);
		if (!pClazz) {
			RTC_CHECK_HR_RETURN(E_INVALIDARG);
		}
		ex = pClazz->GetEx();
		return S_OK;
	}

	template <typename ClassType, typename ExType>
	static HRESULT RaiseEvent(__in CComPtr<IDispatch> evt, __in int evtId, __in std::shared_ptr<ExType> exArg) {
		if (evt) {
			CComObject<ClassType>* arg;
			HRESULT _hr = Utils::CreateInstanceWithRef(&arg);
			if (SUCCEEDED(_hr)) {
				arg->SetEx(exArg);
				ATLBrowserCallback* bcb = new ATLBrowserCallback(static_cast<unsigned>(evtId), evt);
				if (bcb) {
					bcb->AddDispatch(arg);
					dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
					RTC_SAFE_RELEASE_OBJECT(&bcb);
				}
				RTC_SAFE_RELEASE(&arg);
			}
		}
		return S_OK;
	}

	template <typename ClassType>
	static HRESULT RaiseEvent(__in CComPtr<IDispatch> evt, __in int evtId) {
		if (evt) {
			CComObject<ClassType>* arg;
			HRESULT _hr = Utils::CreateInstanceWithRef(&arg);
			if (SUCCEEDED(_hr)) {
				ATLBrowserCallback* bcb = new ATLBrowserCallback(static_cast<unsigned>(evtId), evt);
				if (bcb) {
					bcb->AddDispatch(arg);
					dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
					RTC_SAFE_RELEASE_OBJECT(&bcb);
				}
				RTC_SAFE_RELEASE(&arg);
			}
		}
		return S_OK;
	}

	static HRESULT RaiseEvent(__in CComPtr<IDispatch> evt, __in int evtId, CComVariant& variant) {
		if (evt) {
			ATLBrowserCallback* bcb = new ATLBrowserCallback(static_cast<unsigned>(evtId), evt);
			if (bcb) {
				bcb->AddVariant(variant);
				dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
				RTC_SAFE_RELEASE_OBJECT(&bcb);
			}
		}
		return S_OK;
	}

	static HRESULT RaiseEventVoid(__in CComPtr<IDispatch> evt, __in int evtId) {
		if (evt) {
			ATLBrowserCallback* bcb = new ATLBrowserCallback(static_cast<unsigned>(evtId), evt);
			if (bcb) {
				dynamic_cast<AsyncEventDispatcher*>(CPlugin::Singleton())->RaiseCallback(bcb);
				RTC_SAFE_RELEASE_OBJECT(&bcb);
			}		
		}
		return S_OK;
	}

private:
	static DISPID s_funcID_WE00_dataChannelSendBlob;
	static DISPID s_funcID_WE01_wrapArrayBufferIntoUint8Array;
	static bool s_b_ScriptsInstalled;
};