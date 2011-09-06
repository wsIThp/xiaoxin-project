#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, const char *argv[])
{
	srand(time(NULL));
	int i=0;
	int a[100];
	int max;
	int min;
	int m;
	int b;
	for (i = 0; i < 100; i++) {
		a[i]=rand()%100;
		printf("%5d",a[i]);
	}
	printf("\n");
	max=min=a[0];
	i=1;
	for (i = 1; i < 100; i++) {
		if (a[i]>max) {
			max=a[i];
			m=i;
		}
	}
	i=1;
	for (i = 1; i < 100; i++) {
		if (a[i]<min) {
			min=a[i];
			b=i;
		}
	}

	printf("%-5d%d\n",max,m);
	printf("%-5d%d\n",min,b);
	return 0;
}
