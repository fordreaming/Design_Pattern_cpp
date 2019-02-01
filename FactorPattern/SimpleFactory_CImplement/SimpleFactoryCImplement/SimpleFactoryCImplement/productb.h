#ifndef __PRODUCTB_H__
#define __PRODUCTB_H__

#include "product.h"

#ifdef __cplusplus
extern "C" {
#endif

	struct _Minus;
	typedef struct _Minus Minus;

	typedef Result* (*MinusResultFunc)(int a, int b);
	typedef void (*MinusDestroyFunc)(Minus* thiz);

	struct _Minus
	{
		MinusResultFunc minus_result;
		MinusDestroyFunc minus_destroy;
	};

	Minus *oper_minus_create(void);

#ifdef __cplusplus
}
#endif

#endif
//--------------------- 
//作者：tandesir 
//来源：CSDN 
//原文：https://blog.csdn.net/tandesir/article/details/8635301 
//版权声明：本文为博主原创文章，转载请附上博文链接！