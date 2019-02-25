#pragma once
#include "ifactory.h"
#include "SqlServerUser.h"

class CSqlServerFactory :
	public CIFactory
{
public:
	CSqlServerFactory(void);
	~CSqlServerFactory(void);

public:
	CIUser* CreateUser();
};
