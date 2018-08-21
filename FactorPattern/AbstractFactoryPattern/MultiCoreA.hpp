#ifndef _MULTI_COREA_H_
#define _MULTI_COREA_H_

#include "MultiCore.h"

class MultiCoreA: public MultiCore
{
public:
	void Show()
	{
		cout << "MultiCoreA " << endl;
	}
};
#endif