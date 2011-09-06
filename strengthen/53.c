#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void  str_tok(char *p)
{
	int i=0;	
	char str[4][6]={0};
	char *token;
	token=strtok(p," ");
	printf("%s\n",token);
	while((token=strtok(NULL," "))!=NULL)
	{
//		token=strtok(NULL," ");
			strcpy(str[i],token);
			printf("%s\n",str[i]);
			//printf("%s\n",token);
			i++;
	}
}
int main(int argc, const char *argv[])
{
	char p[]="I like this game";
	str_tok(p);
	return 0;
}
