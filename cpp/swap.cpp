#include <iostream>
using namespace std;

void swap(int &a,int &b)		//////别名
								//////
{
	int temp=a;
	a=b;
	b=temp;
}

int main(void)
{
	int x=1;					///x有内存空间
	int y=-3;					///y有内存空间
	swap(x,y);					///相当于int &a=x;int &b=y;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}

