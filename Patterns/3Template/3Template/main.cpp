#include "stdafx.h"
#include "Template.h"

/***********************************************



*/

/*******************************************

*/
int main(int argc,char* argv[])
{
	cout<<" design pattern\n"<<endl; 

	AbstractClass* p1 = new ConcreteClass1();
	AbstractClass* p2 = new ConcreteClass2();
	p1->TemplateMethod();
	p2->TemplateMethod();

	return 0;
}