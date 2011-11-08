#include <stdio.h>

typedef int (*func)(int ,int );

int add(int a,int b)
{
	return (a+b);
}

int minus(int a,int b)
{
	return (a-b);	
}
/*
int programm(func x,int a)
{
	int b=6;
	return (x)(a,b);
}
*/
int programm(func x,int a,int b)/////////////////////
{
	return (x)(a,b);
}

int main(int argc, const char *argv[])
{
	//printf("%d\n",programm(add,3));
	printf("%d\n",programm(add,3,4));////////////////////////////
	return 0;
}
