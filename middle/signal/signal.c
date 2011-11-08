#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sighandler(int num)
{
	printf("cccccccc\n");
	printf("%d\n",num);
}

int main(int argc, const char *argv[])
{
	struct sigaction temp;
	struct sigaction temp1;
	///sigemptyset(&temp.sa_mask);   ////
	sigfillset(&temp.sa_mask);    ////
	temp.sa_handler=sighandler;
	temp.sa_flags=0;

	sigfillset(&temp1.sa_mask);    ////
	temp1.sa_handler=sighandler;
	temp1.sa_flags=0;

	sigaction(2,&temp,NULL);
	sigaction(9,&temp1,NULL);
	while(1)
	{
		printf("abcd\n");
		sleep(2);
	}
	return 0;
}
