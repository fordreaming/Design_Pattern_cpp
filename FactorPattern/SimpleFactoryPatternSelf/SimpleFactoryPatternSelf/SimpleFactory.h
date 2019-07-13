#pragma once
#include "Operation.h"
#include "Add.h"
#include "Sub.h"
#include "Multi.h"

enum OPERATION_TYPE
{
	ADD = 1,
	SUB,
	MULTI,
};

class CSimpleFactory
{
public:
	CSimpleFactory(void);
	~CSimpleFactory(void);

public:
	COperation* CreateOperation(char *pChar);

};
