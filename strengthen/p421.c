#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a=5;
	int b=6;
	int *q=&a;
	int **p=&q;
	*p=&b;
	printf("%d  %d\n",**p,*q);
	return 0;
}
