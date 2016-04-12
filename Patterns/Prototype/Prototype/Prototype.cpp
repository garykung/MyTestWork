#include "stdafx.h"
#include "Prototype.h"

Prototype::Prototype(void)
{
}

Prototype::~Prototype(void)
{
}

Prototype* Prototype::Clone() const 
{ 
	return 0;
}

ConcretePrototype::ConcretePrototype()
{
	cout<<"ConcretePrototype::ConcretePrototype()"<<endl; 
}

ConcretePrototype::~ConcretePrototype() 
{
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{ 
	cout<<"ConcretePrototype copy ..."<<endl; 
}

Prototype* ConcretePrototype::Clone() const
{ 
	return new ConcretePrototype(*this);
}