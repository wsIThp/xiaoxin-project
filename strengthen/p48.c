#include <stdio.h>
char str[]="hello world";
char *ptr="HELLO WORLD";
char *str2=0;
int main(int argc, const char *argv[])
{
	int i;
//	printf("%s\n",str);
	printf("%s\n",ptr);
	ptr=str;
	printf("%s\n",ptr);
	ptr[1]='1';
	printf("%s\n",ptr);
	//*(ptr++)='2';
	*ptr='2';
	ptr++;
	printf("%s\n",ptr);
	*(ptr+1)='3';
	printf("%s\n",ptr);
//	str[1]="-";
//	printf("%s   %s\n",str,ptr);
//	ptr=str;
//	*(ptr+1)='9';
//	for (i = 0; i < 24; i++) {
//		printf("%d  %c   %x\n",i,*(ptr+i),*(ptr+i));
//	}
//	printf("%s   %s\n",str,ptr);
	return 0;
}
