#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

using namespace std;

int main()
{
	CComposite* root = new CComposite("root");
	root->Add(new CLeaf("Leaf A"));
	root->Add(new CLeaf("Leaf B"));

	CComposite*	comp = new CComposite("Composite X");
	comp->Add(new CLeaf("Leaf XA"));
	comp->Add(new CLeaf("Leaf XB"));
	root->Add(comp);

	CComposite*	comp1 = new CComposite("Composite Y");
	comp1->Add(new CLeaf("Leaf YA"));
	comp1->Add(new CLeaf("Leaf YB"));
	root->Add(comp1);

	root->Add(new CLeaf("Leaf C"));
	root->Display(1);




	return 0;
}