#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	unsigned int number=0;
	unsigned int i=0;
	int count=0;
	unsigned int mask=(1<<31);
	if (argc!=2) {
		printf("error input\nplease input number");
		exit(-1);
	}
	number=atoi(argv[1]);
	for (i = 0; i < 32; i++) 
	{	
		if ((mask&number)>0) 
		{
			count+=1;
		}
		mask=mask>>1;
	}
	printf("%d\n",count);
	return 0;
}
