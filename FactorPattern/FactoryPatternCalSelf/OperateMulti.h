#pragma once
#include "operate.h"

class COperateMulti :
	public COperate
{
public:
	COperateMulti(void);
	~COperateMulti(void);

public:
	int GetResult();
};
