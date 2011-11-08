#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>

void sighandler(int num)
{
	wait(NULL);
}

int main(int argc, const char *argv[])
{
	struct stat tp;
	int fd,new;
	char buf[4096];
	char *sr,*dest;
	int i=0;
	pid_t temp;
	struct sigaction pfather;
	sigfillset(&pfather.sa_mask);
	pfather.sa_handler=sighandler;
	pfather.sa_flags=0;

	if (argc!=3) {
		printf("please input as ./a.out srcfile destfile\n");
		exit(-1);
	}
	fd=open(argv[1],O_RDWR);
	if (fd<0) {
		printf("error open fd\n");
		exit(-1);
	}
	fstat(fd,&tp);
	new=open(argv[2],O_RDWR|O_CREAT,0777);
	if (new<0) {
		printf("error open new\n");
		exit(-1);
	}
	lseek(new,tp.st_size-1,SEEK_SET);
	write(new," ",1);
	int j=0;

	sr=mmap(NULL,tp.st_size,PROT_READ,MAP_SHARED,fd,0);
	dest=mmap(NULL,tp.st_size,PROT_WRITE,MAP_SHARED,new,0);
	/*假设被复制文件中的内容是10个a，10个b，10个c*/
	//	printf("%c\n",*sr);
	//	printf("%d\n",tp.st_size);  					/*31*/
	//	printf("%d\n",tp.st_size/3); 				/*10*/
	//	printf("%d\n",2*(tp.st_size/3)); 			/*20*/
	temp=fork();
	if (temp>0) 
	{
		temp=fork();
		if (temp>0)
		{
			temp=fork();
			if (temp==0) 
			{
				/*child 3*/
				sr+=2*(tp.st_size/3);
				dest+=2*(tp.st_size/3);
					for (i = 0; i < (tp.st_size-2*(tp.st_size/3)); i++) 
					{
					*dest=*sr;
						dest++;
						sr++;
						//sleep(1);
					}
	//		j=10;
	//		while(j--){
	//		printf("child 3\n");
	//		sleep(1);
	//			}

			}
			else if(temp>0)
			{
				sigaction(17,&pfather,NULL);
				while(1)
				{
				sigaction(17,&pfather,NULL);
				printf("father\n");
				sleep(1);
				}
			}

		}
		else if(temp==0)
		{
			/*child 2*/
			sr+=tp.st_size/3;
			dest+=tp.st_size/3;
				for (i = 0; i < tp.st_size/3; i++) {
					*dest=*sr;
					dest++;
					sr++;
				//	sleep(1);
				}
	//	j=8;
	//	while(j--)
	//	{
	//		printf("child 2\n");
	//		sleep(1);
	//	}
		}
	}
	else if(temp==0)
	{
		/*child 1*/
		i=tp.st_size/3;
		while(i--)
		{
			*dest++=*sr++;
	//		sleep(1);
		}
	//	j=6;
	//	while(j--)
	//	{
	//		printf("child1\n");
	//		sleep(1);
	//	}
	}
	return 0;
}
