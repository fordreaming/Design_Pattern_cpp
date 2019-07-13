#pragma once
//#include "Add.h"

class COperation
{
public:
	int m_numA;
	int m_numB;
public:
	COperation(void);
	~COperation(void);
	virtual int GetResult() = 0;
};
