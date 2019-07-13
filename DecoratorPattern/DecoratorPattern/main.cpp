#include "Component.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"


int main()
{
	CConcreteComponent *c = new CConcreteComponent;
	CConcreteDecoratorA *d1 = new CConcreteDecoratorA;
	CConcreteDecoratorB *d2 = new CConcreteDecoratorB;

	d1->SetComponent(c);
	d2->SetComponent(d1);
	d2->Operation();

	return 0;
}