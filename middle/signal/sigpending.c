#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
	sigset_t set,oldset,pend ;
	sigemptyset(&set); 
	sigemptyset(&pend);
	sigaddset(&set,SIGINT);
	sigprocmask(SIG_SETMASK,&set,&oldset);
	while(1)
	{
		spending();	
	}
	return 0;
}
