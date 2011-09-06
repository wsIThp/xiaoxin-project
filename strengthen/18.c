#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char str[100];
	int count=0;
	int i=0;
	printf("please input the str :");
	fgets(str,100,stdin);
	for (i = 0; i < strlen(str); i++) 
		{
			if (str[i]=='a') 
			{
				count ++;
			}
		}
	printf("%d\n",count);	
	return 0;
}
