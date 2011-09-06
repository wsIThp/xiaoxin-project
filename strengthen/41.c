#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char str[]="I like programming";
	int i=strlen(str)-1;
	while((str[i]!='\0')&&(i>=0))
	{
		printf("%c",str[i]);
		i--;
	}
	printf("\n");
	return 0;
}

