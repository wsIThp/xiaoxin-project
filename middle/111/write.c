#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int fp;
	char buf[4096];
	fp=open("msg",O_WRONLY);
	if (fp<0) {
		perror("open1");
		exit(-1);
	}
	while(1)
	{
		fgets(buf,sizeof(buf),stdin);
		write(fp,buf,strlen(buf));
		sleep(1);
	}
	return 0;
}
