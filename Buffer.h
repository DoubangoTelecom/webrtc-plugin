#pragma once
#include "Config.h"
#include "Common.h"

class Buffer
{
public:
	Buffer(const void* ptr, size_t size);
	virtual ~Buffer();
	_inline const void* ptr() const {
		return m_pPtr;
	}
	_inline size_t size() const {
		return m_nSize;
	}

	static bool New(const void* ptr, size_t size, Buffer** ppObj);

private:
	void* m_pPtr;
	size_t m_nSize;
};
