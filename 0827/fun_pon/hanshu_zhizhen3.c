#include <stdio.h>

int foo(int num,char ch)
{
	printf("%d\n%c\n",num,ch);
}

int main(int argc, const char *argv[])
{
	int (*p[10])(int,char)={foo};
	int i=0;

	while(p[i]!=NULL)
	{
		foo(i,i+'d');
		i++;
	}
	return 0;
}
