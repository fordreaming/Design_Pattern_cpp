#include "MultiFactory.h"

CMultiFactory::CMultiFactory(void)
{
}

CMultiFactory::~CMultiFactory(void)
{
}

COperate* CMultiFactory::CreateOperation()
{
	return new COperateMulti();
}