#include "stdafx.h"
#include "Flyweight.h"
#include "FlyweightFactory.h"


/***********************************************

Flyweight 模式在实现过程中主要是要为共享对象提供一个存放的“仓库”（对象池），
这里是通过 C++ STL 中 Vector 容器，当然就牵涉到 STL 编程的一些问题（Iterator 使用等）。

*/

/*******************************************
在 State 模式和 Strategy 模式中会产生很多的对象，
因此我们可以通过 Flyweight模式来解决这个问题。
*/
int main(int argc,char* argv[])
{
	cout<<"Flyweight design pattern\n"<<endl; 


	FlyweightFactory* fc = new FlyweightFactory();
	Flyweight* fw1 = fc->GetFlyweight("hello");
	Flyweight* fw2 = fc->GetFlyweight("world!");
	Flyweight* fw3 = fc->GetFlyweight("hello1111");

	return 0;
}