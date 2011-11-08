#include <stdio.h>
#include <string.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include <stdio.h>
#include <strings.h>
#include <netinet/in.h>
#include <unistd.h>
#define SERV_PORT 9090
#include "error.h"
int main(int argc, const char *argv[])
{
	int serfd,listenfd;
	socklen_t len=0;
	char buf[1024];
	struct sockaddr_in servaddr,listenaddr;
	pid_t fp;

	serfd=socket(AF_INET,SOCK_STREAM,0);

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(SERV_PORT);

	Bind(serfd,(struct sockaddr *) &servaddr,sizeof(servaddr));
	Listen(serfd,20);
	len=sizeof(listenaddr);
	listenfd=Accept(serfd,(struct sockaddr *)&listenaddr,&(len));

	while(1)
	{
a:		fp=fork();
		if (fp>0) 
		{
			listenfd=Accept(serfd,(struct sockaddr *)&listenaddr,&(len));
			if (listenfd>0) {
				goto a;					
			}
			else
			{
				close(listenfd);
				return 0;
			}
		}
		else if(fp==0)
		{
			
			len=Read(listenfd,buf,sizeof(buf));
			Write(STDOUT_FILENO,buf,len);
			Write(STDOUT_FILENO,"\n",1);
			fgets(buf,sizeof(buf),stdin);
			buf[strlen(buf)-1] = '\0';
			Write(listenfd,buf,strlen(buf)+1);
		}
		else
		{
			perror("error");
			exit(1);
		}
	}
//	Close(listenfd);
	Close(serfd);
	return 0;
}
