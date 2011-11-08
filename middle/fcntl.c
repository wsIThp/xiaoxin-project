#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int fd;
	if (argc!=2) {
		fputs("usage : a.out <descriptor>\n",stderr);
		exit(1);
	}
	if ((fd=fcntl(atoi(argv[1]),F_GETFL))<0) {
		printf("fcntl error for fd %d\n\n",atoi(argv[1]));
		exit(1);
	}
	switch(fd & O_ACCMODE)
	{
		case O_RDONLY:
			printf("read only\n");break;
		case O_WRONLY:
			printf("write\n");break;
		case O_RDWR:
			printf("read write\n");break;
		default:
			fputs("invalid access mode\n",stderr);
			exit(1);
	}
	if (fd&O_APPEND) {
		printf(",append\n");
	}
	if (fd&O_NONBLOCK) {
		printf(",nonblocking\n");
	}
	putchar('\n');
	return 0;
}

