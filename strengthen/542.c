#include <stdio.h>
int main(int argc, const char *argv[])
{
	char *p="hello world";
	*p='H';
	printf("%c\n",*p);
//	printf("%s\n",p);
	return 0;
}
