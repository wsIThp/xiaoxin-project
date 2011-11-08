#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define MSG_TRY "try again\n"

int main(int argc, const char *argv[])
{
	int fd;
	char buf[4096];
	int n;
//	int i=0;

	fd=open("/dev/tty",O_RDONLY|O_NONBLOCK);
	if (fd<0) {
		perror("open error");
		exit(-1);
	}
m:
	n=read(fd,buf,10);
	if (n<0) {
		if (errno==EAGAIN) {
			sleep(1);
			write(STDOUT_FILENO,MSG_TRY,strlen(MSG_TRY));
			goto m;
		}
		perror("read error");
		exit(-1);
	}
	write(STDOUT_FILENO,buf,n);
	close(fd);
	return 0;
}
