#ifndef _SINGLE_COREA_H_
#define _SINGLE_COREA_H_
#include "SingleCore.h"
#include <iostream>

using std::cout;
using std::endl;
//µ¥ºËA  
class SingleCoreA: public SingleCore  
{  
public:  
	void Show() 
	{ 
		cout<<"SingleCore A"<<endl; 
	}  
};  

#endif