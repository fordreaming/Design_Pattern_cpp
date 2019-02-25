#pragma once
#include "iuser.h"

class CAccessUser :
	public CIUser
{
public:
	CAccessUser(void);
	~CAccessUser(void);

public:
	void Insert(CUser *pUser);
	CUser* GetUser(int id);
};
