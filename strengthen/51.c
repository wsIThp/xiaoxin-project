#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int  shuixianhua(int n)
{
	int a;
	int b;
	int c;
	a=n/100;
	b=(n/10)%10;
	c=n%10;
	if ((pow(a,3)+pow(b,3)+pow(c,3))==n) {
		printf("this nuumber is shuixianhua shu :");
		return 1;
	}
	return 0;
}

int main(int argc, const char *argv[])
{
	int number;
	if (argc!=2) {
		printf("please input number");
		exit(-1);
	}
	number=atoi(argv[1]);
	printf("%d",shuixianhua(number));
	printf("\n");
	return 0;
}
