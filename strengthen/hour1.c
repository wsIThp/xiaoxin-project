#include <stdio.h>
#include <string.h>

int find_first(char *a)
{
	char *temp=a;
	int i=0;
	for (i = 0; i < strlen(a); i++) 
	{
		if ((*temp==a[i])&&(temp!=&a[i])) 
		{			
			temp++;
			a[i]='1';
			continue;
		}
	}
	for (i = 0; i < strlen(a); i++) {
		if (a[i]!='1') {
			printf("%5c",a[i]);
		}
	}
}

int main(int argc, const char *argv[])
{
	char a[100];
	printf("please input the str :\n");
	fgets(a,sizeof(a),stdin);
	a[strlen(a)-1]='\0';
	find_first(a);
	printf("\n");
	return 0;
}
