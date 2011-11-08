#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
int main(int argc, const char *argv[])
{
	pid_t fp;
	fp=fork();
	if (fp > 0) {
		execlp("./a.out","./a.out",NULL);
		printf("I am parent:\n");
		//sleep(1);
	}
	else if (fp==0) {
		while(1)
		{
			printf("I am child\n");
			sleep(1);
		}
	}
	else  {
		perror("execlp");
		exit(-1);
	}
	return 0;
}
