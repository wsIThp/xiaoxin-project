#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char *x="012345";
	char a[]="012345";
	printf("%d  %d\n",sizeof(x),strlen(x));
	printf("%d  %d\n",sizeof(a),strlen(a));
	printf("%d  %d\n",sizeof(char *),sizeof(int *));
	return 0;
}
