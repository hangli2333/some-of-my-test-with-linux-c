#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc,char *argv[])
  {
    struct hostent *host;
    char hostname[]="www.baidu.com";
    char hostname2[]="www.dfdvd.com";
    struct in_addr in;
    struct sockaddr_in addr_in;
    extern int h_errno;


    if((host=gethostbyname(hostname))!=NULL)
      {
        memcpy(&addr_in.sin_addr.s_addr,host->h_addr,4);
        in.s_addr=addr_in.sin_addr.s_addr;
        printf("Domain name : %s \n",hostname);
        printf("IP length:  %d\n",host->h_length);
        printf("Type :   %d\n",host->h_addrtype);
        printf("IP   :  %s  \n",addr_in.sin_addr.s_addr);
      }
  }

  
