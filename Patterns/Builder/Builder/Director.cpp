#include "stdafx.h"
#include "Director.h"
#include "Builder.h"

Director::Director(Builder* pBld)
{
	m_pBld = pBld;
}

Director::~Director(void)
{
}

void Director::Construct()
{
	m_pBld->BuildPartA("user-defined BuildPartA"); 
	m_pBld->BuildPartB("user-defined BuildPartB");
	m_pBld->BuildPartC("user-defined BuildPartC"); 
}