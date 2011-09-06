#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_strcpy(char *a,char *b)
{
	while(*a!='\0')
	{
		*b=*a;
		a++;
		b++;
	}
	*b='\0';
}

int main(int argc, const char *argv[])
{
	char src[100];	
	char dest[100]; 
	if (argc!=2) {
		printf("error input");
		exit(-1);
	}
	strcpy(src,argv[1]);
	my_strcpy(src,dest);

	printf("%s\n",dest);
	return 0;
}
