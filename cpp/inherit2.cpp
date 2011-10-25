#include <iostream>
using namespace std;
class Animal
{
public:
	virtual void sleep()
	{
		cout<<"animal sleep"<<endl;
	}
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
class Dog:public Animal
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
	void sleep1()
	{
		cout<<"person sleep"<<endl;
	}
};
int main(void)
{
	Animal *a1;
	Animal *a2;
	Animal b1;
	Dog b2;
	a1=&b1;
	a2=&b2;
	a1->sleep();
	a2->sleep();
	return 0;
}
