#include "SqlServerUser.h"

int main()
{
	CUser* pUser = new CUser();
	CSqlServerUser *pSqlServer = new CSqlServerUser();
	pSqlServer->Insert(pUser);
	pSqlServer->GetUserId(1);
	return 0;
}