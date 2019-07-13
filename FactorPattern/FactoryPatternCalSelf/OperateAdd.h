#pragma once
#include "operate.h"

class COperateAdd :
	public COperate
{
public:
	COperateAdd(void);
	~COperateAdd(void);

public:
	int GetResult();
};
