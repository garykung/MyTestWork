#include "stdafx.h"
#include "FlyweightFactory.h"

#include <string>
#include <cassert>



FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
}

Flyweight* FlyweightFactory::GetFlyweight(const string& key)
{
	vector<Flyweight*>::iterator it = _fly.begin();
	for (; it != _fly.end();it++)
	{
		//�Q�����C�A��N�p�C^_^
		if ((*it)->GetIntrinsicState() == key)
		{
			cout<<"already created by users...."<<endl;
			return *it;
		}
	}
	Flyweight* fn = new ConcreteFlyweight(key);
	_fly.push_back(fn);
	return fn;
}