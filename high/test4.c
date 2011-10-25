#include <stdio.h>
int main(int argc, const char *argv[])
{
//	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int a[3][4];
	int i,j;
	int m=0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			a[i][j]=m;
			m++;
		}
	}

	printf("%x\n",a);
	printf("%x\n",*a);
	printf("\n");
	
	printf("%x\n",*(a+1));
	printf("%x\n",a+1);
	printf("\n");
	
	printf("%x\n",*(a+2));
	printf("%x\n",a+2);
	printf("\n");

	printf("%d\n",**a);
	printf("%d\n",**(a+1));
	printf("%d\n",**(a+2));

	return 0;
}
