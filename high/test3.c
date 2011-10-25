#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a=256;
	char c='a';
	char *p=(char *)&a;
	char *q=&c;
	printf("%d\n",*p);
	printf("%d\n",*q);
	return 0;
}
