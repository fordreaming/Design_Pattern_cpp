#pragma once

class CIDepartment
{
public:
	CIDepartment(void);
	~CIDepartment(void);

public:
	virtual void Insert(CDepartment *pDepartment) = 0;
};
