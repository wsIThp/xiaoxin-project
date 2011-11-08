#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <strings.h>
#include "error.h"
#include <unistd.h>

#define SERV_PORT 9090
int main(int argc, const char *argv[])
{
	int cenfd;
	struct sockaddr_in ser_addr;
	//char buf[]="123456789";
	char buf[102];
	int len;
	cenfd=socket(AF_INET,SOCK_STREAM,0);

	bzero(&ser_addr, sizeof(ser_addr));
	ser_addr.sin_family = AF_INET;
	inet_pton(AF_INET, "127.0.0.1", &ser_addr.sin_addr);
	ser_addr.sin_port = htons(SERV_PORT);

	Connect(cenfd,(struct sockaddr *)&ser_addr,sizeof(ser_addr));
	while(1)
	{
		fgets(buf,sizeof(buf),stdin);
		buf[strlen(buf)-1]='\0';
		Write(cenfd,buf,strlen(buf)+1);
		len = Read(cenfd,buf,strlen(buf));
		Write(STDOUT_FILENO,buf,len);
	}
	Close(cenfd);
	return 0;
}
