#include <stdio.h>
int main(int argc, const char *argv[])
{
	int buf1[6]={1,2,3,4,5,6};
	int buf2[2][3];
	int i=0;
	int j=0;
	int h=0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			buf2[i][j]=buf1[h];
			h++;
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\n",buf2[i][j]);
		}
	}
	return 0;
}
