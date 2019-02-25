#pragma once
#include "idepartment.h"

class CSqlServerDepartment :
	public CIDepartment
{
public:
	CSqlServerDepartment(void);
	~CSqlServerDepartment(void);

public:
	void Insert(CDepartment *pDepartment);
};
