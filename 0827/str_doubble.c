#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/*int main()
{
	srand(time(NULL));
	int i=4;
	int j=13;
	int m=4;
	int n=13;
	

	for (i = 0; i < 4; i++) 
	{
		for (j = 0; j < 13; i++) 
		{
			lab :p[i][j]=rand()%53;
			for (m = 0; m < 4; m++) 
			{
				for (n = 0; n < 13; n++) 
				{
					if(p[m][n]==p[i][j])
					goto lab;
				}
				printf("%d",a[i][j]);
			}
		}	
	}
	return 0;
}*/

int riffle(int(*p)[13])
{
	int *q=(int *)p;
	int num=52;
	int a[52]={0};
	int temp;
	int i=0;

	srand(time(NULL));
	while(num>0)
	{
		temp=rand()%52;
		if(a[temp]==1)
		{
			continue;/////直接跳回while（num>0）;
		}
		else
		{
			a[temp]==1;
			*q=temp;
			q++;
			num--;
		}
	}
	q=(int *)p;
	for (i = 0; i < 52;q++, i++) {
		if(i%10==0)
		{
			printf("\n");
		}      		
		printf("%5d",*q);
	}
}

void printf_fun(int (*p)[13])
{	
	int *q=(int *)p;
	int i=0;
	for (i = 0; i < 52;q++, i++) {
		if(i%10==0)
		{
			printf("\n");
		}
		printf("%d\n",*q);
	}
}


int perflop(int (*p)[13],int p_num)
{
	
}

int main(int argc, const char *argv[])
{
	int a[4][13];
	
	riffle(a);
	
	printf("\n");
	//printf_fun(a);
	//perflop(a,4);

	return 0;
}
