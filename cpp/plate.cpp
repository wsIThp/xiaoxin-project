/*函数模板    隐式实例化*/

#include <iostream>
using namespace std;

template<class T1,class T2>

T1 sum(T1 x,T2 y)
{
	return (x+y);
}

int main(void)
{
	cout<<"sum('a',2)="<<sum('a',2)<<endl;
	cout<<"sum(2,'a')="<<sum(2,'a')<<endl;
	cout<<"sum(1.1,2)="<<sum(1.1,2)<<endl;
	cout<<"sum(2,1.1)="<<sum(2,1.1)<<endl;
}
