#include "AccessFactory.h"

CAccessFactory::CAccessFactory(void)
{
}

CAccessFactory::~CAccessFactory(void)
{
}

CIUser* CAccessFactory::CreateUser()
{
	return new CAccessUser();
}
