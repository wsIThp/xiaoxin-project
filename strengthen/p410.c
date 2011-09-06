#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a[10],*p;
	for (p = a; p < a+10; p++) {
		scanf("%d",p);
	}
	for (p = a+9; p >= a ; p--) {
		printf("%d",*p);
	}
	printf("\n");
	return 0;
}
