#include <stdio.h>
#include<arpa/inet.h>
#include <stdlib.h>
#include <sys/types.h>
#include <strings.h>
#include <sys/socket.h>
#include <string.h>
#include <netinet/in.h>
#include "error.h"

#define SOCK_PORT 9090
#define MAXLINE 1024
int main(int argc, const char *argv[])
{
	int serfd;
	int i;
	ssize_t n;
	struct sockaddr_in seraddr,cliaddr;
	char buf[MAXLINE];
	char str[INET_ADDRSTRLEN];
	socklen_t ser_len;
	serfd=socket(AF_INET,SOCK_DGRAM,0);
	
	bzero(&seraddr,sizeof(seraddr));
	seraddr.sin_family=AF_INET;
	seraddr.sin_port=htons(SOCK_PORT);
	seraddr.sin_addr.s_addr=htonl(INADDR_ANY);
	
	Bind(serfd,(struct sockaddr *)&seraddr,sizeof(seraddr));
	ser_len=sizeof(cliaddr);
	while(1)
	{
		n=recvfrom(serfd,buf,MAXLINE,0,(struct sockaddr *)&cliaddr,&ser_len);
		if (n<0) {
			perror("error ");
			exit(1);
		}
		printf("received from %s at PORT %d\n",inet_ntop(AF_INET,&cliaddr.sin_addr,str,sizeof(str)),ntohs(cliaddr.sin_port));
		for (i = 0; i < n; i++) {
			buf[i]=toupper(buf[i]);
		}
		n=sendto(serfd,buf,n,0,(struct sockaddr *)&cliaddr,sizeof(cliaddr));
	}
	return 0;
}
