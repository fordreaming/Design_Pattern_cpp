#include "FlyWeightFactory.h"
#include "ConcreteFlyWeight.h"

FlyWeightFactory::FlyWeightFactory()
{
	m_flyWeightMap.emplace("x", new ConcreteFlyWeight());
	m_flyWeightMap.emplace("y", new ConcreteFlyWeight());
	m_flyWeightMap.emplace("z", new ConcreteFlyWeight());
}


FlyWeightFactory::~FlyWeightFactory()
{
}

FlyWeight* FlyWeightFactory::GetFlyWeight(string key)
{
	return m_flyWeightMap[key];
}
