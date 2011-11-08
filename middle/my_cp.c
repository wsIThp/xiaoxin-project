#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
int main(int argc, const char *argv[])
{
	int fdsrc;
	int fddest;
	int i;
	int len;
	char *fpsrc=NULL;
	char *fpdest=NULL;
	struct stat mp;
	char buf[4096];
	fdsrc=open("temp.foo",O_RDWR);
	fstat(fdsrc,&mp);  
	if (fdsrc<0) {
		perror("error open");
		exit(1);
	}
	fpsrc=mmap(NULL,mp.st_size,PROT_READ,MAP_SHARED,fdsrc,0);
	if (fpsrc==MAP_FAILED) {
		perror("mmap src");	
		exit(-1);
		}
	fddest=open("dest333.txt",O_RDWR|O_CREAT,0777);
	if(fddest<0)
	{
		perror("error open");
		exit(-1);
	}
	lseek(fddest,mp.st_size-1,SEEK_SET);
	write(fddest,"2",1);
//	lseek(fddest,0,SEEK_SET);////////////将文件指针移动到最前端。

	fpdest=mmap(NULL,mp.st_size,PROT_WRITE,MAP_SHARED,fddest,0);
	if (fpdest==MAP_FAILED) {
		perror("mmap dest");
		exit(-1);
	}
	/*
	for (i = 0; i < mp.st_size; i++)
	{
		read(fdsrc,buf,1);
		write(fddest,buf,1);
	}*/
	/*while(len=read(fdsrc,buf,sizeof(buf)))
	{
		write(fddest,buf,len);
	}*/
	memcpy(fpdest,fpsrc,mp.st_size);
	close(fddest);
	close(fdsrc);
	munmap(NULL,mp.st_size);
	munmap(NULL,mp.st_size);
	return 0;
}
