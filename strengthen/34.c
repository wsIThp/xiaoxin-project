#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a[5][5]={{1,6,2,3,7},{2,7,3,2,2},{3,2,5,2,6},{3,2,6,4,2},{4,3,7,4,8}};
	int i;
	int j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j]=a[j][i];
		}
	}
	i=0;
	j=0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
