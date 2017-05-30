#include "Buffer.h"

Buffer::Buffer(const void* ptr, size_t size)
	: m_pPtr(NULL)
	, m_nSize(0)
{
	m_pPtr = malloc(size + 1);
	if (!m_pPtr) {
		RTC_DEBUG_ERROR("Failed to allocate buffer with size=%zu", size);
		return;
	}
	((char*)m_pPtr)[size] = '\0';
	if (size && ptr) {
		memcpy(m_pPtr, ptr, size);
	}
	m_nSize = size;
}

Buffer::~Buffer()
{
	RTC_SAFE_FREE(&m_pPtr);
}

bool Buffer::New(const void* ptr, size_t size, Buffer** ppObj)
{
	if (!ppObj || !size) {
		RTC_DEBUG_ERROR("Invalid argument");
		return false;
	}
	(*ppObj) = new Buffer(ptr, size);
	if (!(*ppObj) || (*ppObj)->size() != size) {
		RTC_SAFE_FREE(ppObj);
		RTC_DEBUG_ERROR("Failed to create new buffer");
		return false;
	}
	return true;
}
