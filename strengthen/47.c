#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp(char *a,char *b)
{
	while((*a!='\0')&&(*b!='\0'))
	{	
		while((*a==*b)&&(*a!='\0')&&(*b!='\0')) {
			a++;
			b++;
		}
		if ((*a=='\0')&&(*b=='\0')) {	
			return 0;
		}
		if (*a>*b) {
			return 1;
		}
		if (*a<*b) {
			return -1;
		}
	}
}

int main(int argc, const char *argv[])
{
	char a[100];
	char b[100];
	if (argc!=3) {
		printf("please input as stra,strb:");
		exit(-1);
	}
	strcpy(a,argv[1]);
	strcpy(b,argv[2]);
	printf("%d",my_strcmp(a,b));
	printf("\n");
	return 0;
}
