#include "stdafx.h"
#include "Context.h"
#include "Strategy.h"

Context::Context(Strategy* stg)
{
	m_pStg = stg;
}
Context::~Context()
{
	if (!m_pStg)
		delete m_pStg;
}
void Context::DoAction()
{
	m_pStg->AlgrithmInterface();
}