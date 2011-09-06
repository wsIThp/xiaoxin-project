#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	

int main(int argc, const char *argv[])
{
	int i=0;
	char str[2][20];
	char max=0;
	if (argc!=3) {
		printf("input str[0],str[1]");
		exit(-1);
	}
	strcpy(str[0],argv[1]);
	strcpy(str[1],argv[2]);
	strcat(str[0],str[1]);
	for (i = 0; i < strlen(str[0]); i++) {
		if (str[0][i]>max) {
			max=str[0][i];
		}
	}
	printf("%c\n",max);
	//printf("%s\n",str[0]);
	//printf("%s\n",str[1]);
	return 0;
}
