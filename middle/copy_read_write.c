#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
int main(int argc, const char *argv[])
{
	int fdsrc;
	int fddest;
	int len;
	char buf[4096];
	fdsrc=open(argv[1],O_RDONLY);
	if (fdsrc<0) {
		perror("error fdsrc");
		exit(-1);
	}
	fddest=open(argv[2],O_RDWR|O_CREAT|O_EXCL,0777);
	if (fddest<0) {
		perror("error fddest\n");
		exit(-1);/////exit是C标准库函数，_exit是系统函数，前者比后者会自动刷新缓冲区。。。.
	}
	while(len=read(fdsrc,buf,sizeof(buf)))////read 函数的返回值是实际读到的字节数，要是0表示已读到文件末尾
	{
		write(fddest,buf,len);	///第三个参数不确定时，会写入乱码。
	}
	close(fdsrc);
	close(fddest);
	
	return 0;
}
