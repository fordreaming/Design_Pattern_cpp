/******************************************************** 
	* @file    : main.cpp
	* @brief   : 操作简单工厂模式的主函数
	* @details : 
	* @author  : fordreaming1@yeah.net
	* @date    : 2019-1-23
*********************************************************/

#include <iostream>
#include "Factory.hpp"

using namespace std;

int main()
{
	SingleCore* singleCore;
	Factory* factory = new Factory;
	singleCore = factory->CreateSingleCore(COREA);
	singleCore->Show();
	return 0;
}   
 
