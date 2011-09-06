#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	if (argc!=3) {
		printf("error input ");
		exit(-1);
	}
	FILE *p=fopen(argv[1],"r");
	FILE *fp=fopen(argv[2],"w+");
	
	if (p==NULL) {
		perror("error ");
		exit(-1);
	}
	if (fp==NULL) {
		perror("error");
		exit(-1);
	}
	int n;
	char a[4096];
	while(n=fread(a,1,sizeof(a),p))
	{
		fwrite(a,1,n,fp);
	}
	fclose(p);
	fclose(fp);
	
	return 0;
}
