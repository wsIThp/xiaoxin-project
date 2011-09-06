#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void min_same(int *a)
{
	int i=0;
	int j=0;
	int c[20]={-1};
	for (i = 1; i < 20; i++) {
		for (j = 0; j < i; j++) {
			if(a[i]==a[j])
			{
				a[i]=-1;
			}
		}
	}
	i=0;
	for (i = 0; i < 20; i++) {
		{
		if (a[i]!=-1) {
			printf("%5d",a[i]);
			}
		}
	}
}

int main(int argc, const char *argv[])
{
	int a[20];
	int i;
	srand(time(NULL));
	for (i = 0; i < 20; i++) {
		a[i]=rand()%20;
		if (i%5==0) {
			printf("\n");
		}
		printf("%5d",a[i]);
	}
	printf("\n");
	min_same(a);
	printf("\n");
	return 0;
}
