#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_strcat(char *a,char *b)
{
	while (*a!='\0') 
	{
		a++;
	}
	while(*b!='\0')
	{
		*a=*b;
		a++;
		b++;
	}
	*a='\0';
}

int main(int argc, const char *argv[])
{
	char a[100]="saddhna";
	char b[]="lkjlkh";
	my_strcat(a,b);
	printf("%s\n",a);
	return 0;
}
