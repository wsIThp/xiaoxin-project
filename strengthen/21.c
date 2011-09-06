#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int num=12;
	char a[100];
	itoa(num,a,10);
	printf("%s\n",a);
	return 0;
}
