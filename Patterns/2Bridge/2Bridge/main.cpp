#include "stdafx.h"
#include "Abstraction.h"
#include "AbstractionImp.h"

/***********************************************
Bridge 模式将抽象和实现分别独立实现，
在代码中就是 Abstraction 类和 AbstractionImp类。

*/

/*******************************************
Bridge 是设计模式中比较复杂和难理解的模式之一，
也是 OO 开发与设计中经常会用到的模式之一。
使用组合（委托）的方式将抽象和实现彻底地解耦，
这样的好处是抽象和实现可以分别独立地变化，
系统的耦合性也得到了很好的降低

*/
int main(int argc,char* argv[])
{
	cout<<"Bridge design pattern"<<endl; 

	AbstractionImp* imp = new ConcreteAbstractionImpA();
	Abstraction* abs = new RefinedAbstraction(imp);
	abs->Operation();

	return 0;
}