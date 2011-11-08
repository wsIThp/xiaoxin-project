#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>




int main(int argc, const char *argv[])
{
	char buf[4096];
	int fd;
	fd=open("tt",O_RDWR|O_CREAT,0777);
	lseek(fd,99,SEEK_SET);
	write(fd,"2",1);//////将fd所指的文件拓展成100字节。
	return 0;
}
