#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include <assert.h>
#include "typedef.h"

#define inline __inline

#ifdef __cplusplus
extern "C" {
#endif

	struct _Operation;
	typedef struct _Operation Operation;

	struct _Result;
	typedef struct _Result Result;

	typedef Result* (*ResultFunc)(int a, int b);
	typedef void (*DestroyFunc)(Operation* thiz);

	struct _Result
	{
		int val;
	};

	struct _Operation
	{
		ResultFunc result;
		DestroyFunc destroy;
	};

	static inline Result* oper_result(Operation *thiz, int a, int b)
	{
		return_val_if_fail(thiz != NULL, NULL);

		if(thiz->result != NULL)
		{
			return thiz->result(a, b);
		}
	}

	static inline void oper_destroy(Operation *thiz)
	{
		if(thiz != NULL && thiz->destroy != NULL)
		{
			thiz->destroy(thiz);
		}

		return ;
	}

#ifdef __cplusplus
}
#endif

#endif
//--------------------- 
//作者：tandesir 
//来源：CSDN 
//原文：https://blog.csdn.net/tandesir/article/details/8635301 
//版权声明：本文为博主原创文章，转载请附上博文链接！