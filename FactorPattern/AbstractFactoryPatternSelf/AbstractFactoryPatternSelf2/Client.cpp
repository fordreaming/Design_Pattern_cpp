#include "SqlServerUser.h"
#include "SqlServerFactory.h"
#include "AccessUser.h"
#include "AccessFactory.h"

#include "IFactory.h"

int main()
{
	CUser* pUser = new CUser();
	//CIFactory* pIFactory = new CSqlServerFactory();
	CIFactory* pIFactory = new CAccessFactory();

	CIUser *pIU = pIFactory->CreateUser();
	pIU->Insert(pUser);
	pIU->GetUser(1);
	return 0;
}