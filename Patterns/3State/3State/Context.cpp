#include "stdafx.h"
#include "State.h"
#include "Context.h"

Context::Context()
{
}

Context::Context(State* state)
{
	this->m_pState = state;
}

Context::~Context()
{
	if(NULL!=m_pState)
	{
		delete m_pState;
		m_pState = NULL;
	}
}

void Context::OprationInterface()
{
	m_pState->OperationInterface(this);
}

bool Context::ChangeState(State* state)
{
	///_state->ChangeState(this,state);
	this->m_pState = state;
	return true;
}

void Context::OperationChangState()
{
	m_pState->OperationChangeState(this);
}
