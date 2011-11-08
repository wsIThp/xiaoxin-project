#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <netinet/in.h>
#include <unistd.h>

#define SERV_PORT 9090


int main(int argc, const char *argv[])
{
	int serfd,newfd;
	struct sockaddr_in lisen_addr,new_addr;
	char buf[1024];
	int  len;

	serfd=socket(AF_INET,SOCK_STREAM,0);
	bzero(&lisen_addr,sizeof(lisen_addr));
	lisen_addr.sin_family=AF_INET;
	lisen_addr.sin_port=htons(SERV_PORT);
	lisen_addr.sin_addr.s_addr = htonl(INADDR_ANY);

	len=sizeof(serfd);

	bind(serfd,(const struct sockaddr *)&lisen_addr,len);

	listen(serfd,20);
	len=sizeof(lisen_addr);
	newfd=accept(serfd,(struct sockaddr *)&lisen_addr,&len);
	while(1)
	{
		len=read(newfd,buf,sizeof(buf));
		write(STDOUT_FILENO,buf,len);

		write(STDOUT_FILENO,"\n",1);
/*		fgets(buf,sizeof(buf),stdin);
		buf[strlen(buf)-1] = '\0';*/
		printf("please input:\n");
		len =read(STDIN_FILENO,buf,sizeof(buf));
		write(newfd,buf,len);
	}
	close(serfd);
	close(newfd);

	return 0;
}
