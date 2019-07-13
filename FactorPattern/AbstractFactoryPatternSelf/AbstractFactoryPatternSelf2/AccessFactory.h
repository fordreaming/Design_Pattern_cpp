#pragma once
#include "ifactory.h"
#include "AccessUser.h"

class CAccessFactory :
	public CIFactory
{
public:
	CAccessFactory(void);
	~CAccessFactory(void);

public:
	CIUser* CreateUser();
};
