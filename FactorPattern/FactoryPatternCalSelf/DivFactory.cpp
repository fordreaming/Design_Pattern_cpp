#include "DivFactory.h"

CDivFactory::CDivFactory(void)
{
}

CDivFactory::~CDivFactory(void)
{
}

COperate* CDivFactory::CreateOperation()
{
	return new COperateDiv();
}
