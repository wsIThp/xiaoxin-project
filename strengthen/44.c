#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char *p)
{
	int count=0;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}

int main(int argc, const char *argv[])
{
	char a[100];
	if (argc!=2) {
		printf("error input :");
		exit(-1);
	}
	strcpy(a,argv[1]);
	printf("%d\n",my_strlen(a));
	return 0;
}
