#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>

char str[4096];

int main(int argc, const char *argv[])
{
	int fd[2];
	int len=0;
	pid_t pid;
	if (pipe(fd)!=0) {
		perror("pipe");
		exit(-1);
	}
	pid=fork();
	if (pid==0) {
		char str1[]="akaedu";//////strcpy(str1,"akaedu");
		close(fd[0]);
		write(fd[1],str1,strlen(str1));
		sleep(5);
	}
	else if(pid > 0)
	{
		close(fd[1]);
		len=read(fd[0],str,sizeof(str));
		write(STDOUT_FILENO,str,len);
		write(STDOUT_FILENO,"\n",1);
		wait(NULL);
	}
	else
	{
		perror("pipe");
		exit(-1);
	}
	return 0;
}
