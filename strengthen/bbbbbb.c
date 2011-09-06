#include <stdio.h>
int main(int argc, const char *argv[])
{
	char a[10];
	fgets(a,10,stdin);
	a[strlen(a)-1]='\0';
	printf("%d\n",strlen(a));
	return 0;
}
