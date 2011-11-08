#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <netinet/in.h>
#include "error.h"
#define  MAXLINE 1024
#define SERV_PORT 9090
int main(int argc, const char *argv[])
{
	int clifd;
	char buf[MAXLINE];
	struct sockaddr_in cliaddr;
	socklen_t clilen;
	int n;

	clifd=socket( AF_INET,SOCK_DGRAM,0);
	bzero(&cliaddr, sizeof(cliaddr));
	cliaddr.sin_family = AF_INET;
	cliaddr.sin_port = htons(SERV_PORT);
	inet_pton(AF_INET,"127.0.0.1",&cliaddr.sin_addr);

while(fgets(buf,MAXLINE,stdin)!=NULL)
{
	n=sendto(clifd,buf,strlen(buf),0,(struct sockaddr *)&cliaddr,sizeof(cliaddr));
	n=recvfrom(clifd,buf,MAXLINE,0,NULL,0);
	Write(STDOUT_FILENO,buf,n);
}

	return 0;
}
