#include <stdio.h>

void print_map(int n)
{
	int i=0;
	for (i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}

int main(int argc, const char *argv[])
{
	int i=0;
	for (i = 1; i < 8; i+=2) {
		print_map(i);
	}
	i=0;
	for (i = 5; i > 0; i-=2) {
	print_map(i);
	}
	return 0;
}
