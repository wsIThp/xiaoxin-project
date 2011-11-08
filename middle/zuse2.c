#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#define MSG_TRY "try again\n"
#define MSG_TIMEOUT "timeout\n"

int main(int argc, const char *argv[])
{
	int i;
	char buf[4096];
	int fd;
	int n;
	fd=open("temp",O_RDONLY|O_NONBLOCK);
	if (fd<0) {
		perror("open error ");
		exit(-1);
	}
	for (i = 0; i < 5; i++) {
		n=read(fd,buf,10);
		if (n>=0) {
			break;
		}
		if (errno!=EAGAIN) {
		perror("read");
			exit(-1);
		}
		sleep(1);
		write(STDOUT_FILENO,MSG_TRY,strlen(MSG_TRY));
	}
	if (i==5) 
		write(STDOUT_FILENO,MSG_TIMEOUT,strlen(MSG_TIMEOUT));
		else
		write(STDOUT_FILENO,buf,n);
		close(fd);
	
	return 0;
}
