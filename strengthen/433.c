#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_strcpy(char *a,char *b,int n)
{
	while(*a!='\0')
	{
		*b=*(a+n-1);
		a++;
		b++;
	}
	*b='\0';
}

int main(int argc, const char *argv[])
{
	char src[100];	
	char dest[100]; 
	int n=0;
	if (argc!=3) {
		printf("error input");
		exit(-1);
	}
	strcpy(src,argv[1]);
	n=atoi(argv[2]);
	my_strcpy(src,dest,n);
	printf("%s\n",dest);
	return 0;
}
