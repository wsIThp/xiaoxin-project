#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *foo(void *num)
{
	int t;
	t=*(int *)num;
	while(1)
	{
		printf("I am child pthreadid  %d\n",t);
		//	printf("I am child pthreadid%u  %d\n",pthread_self(),t);////////获取线程号
		sleep(1);
	}
	return;
}

int main(int argc, const char *argv[])
{
	pthread_t tid;
	int a;
	int i=0;
	for (i = 0; i < 5; i++) {
		//a=i;
		/*创建线程*/
		if (pthread_create(&tid,NULL,foo,(void *)&i)!=0) {
			perror("error pthread\n");
		}
		sleep(1);
	}
	while(1)
	{
		printf("I am father\n");
		sleep(1);
	}

	return 0;
}
