#include <stdio.h>

int foo(int num,char ch)
{
	printf("%d\n%c\n",num,ch);
}

int main(int argc, const char *argv[])
{
	int (*p)(int,char);
	p=foo;
	p(4,'d');
	return 0;
}
