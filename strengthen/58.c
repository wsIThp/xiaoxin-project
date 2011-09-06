#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char *p[5]={0};
	int i=0;
	if (argc!=6) {
		printf("error input \n");
		exit(-1);
	}
	for (i = 0; i < 5; i++) {
		p[i]=malloc(20);
		strcpy(p[i],argv[i+1]);
		printf("%s\n",p[i]);
	}
	return 0;
}
