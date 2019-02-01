#ifndef __TYPEDEF_H__
#define __TYPEDEF_H__

#include <stdio.h>
#include <stdlib.h>

#define __func__ __FUNCTION__

#ifdef __cplusplus
extern "C" {
#endif

	typedef enum _Ret
	{
		RET_OK,
		RET_FAIL
	}Ret;

#define return_if_fail(p) \
	if(!(p)){ \
	printf("%s:%d Warning:"#p"Failed\n",__func__,__LINE__); \
	return;}

#define return_val_if_fail(p, ret) \
	if(!(p)){\
	printf("%s:%d Warning:"#p"Failed\n",__func__,__LINE__);\
	return (ret);}
#define SAFE_FREE(p) if(p != NULL){free(p); p = NULL;}

#ifdef __cplusplus
}
#endif

#endif
//--------------------- 
//作者：tandesir 
//来源：CSDN 
//原文：https://blog.csdn.net/tandesir/article/details/8635301 
//版权声明：本文为博主原创文章，转载请附上博文链接！