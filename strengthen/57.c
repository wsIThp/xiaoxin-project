#include <stdio.h>
#include <string.h>

int  first_occurce(char *src,char *dest)
{
	char *p;
	while((*src!='\0')&&(*dest!='\0'))
	{
		while (*src!=*dest) 
		{
			src++;
		}
		if(*src!=*dest)
		{
			printf("no same");
			return 0;
		}
		if(*src==*dest)
		{
			p=src;
			while(*src==*dest)
			{
				src++;
				dest++;
				continue;
			}
			if (*src!=*dest) {
				if (*dest=='\0') {
					printf("same str occurce:\n");
					printf("%s\n",p);
					break;
				}
				if (*dest!='\0') {
					printf("no same\n");
					break;
				}
				src++;
				continue;
			}
		}
		src++;
	}
}

int main(int argc, const char *argv[])
{
	char a[]="abcdefghijklmnopqrstuvwxyz";
	char b[10]={0};
	printf("input the find str:\n");
	fgets(b,10,stdin);
	b[strlen(b)-1]='\0';
	first_occurce(a,b);
	return 0;
}
