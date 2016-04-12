#pragma once
#include "component.h"

class Leaf :
	public Component
{
public:
	Leaf(void);
	~Leaf(void);

	void Operation();
};
