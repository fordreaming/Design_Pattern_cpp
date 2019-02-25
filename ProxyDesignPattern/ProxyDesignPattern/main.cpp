#include "Persuit.h"
#include "Proxy.h"

int main()
{
	CSchoolGirl *pJiaoJiao = new CSchoolGirl();
	pJiaoJiao->m_name = "Àî½¿½¿";

	CProxy * pProxy = new CProxy(pJiaoJiao);
	pProxy->GiveDolls();
	pProxy->GiveFlowers();
	pProxy->GiveChocolate();
	return 0;

}