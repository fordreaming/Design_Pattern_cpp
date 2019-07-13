#include "SqlServerUser.h"

CSqlServerUser::CSqlServerUser(void)
{
}

CSqlServerUser::~CSqlServerUser(void)
{
}

void CSqlServerUser::Insert(CUser *pUser)
{
	printf("在sqlServer user表中增加一条记录\n");
}

CUser* CSqlServerUser::GetUser(int id)
{
	printf("在sqlServer中根据user id得到user表中一条记录\n");
	return 0;
}