#pragma once

class AbstractionImp
{
public:
	virtual ~AbstractionImp();
	virtual void Operation() = 0;
protected:
	AbstractionImp();
};

class ConcreteAbstractionImpA:public AbstractionImp
{
public:
	ConcreteAbstractionImpA();
	~ConcreteAbstractionImpA();
	virtual void Operation();
};

class ConcreteAbstractionImpB:public AbstractionImp
{
public:
	ConcreteAbstractionImpB();
	~ConcreteAbstractionImpB();
	virtual void Operation();
};