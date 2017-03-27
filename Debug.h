#pragma once

#if !defined(RTC_DEBUG_LEVEL)
#	define RTC_DEBUG_LEVEL RTC_DEBUG_LEVEL_ERROR
#endif

#define RTC_DEBUG_LEVEL_INFO			4
#define RTC_DEBUG_LEVEL_WARN			3
#define RTC_DEBUG_LEVEL_ERROR		2
#define RTC_DEBUG_LEVEL_FATAL		1

/* INFO */
#if RTC_DEBUG_LEVEL >= DEBUG_LEVEL_INFO
#	define RTC_DEBUG_INFO(FMT, ...) fprintf(stderr, "*INFO: " FMT "\n", ##__VA_ARGS__);
#else
#	define RTC_DEBUG_INFO(FMT, ...)
#endif

/* WARN */
#if RTC_DEBUG_LEVEL >= DEBUG_LEVEL_WARN
#	define RTC_DEBUG_WARN(FMT, ...) fprintf(stderr, "**WARN: function: \"%s()\" \nfile: \"%s\" \nline: \"%u\" \nMSG: " FMT "\n", __FUNCTION__,  __FILE__, __LINE__, ##__VA_ARGS__);
#else
#	define RTC_DEBUG_WARN(FMT, ...)
#endif

/* WARN */
#if RTC_DEBUG_LEVEL >= DEBUG_LEVEL_ERROR
#	define RTC_DEBUG_ERROR(FMT, ...) fprintf(stderr, "**ERROR: function: \"%s()\" \nfile: \"%s\" \nline: \"%u\" \nMSG: " FMT "\n", __FUNCTION__,  __FILE__, __LINE__, ##__VA_ARGS__);
#else
#	define RTC_DEBUG_ERROR(FMT, ...)
#endif

/* FATAL */
#if RTC_DEBUG_LEVEL >= DEBUG_LEVEL_FATAL
#	define RTC_DEBUG_FATAL(FMT, ...) fprintf(stderr, "**FATAL: function: \"%s()\" \nfile: \"%s\" \nline: \"%u\" \nMSG: " FMT "\n", __FUNCTION__,  __FILE__, __LINE__, ##__VA_ARGS__);
#else
#	define RTC_DEBUG_FATAL(FMT, ...)
#endif
