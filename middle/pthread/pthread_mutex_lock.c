#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NLOOP 1

int counter;
pthread_mutex_t counter_mutex=PTHREAD_MUTEX_INITIALIZER;/*全局变量锁 创建锁的方法若是局部变量则init创建*/

void *doit(void *);

int main(int argc, const char *argv[])
{
	pthread_t tidA, tidB;	

	pthread_create(&tidA,NULL,&doit,NULL);
	pthread_create(&tidB,NULL,&doit,NULL);

	pthread_join(tidA,NULL);
	pthread_join(tidB,NULL);

	return 0;
}

void *doit(void *vptr)
{
	int i,val;

	for (i = 0; i < NLOOP; i++) {
		pthread_mutex_lock(&counter_mutex);
		val+1;
		val=counter;
		printf("%x: %d\n",(unsigned int)pthread_self(),val+1);
		counter=val+1;
			
		pthread_mutex_unlock(&counter_mutex);
	}
	return NULL;
}
