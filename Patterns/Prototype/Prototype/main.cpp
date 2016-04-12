#include "stdafx.h"
#include "Prototype.h"

/***********************************************
Prototype模式也正是提供了自我复制的功能，就是说新对象的创建可以通过已有对象进行创建
Prototype模式的结构和实现都很简单，其关键就是（C++中）拷贝构造函数的实现方式.
在示例代码中不涉及到深层拷贝（主要指有指针、复合对象的情况），
因此我们通过编译器提供的默认的拷贝构造函数（按位拷贝）的方式进行实现。
说明的是这一切只是为了实现简单起见，
也因为本文档的重点不在拷贝构造函数的实现技术，而在Prototype模式本身的思想。

*/

/*******************************************
Prototype模式通过复制原型（Prototype）而获得新对象创建的功能，
这里Prototype本身就是“对象工厂”（因为能够生产对象），
实际上Prototype模式和Builder模式、
AbstractFactory模式都是通过一个类（对象实例）来专门负责对象的创建工作（工厂对象），

它们之间的区别是：
Builder模式重在复杂对象的一步步创建（并不直接返回对象），
AbstractFactory模式重在产生多个相互依赖类的对象，
而Prototype模式重在从自身复制自己创建新类。
*/


int main(int argc,char* argv[])
{
	cout<<"Prototype design pattern"<<endl; 

	Prototype* pProto = new ConcretePrototype();
	Prototype* p1 = pProto->Clone();

	return 0;
}