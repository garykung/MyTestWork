#include "stdafx.h"
#include "Adapter.h"

Target::Target()
{
}

Target::~Target()
{
}

void Target::Request()
{
	std::cout<<"Target::Request"<<std::endl;
}

Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::SpecificRequest()
{
	std::cout<<"Adaptee::SpecificRequest"<<std::endl;
}

Adapter::Adapter()
{
}

Adapter::~Adapter()
{
}

void Adapter::Request()
{
	this->SpecificRequest();
}

// type 2
//Adapter::Adapter(Adaptee* ade)
//{
//	this->_ade = ade;
//}
//
//void Adapter::Request()
//{
//	m_pAde->SpecificRequest();
//}