#pragma once
#include "factory.h"
#include "Operate.h"
#include "OperateMulti.h"

class CMultiFactory :
	public CFactory
{
public:
	CMultiFactory(void);
	~CMultiFactory(void);

public:
	COperate* CreateOperation();
};
