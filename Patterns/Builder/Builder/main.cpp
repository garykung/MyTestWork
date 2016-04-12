#include "stdafx.h"
#include "Builder.h" 
#include "Product.h" 
#include "Director.h"

/***********************************************

Builder模式的示例代码中，BuildPart的参数是通过客户程序员传入的，
这里为了简单说明问题，使用“user-defined BuildPart*”代替，
实际的可能是在Construct方法中传入这3个参数，这样就可以得到不同的细微差别的复杂对象了。

*/

/*******************************************
将一个复杂对象的构建与它的表示分离，
使得同样的构建过程可以创建不同的表示（在示例代码中可以通过传入不同的参数实现这一点）。
Builder模式和AbstractFactory模式在功能上很相似，因为都是用来创建大的复杂的对象，

它们的区别是：
Builder模式强调的是一步步创建对象，
并通过相同的创建过程可以获得不同的结果对象，
一般来说Builder模式中对象不是直接返回的。

而在AbstractFactory模式中对象是直接返回的，
AbstractFactory模式强调的是为创建多个相互依赖的对象提供一个同一的接口。

*/
int main(int argc,char* argv[])
{
	cout<<"Builder design pattern"<<endl; 

	Director* pDtor = new Director(new ConcreteBuilder());
	pDtor->Construct();

	return 0;
}