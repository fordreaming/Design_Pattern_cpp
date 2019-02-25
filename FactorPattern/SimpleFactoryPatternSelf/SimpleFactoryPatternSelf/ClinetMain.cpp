#include "SimpleFactory.h"

int main()
{
	CSimpleFactory simpleFactory;
	COperation *pOper;
	//pOper = simpleFactory.CreateOperation("-");
	pOper = simpleFactory.CreateOperation("*");
	pOper->m_numA = 1;
	pOper->m_numB = 2;
	int test = pOper->GetResult();
	return 0;
}