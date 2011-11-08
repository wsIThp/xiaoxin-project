#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
	pid_t temp;
	int i=0;
	temp=fork();
	if(temp>0)
	{
	//	while(1)
	//	{
			printf("I am father: \n");
//			fflush(stdout);/////刷新缓冲区
		printf("%d\n",temp);/////父进程返回的值是子进程的id号
		sleep(1);
	//	}
	}
	else if(temp==0)
	{
		i=10;
		while(i--)
		{
			printf("I am child:  %d\n",i);
//			fflush(stdout);
			printf("%d\n",getpid());/////
			sleep(1);	
		}
	}
	else
	{
		perror("fork");
		exit(-1);
	}
	return 0;
}
