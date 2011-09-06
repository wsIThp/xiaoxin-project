#include <stdio.h>
int b;
int *foo(int *q)
{
	static int a=5;
	int *p=&a;
	printf("%d\n",*p);
	return p;
}
int main(int argc, const char *argv[])
{
	int *p;
	p=foo(p);
	printf("%d\n",*p);
	return 0;
}
