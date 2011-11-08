#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int fp;
	int i=3;
	char buf[4096]="11111";
	fp=open("msg",O_WRONLY);
	if (fp<0) {
		perror("open1");
		exit(-1);
	}
	while(i--)
	{
		write(fp,buf,strlen(buf));
		sleep(1);
	}
	return 0;
}
