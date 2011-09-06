#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a[]={1,2,3,5,6,7,8,9,0,11,22,33,44,55,66};
	int i=0;
	int len=sizeof(a)/sizeof(int);
	int j=len;
	int temp=0;
	while(i<j)
	{
		while(a[i]%2==1)
		{
			i++;
		}
		while(a[j-1]%2==0)
		{
			j--;
		}	
		temp=a[i];
		a[i]=a[j-1];
		a[j-1]=temp;
		temp=0;
		i++;
		j--;
	}
	for (i = 0; i < len; i++)
	{
		printf("%5d",a[i]);
	}
	return 0;
}
