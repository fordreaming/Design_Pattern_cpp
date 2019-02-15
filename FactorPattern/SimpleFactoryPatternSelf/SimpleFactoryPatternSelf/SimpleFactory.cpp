#include "SimpleFactory.h"

CSimpleFactory::CSimpleFactory(void)
{
}

CSimpleFactory::~CSimpleFactory(void)
{
}

COperation* CSimpleFactory::CreateOperation(char *pChar)
{
	COperation *oper;
	switch(*pChar)
	{
	case '+':
		oper = new COperationAdd();
		break;
	case '-':
		oper = new CSub();
		break;
	}
	return oper;
}
