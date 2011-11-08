#include <iostream>
#include <cstring>
using namespace std;
class Animal
{
public:
	Animal(int num,char *p,char w)
	{
		age=num;
		name=new char[strlen(p)+1];
		strcpy(name,p);
		mm=w;
		cout<<"Animal constructure"<<endl;	
	}
	Animal(Animal &t)///////拷贝默认构造函数 （传自己类型对象的引用）
	{
		age=t.age;
		name=new char[strlen(t.name)+1];
		strcpy(name,t.name);
		mm=t.mm;
	}
	~Animal()
	{
		if(name) delete []name;
		name=NULL;
		cout<<"Animal un"<<endl;
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
	char *name;
	char mm;
};
/*class Dog:public Animal
{
public:
	Dog()
	{
		cout<<"dog constructure"<<endl;
	}
	~Dog()
	{
		cout<<"dog un"<<endl;
	}
private:
};*/
int main(void)
{
	Animal dg(1,(char *)"guo",'q');
	dg.show();
	Animal an(dg);				//////dg=an;
	return 0;
}
