#include <stdio.h>

//typedef int (*func)(int a,int b);1111111111111111111111111
int (*func)(int a,int b);

int add(int a,int b)
{
	return (a+b);
}

int minus(int a,int b)
{
	return (a-b);	
}

//int programm(func x,int a,int b)1111111111111111111
//int programm(int (*func)(int a,int b),int a,int b)
//int programm(int (*func)(int ,int),int a,int b)
int programm(int (*func)(),int a,int b)
{
	return (*func)(a,b);
}

int main(int argc, const char *argv[])
{
	printf("%d\n",programm(add,3,5));
	return 0;
}
