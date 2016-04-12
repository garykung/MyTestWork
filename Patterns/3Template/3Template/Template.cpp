#include "stdafx.h"
#include "Template.h"

AbstractClass::AbstractClass()
{
}

AbstractClass::~AbstractClass()
{
}

void AbstractClass::TemplateMethod()
{
	this->PrimitiveOperation1();
	this->PrimitiveOperation2();
}

ConcreteClass1::ConcreteClass1()
{
}

ConcreteClass1::~ConcreteClass1()
{
}

void ConcreteClass1::PrimitiveOperation1()
{
	cout<<"ConcreteClass1...PrimitiveOperation1"<<endl;
}

void ConcreteClass1::PrimitiveOperation2()
{
	cout<<"ConcreteClass1...PrimitiveOperation2"<<endl;
}

ConcreteClass2::ConcreteClass2()
{
}

ConcreteClass2::~ConcreteClass2()
{
}

void ConcreteClass2::PrimitiveOperation1()
{
	cout<<"ConcreteClass2...PrimitiveOperation1"<<endl;
}

void ConcreteClass2::PrimitiveOperation2()
{
	cout<<"ConcreteClass2...PrimitiveOperation2"<<endl;
}