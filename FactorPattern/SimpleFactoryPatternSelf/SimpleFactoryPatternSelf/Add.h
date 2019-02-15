#pragma once
#include "Operation.h"
#include "Add.h"

class COperationAdd :public COperation
{
public:
	COperationAdd(void);
	~COperationAdd(void);
public:
	int GetResult();
};
