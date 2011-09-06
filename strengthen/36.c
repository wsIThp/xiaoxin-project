#include <stdio.h>

void clec_array(int *a,int n)
{
	int i=0;
	int min=0;
	int j=0;
	int b;
	int temp;
	for (i = 0; i < n; i++) {
		b=i;
		for (j = 0; j < n; j++) {
			if (a[b]>a[j]) {
				temp=a[j];
				a[j]=a[b];
				a[b]=temp;
			}
		}
	}
}

void print_array(int *p,int n)
{
	int i=0;
	for (i = 0; i < n; i++) {
		printf("%5d",p[i]);
	}
}

int main(int argc, const char *argv[])
{
	int a[10]={5,-9,32,77,63,-24,14,0,21,45};	
	clec_array(a,10);
	print_array(a,10);
	printf("\n");
	return 0;
}
