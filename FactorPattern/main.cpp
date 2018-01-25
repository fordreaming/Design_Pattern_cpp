#include <iostream>
#include "OperationFactory.h"
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"

using namespace std;

int main()
{
	Operation *oper;
	oper = OperationFactory::CreateOperate('+');
	oper->m_numberA = 1;
	oper->m_numberB = 2;
	double result = oper->GetResult();
	return 0;
}