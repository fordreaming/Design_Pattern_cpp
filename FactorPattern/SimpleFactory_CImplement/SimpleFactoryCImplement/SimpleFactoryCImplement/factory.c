#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "factory.h"
#include "producta.h"
#include "productb.h"

Operation* factory_create_oper(char operName)
{
	Operation *thiz = malloc(sizeof(Operation));

	if(thiz != NULL)
	{
		switch(operName)
		{
		case '+':
			thiz = (Operation *)oper_add_create();
			break;
		case '-':
			thiz = (Operation *)oper_minus_create();
			break;
		default:;
		}
	}

	return thiz;
}

void factory_destroy(Factory *thiz)
{
	if(thiz	!= NULL)
	{
		SAFE_FREE(thiz);
	}

	return ;
}

Factory *FactoryCreate(void)
{
	Factory *thiz = malloc(sizeof(Factory));

	if(thiz != NULL)
	{
		thiz->create_oper = factory_create_oper;
		thiz->destroy = factory_destroy;
	}
	return thiz;
}

//--------------------- 
//作者：tandesir 
//来源：CSDN 
//原文：https://blog.csdn.net/tandesir/article/details/8635301 
//版权声明：本文为博主原创文章，转载请附上博文链接！