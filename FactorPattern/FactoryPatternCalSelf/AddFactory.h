#pragma once
#include "Factory.h"
#include "OperateAdd.h"

class CAddFactory :
	public CFactory
{
public:
	CAddFactory(void);
	~CAddFactory(void);

public:
	COperate* CreateOperation();
};
