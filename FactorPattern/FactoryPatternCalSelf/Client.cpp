#include <iostream>
#include "Factory.h"
#include "AddFactory.h"
#include "SubFactory.h"
#include "MultiFactory.h"

int main()
{
	//CFactory *pOperFactory = new CAddFactory;
	//CFactory *pOperFactory = new CSubFactory;
	CFactory *pOperFactory = new CMultiFactory;
	COperate *pOper = pOperFactory->CreateOperation();

	pOper->m_numA = 1;
	pOper->m_numB = 2;

	int result = pOper->GetResult();
	return 0;
}