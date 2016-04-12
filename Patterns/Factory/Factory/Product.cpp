#include "Product.h"
#include<iostream> 

using namespace std;

Product::Product(void)
{
	cout<<"Product::Product(void)"<<endl;
}

Product::~Product(void)
{
	cout<<"Product::~Product(void)"<<endl;
}

ConcreteProduct::ConcreteProduct() 
{ 
	cout<<"ConcreteProduct::ConcreteProduct()"<<endl;
}

ConcreteProduct::~ConcreteProduct()
{
	cout<<"ConcreteProduct::~ConcreteProduct()"<<endl;
}