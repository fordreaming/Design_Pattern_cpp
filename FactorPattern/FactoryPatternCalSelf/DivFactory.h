#pragma once
#include "factory.h"
#include "Operate.h"
#include "OperateDiv.h"

class CDivFactory :
	public CFactory
{
public:
	CDivFactory(void);
	~CDivFactory(void);

public:
	COperate* CreateOperation();
};
