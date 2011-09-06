#include <stdio.h>
#include <string.h>

void delete_str(char *a)
{
	int i=0;
	int j=0;
	int k=0;
	int n=strlen(a);
	for (i = 0; i < n; i++) 
	{
		for (j= k = i+1; j < n; j++) 
		{
			if (a[i]!=a[j]) 
			{
				a[k++]=a[j];	
			}
		}
		n=k;
	}
	for (i = 0; i < n; i++) {
		printf("%5c",a[i]);
	}
}

int main(int argc, const char *argv[])
{
	char a[100];
	fgets(a,100,stdin);
	a[strlen(a)-1]='\0';
	delete_str(a);
	printf("\n");
	return 0;
}
