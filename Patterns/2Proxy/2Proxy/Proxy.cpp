#include "stdafx.h"
#include "Proxy.h"

Subject::Subject()
{
}

Subject::~Subject()
{
}

ConcreteSubject::ConcreteSubject()
{
}

ConcreteSubject::~ConcreteSubject()
{
}

void ConcreteSubject::Request()
{
	cout<<"ConcreteSubject......request...."<<endl;
}

Proxy::Proxy()
{
}

Proxy::Proxy(Subject* sub)
{
	m_pSub = sub;
}

Proxy::~Proxy()
{
	m_pSub = NULL;
}

void Proxy::Request()
{
	cout<<"Proxy request...."<<endl;
	m_pSub->Request();
}