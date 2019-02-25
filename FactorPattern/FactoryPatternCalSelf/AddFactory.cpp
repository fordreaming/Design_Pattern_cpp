#include "AddFactory.h"

CAddFactory::CAddFactory(void)
{
}

CAddFactory::~CAddFactory(void)
{
}

COperate* CAddFactory::CreateOperation()
{
	return new COperateAdd();
}