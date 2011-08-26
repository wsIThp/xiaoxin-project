#include <stdio.h>
#define m 100

int find_mastr(char *a,int n)
{
	int j;
	int b[26]={0};
	int max=0;
	int flag = 0;
	while(*a!='\0')
	{
		b[*a-'a']+=1;
		a++;
	}
	for (j = 0; j < 26; j++) 
	{
		if (b[j]>max) 
		{
			max=b[j];
			flag = j;
		}
	}
	printf("%d\n", max);
	return flag+97;
}

int main(int argc, const char *argv[])
{
	char a[m];
	scanf("%s",a);
	printf("%c",find_mastr(a,m));
	printf("\n");
	return 0;
}
