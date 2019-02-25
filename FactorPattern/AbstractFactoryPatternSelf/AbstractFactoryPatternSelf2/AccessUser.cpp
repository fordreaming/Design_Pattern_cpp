#include "AccessUser.h"

CAccessUser::CAccessUser(void)
{
}

CAccessUser::~CAccessUser(void)
{
}

void CAccessUser::Insert(CUser *pUser)
{
	printf("在accessServer user表中增加一条记录\n");
}

CUser* CAccessUser::GetUser(int id)
{
	printf("在accessServer中根据user id得到user表中一条记录\n");
	return 0;
}
