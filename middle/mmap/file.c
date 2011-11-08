#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, const char *argv[])
{
	char buf[4096];
	int fd;
	char *fp=NULL;
	fd=open("mmap",O_CREAT|O_RDWR,0777);
	lseek(fd,4095,SEEK_SET);
	write(fd,"1",1);
//	fp=mmap(NULL,4096,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
//	if (fp==MAP_FAILED ) {
//		perror("mmap");
//		exit(-1);
//	}
	close(fd);
	return 0;
}
