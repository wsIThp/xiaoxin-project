#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, const char *argv[])
{
	int fd;
	int i=3;
	char buf[4096];
	fd=open("msg",O_RDONLY);
	if (fd<0) {
		perror("open");
		exit(-1);
	}
	while(i--)
	{
		read(fd,buf,sizeof(buf));
		write(STDOUT_FILENO,buf,strlen(buf));
		sleep(1);
	}
//	printf("%s\n",buf);
	return 0;
}
