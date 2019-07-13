#pragma once
#include "User.h"

class CSqlServerUser
{
public:
	CSqlServerUser(void);
	~CSqlServerUser(void);

public:
	void Insert(CUser *pUser);
	CUser* GetUser(int id);
};
