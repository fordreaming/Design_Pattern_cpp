#pragma once
#include "Operate.h"
class CFactory
{
public:
	CFactory(void);
	~CFactory(void);
public:
	virtual COperate* CreateOperation() = 0;
};
