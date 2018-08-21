#pragma once
#ifndef _OPERATION_FACTORY_H_
#define _OPERATION_FACTORY_H_
#include "Operation.h"
#include <iostream>
#include <string>
using std::string;

class OperationFactory
{
public:
	//注意和C#的不同之处
    //C++需要通过指针进行操作
	//C#的new的作用对象可以是值类型也可以是引用类型
	static Operation *CreateOperate(char operate);

};
#endif _OPERATION_FACTORY_H_