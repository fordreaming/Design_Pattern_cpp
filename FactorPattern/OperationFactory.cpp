#include "OperationFactory.h"
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"

Operation  *OperationFactory::CreateOperate(char operate)
{
	Operation *oper;
	switch(operate)
	{
	case '+':
		//C#的new的作用对象可以是值类型也可以是引用类型
		//C#               Operation oper = new Operation(); 
		//c++              Operation *oper = new Operation;   
			oper = new OperationAdd;
			break;
	case '-':
			oper = new OperationSub;
			break;
	case '*':
			oper = new OperationMul;
			break;
	case '/':
			oper = new OperationDiv;
			break;
	}
	return oper;
}