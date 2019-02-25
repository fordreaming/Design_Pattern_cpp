#pragma once
#include "operate.h"

class COperateDiv :
	public COperate
{
public:
	COperateDiv(void);
	~COperateDiv(void);

public:
	int GetResult();
};
