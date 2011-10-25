#include <iostream>
using namespace std;
class Animal					//////基类，父类，超类。
{
public:
	void sleep()
	{
		cout<<"animal sleep"<<endl;
	}
protected:						/////基类的protected成员（只允许基类的成员函数，共有派生类的成员函数直接访问。）
								/////基类的对象，共有派生类的对象都不能直接访问。	
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
class Dog:public Animal				/////派生类成员可直接访问基类的保护成员和基类的公有成员，但不能访问基类的私有成员。
{
public:
	void sleep()
	{
		cout<<"dog sleep"<<endl;
	}
};
class Person:public Animal
{
public:
	void sleep()
	{
		cout<<"person sleep"<<endl;
	}
};
int main(void)
{
/*	Animal *an;
	Dog dg;
	an=&dg;
	an->sleep();
*/	////			animal sleep如果在Animal的函数sleep()前加virtual结果是dog sleep.


/*	Animal an;
	an.sleep() 
*/	////			animal sleep


/*	Dog dg;
	dg.sleep(); 			
*/	////			dog sleep;
	
	
	
	return 0;
}
