/***************************
 *当类的继承方式时私有时，基类的public  protected 成员被继承后作为派生类的private成员，派生类的其他成员可以直接访问他们，但是 *在类的外部通过派生类的对象无法访问	
 *基类的private成员在私有派生类中是不可以直接访问的，无论是派生类成员还是派生类对象，都无法直接访问从基类继承来的private成员
 *但是可以通过基类提供的public成员函数间接访问。
***************************/

#include <iostream>
using namespace std;
class Animal
{
public:
	virtual void sleep1();
protected:
	void eat()
	{
		cout<<"animal eat"<<endl;
	}
private:
	void walk()
	{
		cout<<"animal walk"<<endl;
	}
};
void Animal::sleep1()
{
	walk();
	cout<<"animal sleep"<<endl;
}
class Dog:private Animal
{
public:
	void sleep()
	{
		cout<<"dog sleep"<<endl;
	}
};
int main(void)
{
	Animal zh;	
	Dog dg;
	zh.sleep1();
	dg.sleep();
//	dg.sleep1()； 				//////不可直接访问。
	return 0;
}
