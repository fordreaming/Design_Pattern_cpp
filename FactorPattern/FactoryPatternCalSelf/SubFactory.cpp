#include "SubFactory.h"

CSubFactory::CSubFactory(void)
{
}

CSubFactory::~CSubFactory(void)
{
}

COperate* CSubFactory::CreateOperation()
{
	return new COperateSub;
}
