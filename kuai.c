#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define  M	 20

void init_array(int *a,int n)
{
	srand(time(NULL));
	int i=0;
	for (i = 0; i < n; i++)
	{
		a[i]=rand()%100;
	}
}
void printf_array(int *a,int n)
{
	int i=0;
	for (i = 0; i < n; i++)
	{
		if(i%5==0)
		{
			printf("\n");
		}
		printf("%5d",a[i]);
	}
}
void quick_array(int *a,int x,int y)
{
	int i=x;
	int j=y;
	int temp=0;
	int mid=((i+j)/2);

	do
	{
	while((a[i]<a[mid])&&(i<y)) i++;
	while((a[j]>a[mid])&&(j>x)) j--;

		if(i<=j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
			j--;
		}
	}
	while(i<=j);
	if(x<j)
	{
		quick_array(a,x,j);
	}
	if(i<y)
	{
		quick_array(a,i,y);
	}
}
int main(int argc, const char *argv[])
{
	int a[M];
	init_array(a,M);
	printf_array(a,M);
	printf("\n");
	quick_array(a,0,M-1);
	printf_array(a,M);

	printf("\n");
	return 0;
}
