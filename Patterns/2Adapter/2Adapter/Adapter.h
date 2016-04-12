#pragma once

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Request();
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequest();
};

class Adapter:public Target,private Adaptee
{
public:
	Adapter();
	~Adapter();
	void Request();
};


// type 2
//class Adapter:public Target
//{
//public:
//	Adapter(Adaptee* ade);
//	~Adapter();
//	void Request();
//
//private:
//	Adaptee* m_pAde;
//};