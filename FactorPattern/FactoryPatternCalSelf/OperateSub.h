#pragma once
#include "operate.h"

class COperateSub :
	public COperate
{
public:
	COperateSub(void);
	~COperateSub(void);

	int GetResult();
};
