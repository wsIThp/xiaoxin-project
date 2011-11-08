#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
int main(int argc, const char *argv[])
{
	struct winsize size;
	if (isatty(STDOUT_FILENO)==0) ///isatty函数判断是否是终端
	{
		exit(1);
	}
	if (ioctl(STDOUT_FILENO,TIOCGWINSZ,&size)) ////ioctol函数将相应的数值存于结构体size中。。。
	{
		perror("ioctol TIOCGWINSZ error");
		exit(1);
	}
	printf("%d rows,%d colums\n",size.ws_row,size.ws_col);

	return 0;
}
