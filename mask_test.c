#include <stdio.h>
int main(int argc, const char *argv[])
{
	unsigned int n ;
	printf("input\n");
	scanf("%d",&n);
	unsigned int mask=(1<<31);
	int counter=0;
	int i=0;
for (i = 0; i < 32; i++) 
{
	if((mask & n) > 0)///////这个运算只有两种结果1是为0.     2是大于0
	{
		counter+=1;
	}
	mask=mask>>1;   /////特别注意 ，在移位后要将移位后的mask赋值给之前的mask
}
	/*while(n)		//////位云算另一种方法
	{
		counter++;
		n=n&(n-1)i;
	}*/
   	printf("%d\n",counter);
	return 0;
}
