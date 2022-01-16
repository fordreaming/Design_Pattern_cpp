#pragma once
#include <string>
//#include <hash_map>
#include <unordered_map>
#include "flyWeight.h"

using namespace std;

class FlyWeightFactory
{
public:
	FlyWeightFactory();
	~FlyWeightFactory();

	FlyWeight* GetFlyWeight(string key);

private:
	unordered_map<string, FlyWeight*> m_flyWeightMap;
};

