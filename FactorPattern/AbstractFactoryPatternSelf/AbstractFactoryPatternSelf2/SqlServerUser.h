#pragma once
#include "IUser.h"
#include "..\AbstractFactoryPatternSelf\User.h"

class CSqlServerUser :
	public CIUser
{
public:
	CSqlServerUser(void);
	~CSqlServerUser(void);

public:
	void Insert(CUser *pUser);
	CUser* GetUser(int id);
};
