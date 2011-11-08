#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include <unistd.h>
#include <strings.h>
#include <arpa/inet.h>

#define SERV_PORT 9090

int main(int argc, const char *argv[])
{
	int cenfd;
	int  len;
	int lee;
	struct sockaddr_in ser_addr;
	char buf[1024];
	cenfd=socket(AF_INET,SOCK_STREAM,0);	
	bzero(&ser_addr,sizeof(ser_addr));
	ser_addr.sin_family = AF_INET;
	inet_pton(AF_INET, "127.0.0.1", &ser_addr.sin_addr);
	ser_addr.sin_port = htons(SERV_PORT);
	
	len=sizeof(ser_addr);
	connect(cenfd,(struct sockaddr *)&ser_addr,len);

	while(1)
	{
/*		fgets(buf,sizeof(buf),stdin);
 		buf[strlen(buf)-1]='\0';*/
		printf("please input:\n");
		lee =read(STDIN_FILENO,buf,sizeof(buf));
		write(cenfd,buf,lee);
		lee=read(cenfd,buf,sizeof(buf));
		write(STDOUT_FILENO,buf,lee);
//		bzero(buf,sizeof(buf));

	}
//	close(cenfd);
	return 0;
}
