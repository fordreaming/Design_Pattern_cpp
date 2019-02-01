#ifndef __PRODUCTA_H__
#define __PRODUCTA_H__

#include "product.h"

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct _Add Add;

	typedef Result* (*AddResultFunc)(int a, int b);
	typedef void (*AddDestroyFunc)(Add* thiz);

	struct _Add
	{
		AddResultFunc add_result;
		AddDestroyFunc add_destroy;
	};

	Add *oper_add_create(void);

#ifdef __cplusplus
}
#endif

#endif
//--------------------- 
//作者：tandesir 
//来源：CSDN 
//原文：https://blog.csdn.net/tandesir/article/details/8635301 
//版权声明：本文为博主原创文章，转载请附上博文链接！