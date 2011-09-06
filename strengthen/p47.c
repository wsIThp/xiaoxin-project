#include <stdio.h>
int main(int argc, const char *argv[])
{
	char *p="hello world";
	char str[]="hello world";
	//*p='H';
	//printf("%x\n",p);
	//printf("%c\n",*p);
	//printf("%s\n",p);
	//p=str;
	//*p='H';
	str[0]='H';
	printf("%s\n",str);
	return 0;
}
