#include <stdio.h>
#define n 50 
#define temp 6
int main(int argc, const char *argv[])
{
	int a[n]={0};
	int count=0;
	int i=0;
	for (i = 0 ; ; i++) 
	{
		if (i==n) {
			i=0;
		}
		if (a[i]==0) 
		{
			count++;
			if (count==temp) 
			{
				a[i]=1;
				count=0;
				printf("%5d()\n",i+1);
			}
			else
			{
				printf("%5d",i+1);
			}	
		}
	}
	return 0;
}
