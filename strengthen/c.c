#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char a[]={'a','b','\0','c','\0'};
	int i;
	i=10; i++; int x=++i;
	printf("%s\n",a);
	printf("%d\n",strlen("a\n\"\x41"));
	printf("%d\n",strlen("\n\"\x41"));
	printf("%d\n",strlen("a\"\x41"));
	printf("%d\n",strlen("a\n\x41"));
	printf("%d\n",strlen("a\n\"41"));
	printf("%d\n",strlen("a\n\""));
	printf("%d\n",strlen("a\n\"\x41"));
	printf("%d\n",strlen("\010"));
	printf("%d\n",x);
	printf("%f\n",1.5);
	return 0;
}
