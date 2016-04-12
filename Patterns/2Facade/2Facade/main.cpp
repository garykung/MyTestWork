#include "stdafx.h"
#include "Facade.h"

/***********************************************


*/

/*******************************************
Facade 模式在高层提供了一个统一的接口，解耦了系统。
设计模式中还有另一种模式Mediator 也和 Façade 有类似的地方。
但是 Mediator 主要目的是对象间的访问的解耦（通讯时候的协议）.
*/

int main(int argc,char* argv[])
{
	cout<<"Facade design pattern\n"<<endl; 

	Facade* f = new Facade();
	f->OperationWrapper();

	return 0;
}