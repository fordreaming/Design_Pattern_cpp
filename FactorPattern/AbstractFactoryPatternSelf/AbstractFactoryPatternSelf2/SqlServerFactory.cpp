#include "SqlServerFactory.h"

CSqlServerFactory::CSqlServerFactory(void)
{
}

CSqlServerFactory::~CSqlServerFactory(void)
{
}

CIUser* CSqlServerFactory::CreateUser()
{
	return new CSqlServerUser();
}
