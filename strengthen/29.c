#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	char a[100];
	int n;
	if (argc!=3) {
	printf("please input str and number :");
	}
	//fgets(a,sizeof(argv[1]),argv[1]);
	//a=argv[1];
	strcpy(a,argv[1]);
	n=atoi(argv[2]);
	printf("%s\n",a);
	printf("%c\n",(a[n-1]-32));

	return 0;
}
