#include <stdio.h>
#define SIZE 10
int main(int argc, const char *argv[])
{
	int a[SIZE]={0},i=0;
	int sum=0;
	for (i = 0; i < SIZE; i++) {
		a[i]=i+10;
		sum+=a[i];
	}
	printf("%d\n",sum);
	return 0;
}
