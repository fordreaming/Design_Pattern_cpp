#ifndef _MULTI_COREB_H_
#define _MULTI_COREB_H_

#include "MultiCore.h"

class MultiCoreB:public MultiCore
{
public:
	void Show()
	{
		cout << "MultiCoreB " << endl;
	}
};
#endif