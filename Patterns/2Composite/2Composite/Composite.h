#pragma once
#include "Component.h"
#include <vector>


class Composite : public Component
{
public:
	Composite(void);
	~Composite(void);

public:
	void Operation();
	void Add(Component* com);
	void Remove(Component* com);
	Component* GetChild(int index);

private:
	vector<Component*> comVec;
};
