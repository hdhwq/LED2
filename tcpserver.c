#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()

{
int servfd;

servfd = socket(AF_INET, SOCK_STREAM, 0);

struct sockaddr_in servaddr;

servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr= htonl(INADDR_ANY);
servaddr.sin_port=htons(1234);

int ret;
ret = bind(servfd,(struct sockaddr*)&servaddr,sizeof(servaddr));

    if(ret < 0 )
    {
	 printf("bind erro\n");
	 exit(1);	
	 }
	
	listen(servfd,5);
	
	int newfd;
	
	printf("waiting for client\n");
	newfd = accept(servfd,NULL,NULL);
	
	printf("success!\n");
	char str[1024];
	while(1)
	{
		read(newfd,str,1024);
		printf("%s\n",str);
		
		}
	close(newfd);
	close(servfd);	
	
	return 0;
}
