#include <stdio.h>

int foo(int num ,char ch)
{
	printf("%d\n%c\n",num,ch);
}

int too(int num,char ch)
{
	printf("%d\n%c\n",num,ch);
}

int main(int argc, const char *argv[])
{
	int i=0;
	int (*p[10])(int ,char)={foo,too};
	while(p[i]!=NULL)
	{
		p[i](i,'a'+i);
		i++;
	}

	return 0;
}
