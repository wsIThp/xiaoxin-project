#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, const char *argv[])
{
	char *rd=NULL;
	int fd;
	int i=0;
	char buf[4096];
	char a;
	fd=open("mmap",O_RDWR);
	rd=mmap(NULL,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
//	printf("%s\n",rd);
	if (rd==MAP_FAILED) {
		perror("read");
		exit(-1);
	}
	while(1)
	{
	//	for (i = 0; i < ; i++) {
	//		buf[i]=*rd;
	//		rd++;
	//	}
	//	buf[i]='\0';
	//    a = *rd;
//		write(STDOUT_FILENO,rd,5);
	//	rd++;
	//	sleep(1);
		printf("%s\n",rd);
		sleep(1);
}
	return 0;
}
