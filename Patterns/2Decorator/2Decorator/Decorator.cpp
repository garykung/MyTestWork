#include "stdafx.h"
#include "Decorator.h"

Component::Component()
{
	cout<<"Component::Component()"<<endl; 
}

Component::~Component()
{
	std::cout<<"Component::~Component()"<<std::endl;
}

void Component::Operation()
{
	cout<<"Component::Operation()"<<endl; 
}

ConcreteComponent::ConcreteComponent()
{
	cout<<"ConcreteComponent::ConcreteComponent()"<<endl; 
}

ConcreteComponent::~ConcreteComponent()
{
	std::cout<<"ConcreteComponent::~ConcreteComponent()"<<std::endl;
}

void ConcreteComponent::Operation()
{
	std::cout<<"ConcreteComponent::Operation()"<<std::endl;
}

Decorator::Decorator(Component* pCom)
{
	cout<<"Decorator::Decorator(Component* pCom)"<<endl;
	this->m_pCom = pCom;
}

Decorator::~Decorator()
{
	cout<<"Decorator::~Decorator()"<<endl; 
	delete m_pCom;
}

void Decorator::Operation()
{
	std::cout<<"Decorator::Operation()"<<std::endl;
}

ConcreteDecorator::ConcreteDecorator(Component* pCom):Decorator(pCom)
{
	std::cout<<"ConcreteDecorator::ConcreteDecorator(Component* pCom):Decorator(pCom)"<<std::endl;
}

ConcreteDecorator::~ConcreteDecorator()
{
	cout<<"ConcreteDecorator::~ConcreteDecorator()"<<endl; 
}

void ConcreteDecorator::AddedBehavior()
{
	std::cout<<"ConcreteDecorator::AddedBehacior...."<<std::endl;
}

void ConcreteDecorator::Operation()
{
	cout<<"ConcreteDecorator::Operation()"<<endl; 
	m_pCom->Operation();
	this->AddedBehavior();
}