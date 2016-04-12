#include "stdafx.h"
#include "Component.h"
#include "Composite.h"
#include "Leaf.h"


/***********************************************
Composite 模式在实现中有一个问题就是要提供对于子节点（Leaf）的管理策略，
这里使用的是 STL 中的 vector，可以提供其他的实现方式，如数组、链表、Hash 表等。

*/

/*******************************************
Composite 模式通过和 Decorator 模式有着类似的结构图，
但是 Composite 模式旨在构造类，
而 Decorator 模式重在不生成子类即可给对象添加职责。
Decorator 模式重在修饰，而Composite 模式重在表示。

*/
int main(int argc,char* argv[])
{
	cout<<"Composite design pattern\n"<<endl; 

	Leaf* pl = new Leaf();
	pl->Operation();
	Composite* pCom = new Composite();
	pCom->Add(pl);
	pCom->Operation();
	Component* pll = pCom->GetChild(0);
	pll->Operation();

	return 0;
}