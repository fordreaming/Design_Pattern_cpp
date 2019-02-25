#pragma once
#include "factory.h"
#include "OperateSub.h"

class CSubFactory :
	public CFactory
{
public:
	CSubFactory(void);
	~CSubFactory(void);

	COperate* CreateOperation();
};
