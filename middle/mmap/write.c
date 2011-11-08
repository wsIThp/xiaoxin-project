#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
	char *wr=NULL;
	int fd;
	int i=0;
	char buf[4096];
	fd=open("mmap",O_RDWR);
	wr=mmap(NULL,4096,PROT_WRITE|PROT_READ,MAP_SHARED,fd,0);
	if (wr==MAP_FAILED) {
		perror("mmap failed");
		exit(-1);
	}
	while(1)
	{
		fgets(buf,sizeof(buf),stdin);
		buf[strlen(buf)-1]='\0';
//		strcpy(wr)
		for (i = 0; i < strlen(buf); i++) {
			*wr=buf[i];
			wr++;
		}
		*wr='\0';
		//sleep(1);
	}
	return 0;
}
