#include "Factory.h"
#include "Product.h"

#include <iostream> 
using namespace std;

Factory::Factory(void)
{
	cout<<"Factory::Factory(void)"<<endl; 
}

Factory::~Factory(void)
{
	cout<<"Factory::~Factory(void)"<<endl; 
}

ConcreteFactory::ConcreteFactory() 
{ 
	cout<<"ConcreteFactory::ConcreteFactory()"<<endl; 
}

ConcreteFactory::~ConcreteFactory()
{
	cout<<"ConcreteFactory::~ConcreteFactory()"<<endl; 
}

Product* ConcreteFactory::CreateProduct()
{ 
	return new ConcreteProduct(); 
}