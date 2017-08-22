#pragma once

#define RTC_CAT_(A, B) A ## B
#define RTC_CAT(A, B) RTC_CAT_(A, B)
#define RTC_STRING_(A) #A
#define RTC_STRING(A) RTC_STRING_(A)

#if !defined(kRTC_MIMEType)
#	define kRTC_MIMEType "application/rtc-plugin"
#endif

#if !defined(kRTC_VersionMajor)
#	define kRTC_VersionMajor 1
#endif
#if !defined(kRTC_VersionMinor)
#	define kRTC_VersionMinor 3
#endif
#if !defined(kRTC_VersionMicro)
#	define kRTC_VersionMicro 0
#endif
#if !defined(kRTC_VersionString)
#	define kRTC_VersionString RTC_STRING(RTC_CAT(kRTC_VersionMajor, .)) RTC_STRING(RTC_CAT(kRTC_VersionMinor, .)) RTC_STRING(kRTC_VersionMicro)
#endif

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#ifdef _MSC_VER
#	if !defined(_CRT_SECURE_NO_WARNINGS)
#		define _CRT_SECURE_NO_WARNINGS
#	endif
#endif

#define _WINSOCKAPI_
#if !defined (NOMINMAX)
#	define NOMINMAX
#endif
#include <windows.h>

#include <iostream>
#include <string>
#include <assert.h>

#include <algorithm>
#include <limits>

// C++11
#include <functional>
#include <memory>