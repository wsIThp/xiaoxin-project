#include <stdio.h>

int jiecheng(int n)
{
	int m=0;
	if (n==1) {
		m=1;
	}
	else
	{
		m=n*jiecheng(n-1);	
	}
	return m;
}

int main(int argc, const char *argv[])
{
	int n;
	n=atoi(argv[1]);
	printf("%d\n",jiecheng(n));
	return 0;
}
