#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

int main()
{
	CConcretePrototype1 *p1 = new CConcretePrototype1("I");
	CConcretePrototype1 *c1 = (CConcretePrototype1*)p1->Clone();

	printf("Cloned: %s\n", c1->m_id.c_str());

	CConcretePrototype2 *p2 = new CConcretePrototype2("II");
	CConcretePrototype2 *c2 = (CConcretePrototype2*)p2->Clone();

	printf("Cloned: %s\n", c2->m_id.c_str());

	return 0;
}