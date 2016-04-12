#include "Factory.h" 
#include "Product.h"
#include <iostream> 
using namespace std;

/********************************************

Factory模式的两个最重要的功能：
1）定义创建对象的接口，封装了对象的创建；
2）使得具体化类的工作延迟到了子类中。

*/

/********************************************
Factory模式也带来至少以下两个问题： 

1）如果为每一个具体的ConcreteProduct类的实例化提供一个函数体，
那么我们可能不得不在系统中添加了一个方法来处理这个新建的ConcreteProduct，
这样Factory的接口永远就不肯能封闭（Close）。
当然我们可以通过创建一个Factory的子类来通过多态实现这一点，
但是这也是以新建一个类作为代价的。

2）在实现中我们可以通过参数化工厂方法，
即给FactoryMethod（）传递一个参数用以决定是创建具体哪一个具体的Product
（实际上笔者在VisualCMCS中也正是这样做的）。
当然也可以通过模板化避免1）中的子类创建子类，
其方法就是将具体Product类作为模板参数，实现起来也很简单。

*/

int main(int argc,char* argv[]) 
{
	cout<<"Factory design pattern"<<endl;
	Factory* pFac = new ConcreteFactory();
	Product* pPro = pFac->CreateProduct();

	return 0; 
}