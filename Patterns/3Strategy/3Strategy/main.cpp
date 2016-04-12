#include "stdafx.h"
#include "Context.h"
#include "Strategy.h"

/***********************************************
Strategy 模式的代码很直观，关键是将算法的逻辑封装到一个类中。
*/

/*******************************************
Strategy 模式和 Template 模式实际是实现一个抽象接口的两种方式：
继承和组合之间的区别


面向对象的设计中的有一条很重要的原则就是： 
优先使用（对象）组合，而非（类）继承（Favor Composition Over Inheritance）
*/
int main(int argc,char* argv[])
{
	cout<<"Strategy design pattern\n"<<endl; 

	Strategy* ps = new ConcreteStrategyA();
	Context* pc = new Context(ps);
	pc->DoAction();
	if (NULL != pc)
		delete pc;

	return 0;
}