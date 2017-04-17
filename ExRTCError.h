// https://www.w3.org/TR/webrtc/#rtcerror-object
#pragma once
#include "Config.h"

class ExRTCError {
public:
	ExRTCError(const std::string& name, const std::string& message = "");
	virtual ~ExRTCError();

	_inline const std::string& name()const { return m_Name; }
	_inline const std::string& message()const { return m_Message; }
	_inline const std::string& errorDetail()const { return m_ErrorDetail; }
	_inline int sdpLineNumber()const { return m_SdpLineNumber; }
	_inline int httpRequestStatusCode()const { return m_HttpRequestStatusCode; }

	_inline const std::string toString()const {
		return m_Name + std::string(",")
			+ m_Message + std::string(",")
			+ m_ErrorDetail + std::string(",");
	}

	_inline void setErrorDetail(const std::string& errorDetail) {
		m_ErrorDetail = errorDetail;
	}
	_inline void setSdpLineNumber(int sdpLineNumber) {
		m_SdpLineNumber = sdpLineNumber;
	}
	_inline void setHttpRequestStatusCode(int httpRequestStatusCode) {
		m_HttpRequestStatusCode = httpRequestStatusCode;
	}

private:
	std::string m_Name;
	std::string m_Message;
	std::string m_ErrorDetail;
	int m_SdpLineNumber;
	int m_HttpRequestStatusCode;
};
