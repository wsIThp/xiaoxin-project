#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

void foo(char *str) 
{
	write(1,str,strlen(str));////write函数的参数三个，第一个指系统定义的数字（代表功能0：输入，1：输出，2：错误）
	exit(-1);
}

int main(int argc, const char *argv[])
{
	int fd;
	if (argc!=2) {
		foo("./a.out file\n");
	}
	fd=open(argv[1],O_RDWR|O_CREAT,0777);////open函数参数第三个指对第一个参数(文件)的权限设置
	if (fd<0) {
		foo("error open\n");
	}
	close(fd);
	return 0;
}
