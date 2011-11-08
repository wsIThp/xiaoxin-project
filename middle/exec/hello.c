#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
	printf("hello world\n");
	printf("%d\n",getpid());
	return 0;
}
