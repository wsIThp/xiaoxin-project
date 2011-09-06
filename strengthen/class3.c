#include <stdio.h>

int Fib(int n)
{
	while(n>0)
	{
	int m=0;
	if (n==0) {
		m=1;
	}
	if (n==1) {
		m=1;
	}
	else
	{
		m=Fib(n-1)+Fib(n-2);	
	}

	return m;
	}
}

int main(int argc, const char *argv[])
{
	printf("%d\n",Fib(10));
	return 0;
}
