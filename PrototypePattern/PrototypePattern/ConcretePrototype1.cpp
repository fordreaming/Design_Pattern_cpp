#include "ConcretePrototype1.h"

CConcretePrototype1::CConcretePrototype1()
{

}

CConcretePrototype1::CConcretePrototype1(string id):CPrototype(id)
{
}

CConcretePrototype1::~CConcretePrototype1(void)
{
}

CPrototype* CConcretePrototype1::Clone()
{
	CConcretePrototype1 *pConcretePrototype1 = new CConcretePrototype1();
	pConcretePrototype1 = this;
	return pConcretePrototype1;
}
