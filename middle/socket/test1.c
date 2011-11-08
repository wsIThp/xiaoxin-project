#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a[5]={1,2,3,4,5};
	int b=0x12345678;
	int i=0;
	printf("%x\n",&a[0]);
	printf("%x\n",a);
	printf("%x\n",&a[1]);
	printf("%x\n",&a[2]);
	printf("%x\n",&a[3]);
	printf("%x\n",&a[4]);
	for (i = 0; i < 4; i++) {
		printf("%x\n",*((char *)&b+i));
	}

	return 0;
}
