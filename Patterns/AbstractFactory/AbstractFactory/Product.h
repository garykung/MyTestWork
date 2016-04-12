#pragma once

class AbstractProductA
{
public:
	AbstractProductA(void);
	virtual ~AbstractProductA(void);
};

class AbstractProductB
{
public:
	AbstractProductB(void);
	virtual ~AbstractProductB(void);
};


class ProductA1:public AbstractProductA
{ 
public: 
	ProductA1();
	~ProductA1();
};

class ProductA2:public AbstractProductA 
{ 
public:
	ProductA2();
	~ProductA2();
};

class ProductB1:public AbstractProductB 
{
public:
	ProductB1();
	~ProductB1();
};

class ProductB2:public AbstractProductB
{ 
public: 
	ProductB2();
	~ProductB2();
};