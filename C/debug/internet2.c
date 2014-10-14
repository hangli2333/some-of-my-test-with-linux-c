#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc ,char *argv[])
   {
     struct hostent *host;
     struct in_addr in;
     char addr[]="202.108.249.216";
     struct sockaddr_in addr_in;
     extern int h_errno;
   
   if((host=gethostbyaddr(addr,sizeof(addr),AF_INET))!=(struct hostent *)NULL)
   {
     memcpy(&addr_in.sin_addr.s_addr,host->h_addr,4);
     in.s_addr=addr_in.sin_addr.s_addr;
     printf("Domain name : %s\n",host->h_name);
     printf("IP length :%d\n",host->h_length);
     printf("IP  :%d \n",host->h_addr);
}
}
