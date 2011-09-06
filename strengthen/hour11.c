#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	int i=0;
	int j=0;
	char a[100];
	fgets(a,100,stdin);
	a[strlen(a)-1]='\0';
	for (i = 0; i < (strlen(a)-1); i++) 
	{
		if (a[i]!=-1) 
		{
			for (j = i+1; j <strlen(a); j++) 
			{
				if (a[i]==a[j]) 
				{
					a[i]=-1;
					a[j]=-1;
				}
			}
		}
	}
	for (i = 0; i < strlen(a); i++) 
	{
		if (a[i]!=-1) 
		{
			printf("%4c",a[i]);
		}
	}
	printf("\n");
	return 0;
}
