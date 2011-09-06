#include <stdio.h>
#define PI 3.1515926
int main(int argc, const char *argv[])
{
	char a[10];
	int b=25;
	int c=15;
	printf("input the number :\n");
	fgets(a,sizeof(a),stdin);
	printf("%d\n",a);
	printf("%d\n",b/2);
	printf("%f\n",b/2);
	return 0;
}
