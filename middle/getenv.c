#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	printf("PATH=%s\n",getenv("PATH"));
	setenv("PATH","hello",1);
	printf("PATH=%s\n",getenv("PATH"));
	return 0;
}
