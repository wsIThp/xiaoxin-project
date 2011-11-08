#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char *const p_argv[]={"./a.out",NULL}; 
int main(int argc, const char *argv[])
{
	pid_t temp;
	temp=fork();
	if (temp>0) {
		execvp("./a.out",p_argv);
		printf("I am parent \n");
		wait(NULL);
	}
	else if(temp==0)
	{
		while(1)
		{
			printf("I am child\n");
			sleep(1);

		}	
	}
	else
	{
		perror("esecv");
		exit(-1);
	}
	return 0;

}
