#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <pthread.h>

void *copy_pthread(void *num)
{
	int fd;
	int t;
	struct stat mp;
	t=*(int *)num;
	printf("I am child%d\n",t);
	fd=open("argv[1]",O_RDWR);
	fstat(fd,&mp);
	      
	sleep(1);
	return (void *)t;
}

int main(int argc, const char *argv[])
{
	int i=0;
	int n=0;
	void *temp;
	printf("please input how many pthread to copy:\n");
	n=fgetc(stdin)-48;
	printf("%d\n",n);
	pthread_t tid[n];
	//	if (argc!=2) {
	//		printf("please input as ./a.out n\n");
	//		perror("error input");
	//		exit(-1);
	//	}
	for (i = 0; i < n; i++)
	{
		if (pthread_create(&tid[i],NULL,copy_pthread,(void *)&i)!=0)
		{
			perror("error pthread\n");
		}
		sleep(1);
	}
		for (i = 0; i < n; i++) {
			pthread_join(tid[i],&temp);
			printf("%d\n",(int)temp);
}
return 0;
}
