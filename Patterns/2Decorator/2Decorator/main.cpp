#include "stdafx.h"
#include "Decorator.h"

/***********************************************

Decorator 模式和 Proxy 模式的相似的地方在于它们都拥有一个指向其他对象的引用（指
针），即通过组合的方式来为对象提供更多操作（或者 Decorator 模式）间接性（Proxy 模式）。
但是他们的区别是，Proxy 模式会提供使用其作为代理的对象一样接口，使用代理类将其操
作都委托给 Proxy 直接进行。这里可以简单理解为组合和委托之间的微妙的区别了。

*/

/*******************************************

*/
int main(int argc,char* argv[])
{
	cout<<"Decorator design pattern"<<endl<<endl; 


	Component* pCom = new ConcreteComponent();
	Decorator* pDec = new ConcreteDecorator(pCom);
	pDec->Operation();
	delete pDec;

	return 0;
}