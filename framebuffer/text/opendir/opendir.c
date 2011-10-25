#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
int main(int argc, const char *argv[])
{
	DIR *dir;
	struct dirent * photonum;
	dir=opendir("/home/akaedu");
	if (dir==NULL) {
		perror("error opendir");
		exit(-1);
	}
	while((photonum=readdir(dir))!=NULL)
	{
		printf("%s\n",photonum->d_name);
	}
	return 0;
}
