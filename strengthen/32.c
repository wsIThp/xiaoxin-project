#include <stdio.h>
#define SIZE 10
int main(int argc, const char *argv[])
{
	int a[SIZE]={0};
	int i=0;
	for (i = SIZE-1; i >= 0; i--) {
		a[i]=i+10;
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
