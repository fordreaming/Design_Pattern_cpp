#pragma once
#include "..\AbstractFactoryPatternSelf\User.h"

class CIUser
{
public:
	CIUser(void);
	~CIUser(void);

public:
	virtual void Insert(CUser *pUser) = 0;
	virtual CUser* GetUser(int id) = 0;
};
