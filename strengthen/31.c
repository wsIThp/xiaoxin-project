#include <stdio.h>
#define SIZE 10
int main(int argc, const char *argv[])
{
	int a[SIZE]={0},i=0;
	for (i = 0; i < SIZE; i++) {
		a[i]=i+10;
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
