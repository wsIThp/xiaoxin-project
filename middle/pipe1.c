#include <stdio.h>
#include <fcntl.h>
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
	int i=0;
	if (pipe(fd)!=0) {
		perror("pipe");
		exit(-1);
	}
	pid=fork();
	if (pid==0) {
		//char str1[]="akaedu";//////strcpy(str1,"akaedu");
		char str1[4096];
		close(fd[0]);
		for (i = 0; i < 3; i++) {
			fgets(str1,sizeof(str1),stdin);
			write(fd[1],str1,strlen(str1));
		}
		sleep(5);
	}
	else if(pid > 0)
	{
		close(fd[1]);
		int i=3;
		int fp;
		fp=open("xinxin",O_CREAT|O_RDWR|O_APPEND,0777);
		if (fp<0) {
			perror("open");
			exit(-1);
		}
		while(i--)
		{
			len=read(fd[0],str,sizeof(str));
			write(fp,str,len);
		}
		wait(NULL);
	}
	else
	{
		perror("pipe");
		exit(-1);
	}
	return 0;
}
