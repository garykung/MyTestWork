#pragma once

class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual void AlgrithmInterface() = 0;
};

class ConcreteStrategyA:public Strategy
{
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();
	void AlgrithmInterface();
};

class ConcreteStrategyB:public Strategy
{
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();
	void AlgrithmInterface();
};