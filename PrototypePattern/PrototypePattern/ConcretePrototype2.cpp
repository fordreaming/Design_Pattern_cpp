#include "ConcretePrototype2.h"

CConcretePrototype2::CConcretePrototype2()
{

}

CConcretePrototype2::CConcretePrototype2(string id):CPrototype(id)
{
}

CConcretePrototype2::~CConcretePrototype2(void)
{
}

CPrototype* CConcretePrototype2::Clone()
{
	CConcretePrototype2 *pConcretePrototype2 = new CConcretePrototype2();
	pConcretePrototype2 = this;
	return pConcretePrototype2;
}
