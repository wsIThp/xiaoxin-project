#include <stdio.h>

int str_compare(char *a,char *b)
{
	if(*a=='\0'&& *b=='\0')
	
		return 0;
	else if(*a=='\0')
		return -1;
		else if(*b=='\0')
		return 1;
		while(*a==*b)
		{
			if (*a=='\0'&&*b=='\0') 
				return 0;
				a++;
				b++;
		}
		if (*a>*b) {
			return 1;
		}
		else if(*a<*b){
		return -1;
		}
		return 0;
}

int main(int argc, const char *argv[])
{
	char a[10]="dbcd";
	char b[10]="asabcd";
	printf("%d\n",str_compare(a,b));
	return 0;
}
