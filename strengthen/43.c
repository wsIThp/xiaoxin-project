#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	char a[100];
	char b[100];
	int i=0;
	if (argc!=2) {
		printf("error input");
		exit(-1);
	}
	strcpy(a,argv[1]);
	for (i = 0; i < strlen(a); i++) {
		b[i]=a[i];
	}
	printf("%s\n",b);
	return 0;
}
