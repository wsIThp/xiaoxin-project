#include <stdio.h>
int main(int argc, const char *argv[])
{
	char str[4]={'a','b','c','d'};
	char *p=str;
	int *q=str;
	printf("%x\n",str);
	printf("%x\n",p);
	printf("%x\n",q);
	printf("%x  %c\n",*p,*p);
	printf("%x  %c\n",*q,*q);
	return 0;
}
