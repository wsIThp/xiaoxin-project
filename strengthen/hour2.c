#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void delete_char(char *a,char *b)
{
	int i=0;
	for (i = 0; i < strlen(a); i++) {
		if (*b==a[i]) {
			a[i]='0';
		}
	}
	for (i = 0; i < strlen(a); i++) {
		if (a[i]!='0') {
			printf("%c\n",a[i]);
		}
	}
}

int main(int argc, const char *argv[])
{
	char a[100];
	char b[100];
	if (argc!=3) {
		printf("please input the str[a]:ch b:");
		exit(-1);
	}
	strcpy(a,argv[1]);
	strcpy(b,argv[2]);
	delete_char(a,b);
	return 0;
}
