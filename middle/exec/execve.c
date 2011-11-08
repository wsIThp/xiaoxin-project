#include <stdio.h>
#include <unistd.h>
char *const ps_argv[]={"ps","-o","pid,ppid,pgrp,session,tpgid,comm",NULL};
char *const ps_envp[]={"PATH=/bin:/usr/bin","term=console",NULL};
int main(int argc, const char *argv[])
{
	pid_t temp;
	execve("/bin/ps",ps_argv,ps_envp);

	return 0;
}
