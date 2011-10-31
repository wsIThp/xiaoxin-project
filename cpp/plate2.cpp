/*显示实例化*/
#include <iostream>
using namespace std;

template<class T1,class T2,int a>
/*此处不可提啊名家任何代码*/
T1 sum(T1 x,T2 y)
{
	return (x+y+a);
}
template<class T1,class T2>
T1 sum(T1 x,T2 y)
{
	return (x+y);
}
int main(void)
{
	cout<<sum<int,char,3>(3,'a')<<endl;
	cout<<sum<int,int,5>(3,5)<<endl;
	cout<<sum<char,int,3>('a',3)<<endl;
	cout<<sum<float,int,2>(2.3,3)<<endl;
	cout<<sum<int,float,10>(2,2.3)<<endl;
	cout<<sum(1,'a')<<endl;
}
