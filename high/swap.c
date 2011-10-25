#include <stdio.h>
int swap_first(int a,int b)				/////实参初始化形参  ：值初始化形参
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int swap_second(int *a,int *b)			///////：地址初始化形参，地址变化，值变化
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int swap_third(int *a,int *b)			//////：地址初始化形参，地址变化，值没变
{
	int *temp=NULL;
	temp=a;
	a=b;
	b=temp;
}
int main(int argc, const char *argv[])
{
	int x=1;
	int y=2;
	swap_first(x,y);
	printf("%d\n",x);
	printf("%d\n",y);
	printf("\n");
//	swap_second(&x,&y);
//	printf("%d\n",x);
//	printf("%d\n",y);
//	printf("\n");
	swap_third(&x,&y);
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}
