#include "Leaf.h"

CLeaf::CLeaf(void)
{
}

CLeaf::CLeaf(string name): CComponent(name)
{
}

CLeaf::~CLeaf(void)
{
}


void CLeaf::Add(CComponent* pCompnent)
{
	cout << "can not add to a leaf" << endl;	
}

void CLeaf::Remove(CComponent* pCompnent)
{
	cout << "can not remove from a leaf" << endl;
}

void CLeaf::Display(int depth)
{
	for(int i = 0; i < depth; ++i)
	{
		cout << "-";
	}
	cout << _name << endl;
}
