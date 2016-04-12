#pragma once

class Product
{
public:
	virtual ~Product() =0;
protected:
	Product(void);
};

class ConcreteProduct:public Product 
{ 
public:
	ConcreteProduct();
	~ConcreteProduct();
};