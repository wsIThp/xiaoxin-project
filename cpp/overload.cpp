/*函数重载，在编译的时候已经将函数定义好(静态)，与函数参数个数，函数参数类型有关。与函数返回值无关*/

#include <iostream>

using namespace std;

int add(int x,int y=3)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}

int add(int x,char y,char z)
{
	return x+y+z;
}

int main(void)
{
	cout<<"add(2)="<<add(2)<<endl;
	cout<<"add(2,3,4)="<<add(2,3,4)<<endl;
	cout<<"add(1,'a','d')="<<add(1,'a','d')<<endl;
}

