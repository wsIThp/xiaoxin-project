#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
void *foo(void *num)
{
	int i=0;
	int t;
	t=*(int *)num;
	for (i = 0; i < 2*(t+1); i++) 
	{
		printf("I am child pthreadid  %d\n",t);	
		sleep(1);
	}
	return(void *)t;
}


int main(int argc, const char *argv[])
{
	//pthread_t tid,tid1,tid2,tid3;
	pthread_t tid;
	void *temp;
	int a;
	int i=0;
	/*创建线程*/
	
	pthread_create(&tid,NULL,foo,(void *)&i);	
	sleep(1);
	pthread_join(tid,&temp);
	printf("pthread %d\n",(int )temp);
	i++;
	pthread_create(&tid,NULL,foo,(void *)&i);	
	sleep(1);
	pthread_join(tid,&temp);
	printf("pthread %d\n",(int )temp);
	i++;
	pthread_create(&tid,NULL,foo,(void *)&i);	
	sleep(1);
	pthread_join(tid,&temp);
	printf("pthread %d\n",(int )temp);
	i++;
	pthread_create(&tid,NULL,foo,(void *)&i);	
	sleep(1);
	pthread_join(tid,&temp);
	printf("pthread %d\n",(int )temp);
	return 0;
}
