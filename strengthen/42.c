#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	char str[100];
	char str1[100];
	int m=0;
	int n=0;
	int i=0;
	if (argc!=3) {
		printf("error input\n ");
		exit(-1);
	}
	strcpy(str,argv[1]);
	strcpy(str1,argv[2]);
	m=strlen(str);
	n=strlen(str1);
	if (m==n) 
	{
		for (i = 0; i < m; i++) 	
		{
			if(str[0+i]!=str1[m-(1+i)])
			{
				printf("no huiwen\n");
				exit(0);
			}
		}
		printf("hui wen\n");
	}
	if (m!=n) {
		printf("no huiwen\n");
		return 0;
	}
	return 0;
}





