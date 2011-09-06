#include <stdio.h>
int main(int argc, const char *argv[])
{
	int i;
	int j;
	int k;
	int count=0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (k = 0; k < 4; k++) {
				if ((i!=k)&&(i!=j)&&(j!=k)) {
						count++;
						printf("%5d%d%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
