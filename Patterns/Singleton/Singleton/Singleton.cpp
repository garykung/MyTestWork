#include "stdafx.h"
#include "Singleton.h"


Singleton* Singleton::s_pInstance = 0;


Singleton::Singleton(void)
{
	cout<<"Singleton::Singleton(void)"<<endl;
}

Singleton::~Singleton(void)
{
}

Singleton* Singleton::Instance()
{ 
	if (NULL == s_pInstance) 
	{ 
		s_pInstance = new Singleton();
	}

	return s_pInstance;
}