#include <stdio.h>

int sum(int n)
{
	if (n==0) {
	return 0;
	}
	else
	{
	 return n+sum(n-1);
	}
}

int main(int argc, const char *argv[])
{
	int n=10;
	printf("%d\n",sum(n));
	return 0;
}
