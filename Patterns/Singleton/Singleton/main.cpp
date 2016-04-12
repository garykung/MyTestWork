#include "stdafx.h"
#include "Singleton.h"


/*******************************************
Singleton不可以被实例化，
因此我们将其构造函数声明为protected或者直接声明为private。

*/

/***********************************************
Singleton模式在开发中经常用到，且不说我们开发过程中一些变量必须是唯一的，
比如说打印机的实例等等。
Singleton模式经常和Factory（AbstractFactory）模式在一起使用，
因为系统中工厂对象一般来说只要一个

*/

int main(int argc,char* argv[])
{
	cout<<"Singleton design pattern"<<endl; 

	Singleton* pSgn = Singleton::Instance();


	return 0;
}

