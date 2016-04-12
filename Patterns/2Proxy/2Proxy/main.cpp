#include "stdafx.h"
#include "Proxy.h"


/***********************************************

*/

/*******************************************
Proxy 模式最大的好处就是实现了逻辑和实现的彻底解耦。
*/
int main(int argc,char* argv[])
{
	cout<<"Proxy design pattern\n"<<endl; 


	Subject* sub = new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->Request();

	delete sub;
	delete p;

	return 0;
}