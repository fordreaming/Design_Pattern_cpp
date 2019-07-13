#pragma once
#include "operation.h"

class CSub :
	public COperation
{
public:
	CSub(void);
	~CSub(void);
public:
	int GetResult();
};
