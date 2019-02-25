#pragma once
#include "IUser.h"


class CIFactory
{
public:
	CIFactory(void);
	~CIFactory(void);

public:
	virtual CIUser* CreateUser() = 0;

};
