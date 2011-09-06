#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	char  a[100];
	char b[100];
	int i=0;
	int j=0;
	int temp=0;
	fgets(a,sizeof(a),stdin);
	a[strlen(a)-1]='\0';
	for (i = 0; i < strlen(a); i++) {
		printf("%5c",a[i]);
	}
	printf("\n");
	for (j = 0; j < strlen(a); j++) {
		temp=a[j];
		for (i = 0; i < strlen(a); i++) {
			if ((a[i]==temp)&&(j!=i)) {
				printf("exise %c\n",temp);
			}
		}
	}
	return 0;
}
