#include "stdafx.h"
#include "AbstractFactory.h"



/***********************************************

AbstractFactory模式的实现代码很简单，
在测试程序中可以看到，
当我们要创建一组对象（ProductA1，ProductA2）的时候
我们只用维护一个创建对象（ConcreteFactory1），
大大简化了维护的成本和工作。

*/

/*******************************************
AbstractFactory模式和Factory模式的区别是初学（使用）设计模式时候的一个容易引起困惑的地方。
实际上，AbstractFactory模式是为创建一组（有多类）相关或依赖的对象提供创建接口，
而Factory模式正如我在相应的文档中分析的是为一类对象提供创建接口或延迟对象的创建到子类中实现。
并且可以看到，AbstractFactory模式通常都是使用Factory模式实现（ConcreteFactory1）。

*/
int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"AbstractFactory design pattern"<<endl; 

	AbstractFactory* pAFac1 = new ConcreteFactory1();
	pAFac1->CreateProductA(); 
	pAFac1->CreateProductB();

	AbstractFactory* pAFac2 = new ConcreteFactory2();
	pAFac2->CreateProductA();
	pAFac2->CreateProductB();

	return 0;
}

