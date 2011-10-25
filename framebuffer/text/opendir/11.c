#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	DIR *dir;
	int i=0;
	struct dirent * photonum;
	char buf[100][100];
	dir=opendir("11");
	if (dir==NULL) {
		perror("error opendir");
		exit(-1);
	}
	
	while((photonum=readdir(dir))!=NULL)
	{
		strcpy(buf[i],photonum->d_name);
		i++;
	}
	for (i = 0; i < 20; i++) {
		printf("%s\n",buf[i]);
	}
	return 0;
}
