#include "Composite.h"

CComposite::CComposite(void)
{
}

CComposite::CComposite(string name): CComponent(name)
{

}

CComposite::~CComposite(void)
{
}

void CComposite::Add(CComponent* pCompnent)
{
	_componentList.push_back(pCompnent);
}

void CComposite::Remove(CComponent* pCompnent)
{
	_componentList.remove(pCompnent);
}

void CComposite::Display(int depth)
{
	for (int i = 0; i < depth; ++i)
	{
		cout << "-";
	}
	cout << _name << endl;
	list<CComponent *>::iterator iter = _componentList.begin();
	for(; iter != _componentList.end(); ++iter)
	{
		(*iter)->Display(depth + 2);
	}
}
