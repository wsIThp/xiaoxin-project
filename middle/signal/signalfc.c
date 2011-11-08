#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void sighandler(int num)
{
	wait(NULL);
}

int main(int argc, const char *argv[])
{
	pid_t temp;
	struct sigaction tp;
	sigfillset(&tp.sa_mask);
	tp.sa_handler=sighandler;
	tp.sa_flags=0;
	int i=0;

	temp=fork();
	if (temp>0) 
	{
		printf("I am father\n");
		sleep(1);
//		sigaction(17,&tp,NULL);
		temp=fork();
		{
			if (temp>0)
			{
				printf("I am father\n");
				sleep(1);
//				sigaction(17,&tp,NULL);
				temp=fork();
				if (temp>0)
				{
					printf("I am father\n");
					temp=fork();
					if (temp>0)
					{
						while(1)
						{
							printf("I am father\n");
							sleep(1);
							sigaction(17,&tp,NULL);
						}
					}
					else if(temp==0)
					{
						i=10;
						while(i--)
						{
							printf("I am child 4\n");
							sleep(1);
						}
					}
					sleep(1);
				}
				else if(temp==0)
				{
					i=8;
					while(i--)
					{
						printf("I am child 3\n");
						sleep(1);
					}
				}
			}
			else if(temp==0)
			{
				i=6;
				while(i--)
				{
					printf("I am child 2\n");
					sleep(1);
				}
			}
		}
	}
	else if(temp==0)
	{
		i=4;
		while(i--)
		{
			printf("I am child 1\n");
			sleep(2);
		}
	}
	else
	{
		perror("error fork\n");	
	}
	return 0;
}
