#include <stdio.h>

void quick_array(int *a,int n)
{
	int i=0;
	int j=0;
	int temp=0;
	for (j = 0; j < n; j++) 
	{
		for (i = 0; i < n-1; i++) 
		{
			if (a[i]>a[i+1]) 
			{	
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				temp=0;
			}
		}
	}
}

void print_array(int *p,int n)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("%5d",p[i]);
	}
}

int main(int argc, const char *argv[])
{
	int a[10]={5,-9,32,77,63,-24,14,0,21,45};
	quick_array(a,10);	
	print_array(a,10);
	printf("\n");
	return 0;
}
