#pragma once
#include "operation.h"

class CMulti :
	public COperation
{
public:
	CMulti(void);
	~CMulti(void);

	int GetResult();
};
