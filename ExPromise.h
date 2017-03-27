#pragma once
#include "Config.h"
#include "Common.h"

class ExMediaStream;
class ExErrorMessage;

enum ExPromiseType
{
	ExPromiseType_Unknown,
	ExPromiseType_GetUserMedia,
};

//
//	ExPromise
//
class ExPromise
{
protected:
	ExPromise(ExPromiseType eType);
public:
	virtual ~ExPromise();

	_inline ExPromiseType type() const { return m_eType; }

	virtual HRESULT then(CComPtr<IDispatch> onFulfilled);
	virtual HRESULT catchh(CComPtr<IDispatch> onRejected);

protected:
	CComPtr<IDispatch>m_callback_onRejected;
	CComPtr<IDispatch>m_callback_onFulfilled;

private:
	ExPromiseType m_eType;
};


//
//	ExPromiseGetUserMedia
//
class ExPromiseGetUserMedia : public ExPromise
{
public:
	ExPromiseGetUserMedia(std::shared_ptr<ExMediaStreamConstraints> constraints = nullptr);
	virtual ~ExPromiseGetUserMedia();

	virtual HRESULT then(CComPtr<IDispatch> onFulfilled) override;
	virtual HRESULT catchh(CComPtr<IDispatch> onRejected) override;

private:
	HRESULT Start();
	HRESULT RaiseOnFulfilled(std::shared_ptr<ExMediaStream> exStream);
	HRESULT RaiseOnRejected(std::shared_ptr<ExErrorMessage> exError);

private:
	std::shared_ptr<ExMediaStreamConstraints> m_constraints;
	std::shared_ptr<ExMediaStream> m_onFulfilledPendingStream;
	std::shared_ptr<ExErrorMessage>  m_onRejectedPendingError;
	bool m_raised;
};