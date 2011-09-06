#include <stdio.h>
int main(int argc, const char *argv[])
{
	char a='A',b='X';
	char *p=NULL;
	printf("%x  %c\n",&a,a);
	printf("%X  %c\n",&b,b);
	p=&a;
	*p='Y';
	printf("%x  %c\n",p,*p);
	p=&b;
	*p='B';
	printf("%x  %c\n",p,*p);
	return 0;
}
