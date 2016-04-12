#include "stdafx.h"
#include "Adapter.h"

/***********************************************
Adapter 模式实现上比较简单
在类模式 Adapter 中，通过 private 继承Adaptee 
获得实现继承的效果，
而通过 public 继承 Target 获得接口继承的效果
（有关实现继承和接口继承参见讨论部分）。
*/

/*******************************************

在Adapter模式的两种模式中，有一个很重要的概念就是
接口继承和实现继承的区别和联系。

接口继承和实现继承是面向对象领域的两个重要的概念，
接口继承指的是通过继承，子类获得了父类的接口，
而实现继承指的是通过继承子类获得了父类的实现（并不统共接口）。

在C++中的 public 继承既是接口继承又是实现继承，
因为子类在继承了父类后既可以对外提供父类中的接口操作，
又可以获得父类的接口实现。

当然我们可以通过一定的方式和技术模拟单独的接口继承和实现继承，
例如我们可以通过 private 继承获得实现继承的效果
（private 继承后，父类中的接口都变为 private，当然只能是实现继承了。），
通过纯抽象基类模拟接口继承的效果，
但是在 C++中 pure virtual function 也可以提供默认实现，
因此这是不纯正的接口继承，但是在 Java 中我们可以 interface 来获得真正的接口继承了

*/
int main(int argc,char* argv[])
{
	cout<<"Adapter design pattern"<<endl; 

	//Adapter* adt = new Adapter();
	Target* adt = new Adapter();
	adt->Request();


	// Type 2
	//Adaptee* ade = new Adaptee;
	//Target* adt = new Adapter(ade);
	//adt->Request()

	return 0;
}