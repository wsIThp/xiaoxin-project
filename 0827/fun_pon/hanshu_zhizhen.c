#include <stdio.h>

int foo(int num)
{
	printf("%d\n",num);
}

int main(int argc, const char *argv[])
{
	int (*p)(int);
	p=foo;
	p(3);
	return 0;
}
