#include "stdafx.h"
#include "Context.h"
#include "State.h"

/***********************************************
State 模式在实现中，有两个关键点：
1）将 State 声明为 Context 的友元类（friend class），其
作用是让 State 模式访问 Context的 protected 接口 ChangeSate（）。
2）State 及其子类中的操作都将 Context*传入作为参数，
其主要目的是 State 类可以通过这个指针调用 Context 中的方法（在本示例代码中没有体现）。
这也是 State 模式和 Strategy模式的最大区别所在。

*/

/*******************************************
State 模式的应用也非常广泛，从最高层逻辑用户接口 GUI 到最底层的通讯协议.
State 模式很好地实现了对象的状态逻辑和动作实现的分离，
状态逻辑分布在 State 的派生类中实现，而动作实现则可以放在 Context 类中实现
（这也是为什么 State 派生类需要拥有一个指向 Context 的指针）。

*/
int main(int argc,char* argv[])
{
	cout<<" design pattern\n"<<endl; 

	State* st = new ConcreteStateA();
	Context* con = new Context(st);
	con->OperationChangState();
	con->OperationChangState();
	con->OperationChangState();
	if (con != NULL)
		delete con;
	if (st != NULL)
		st = NULL;

	return 0;
}