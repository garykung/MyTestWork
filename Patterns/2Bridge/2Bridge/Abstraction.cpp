#include "stdafx.h"
#include "Abstraction.h"
#include "AbstractionImp.h"
 
Abstraction::Abstraction()
{
}

Abstraction::~Abstraction()
{
}

RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp)
{
	m_pImp = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{
}

void RefinedAbstraction::Operation()
{
	m_pImp->Operation();
}