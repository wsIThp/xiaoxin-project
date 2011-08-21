#include <stdio.h>


int pop(int x)
{
	x = (x&0x55555555) + ((x >> 1) & 0x55555555);
	x = (x&0x33333333) + ((x >> 2) & 0x33333333);
	x = (x&0x0f0f0f0f) + ((x >> 4) & 0x0f0f0f0f);
	x *= 0x01010101;
return x >> 24;
} 

int main(int argc, const char *argv[])
{
	unsigned int n;
	printf("please input the number :\n");
	scanf("%d",&n);
	printf("%d\n",pop(n));
	return 0;
}
