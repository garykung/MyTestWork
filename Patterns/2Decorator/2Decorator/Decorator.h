#pragma once

class Component
{
public:
	virtual ~Component();
	virtual void Operation();
protected:
	Component();
};

class ConcreteComponent:public Component
{
public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operation();
};

class Decorator:public Component
{
public:
	Decorator(Component* pCom);
	virtual ~Decorator();
	void Operation();
protected:
	Component* m_pCom;
};

class ConcreteDecorator:public Decorator
{
public:
	ConcreteDecorator(Component* pCom);
	~ConcreteDecorator();
	void Operation();
	void AddedBehavior();
};