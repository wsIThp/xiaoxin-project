#include <iostream>
using namespace std;
class Animal
{
public:
	Animal(int a=1)
	{	cout<<"Animal constructure"<<endl;	
		age=a;	
	}
	~Animal()
	{
		cout<<"1"<<endl;
	}
	void show()
	{
		cout<<"age="<<age<<endl;
	}
protected:
	void eat()
	{	cout<<"animal eat"<<endl;	}
private:
	int age;
};
class Dog:public Animal
{
public:
	Dog(int n,int b=9):Animal(b)		/////如果父类有模认值，Animal中的b能够省略////DOG中的b就是父类的b，
	{
		cout<<"dog constructure"<<endl;
		num = n;
		mm=b;
		cout<<"num="<<num<<endl;
		cout<<"mm="<<mm<<endl;
	}
	~Dog()
	{
		cout<<"2"<<endl;
	}
private:
	int num;
	int mm;
};
int main(void)
{
//	Animal per;  	/////Animal constructure
//	Dog dg;		/////Animal constructure   dog constructure子类调用构造函数时先调用父类的构造函数，再调用自己的构造函数
//	Animal per;
//	per.show();
	Dog dg(2);
	return 0;
}
