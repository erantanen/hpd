#include<stdio.h>       //For standard things
#include<stdlib.h>      //malloc
#include<string.h>      //memset
#include<netinet/if_ether.h>  // for ETH_P_ALL
#include<netinet/ip_icmp.h>     //Provides declarations for icmp header
#include<netinet/udp.h> //Provides declarations for udp header
#include<netinet/tcp.h> //Provides declarations for tcp header
#include<netinet/ip.h>  //Provides declarations for ip header
#include<sys/socket.h>
#include<arpa/inet.h>



void Print_Info(unsigned char* , int);



int sock_raw;
struct sockaddr_in source,dest;

int main()
{
        int saddr_size , data_size;
        struct sockaddr saddr;
        struct in_addr in;
        unsigned short iphdrlen;

        unsigned char *buffer = (unsigned char *)malloc(65536); //Its Big!

        printf("Starting...\n");

        //Create a raw socket that shall sniff
           sock_raw = socket(AF_INET , SOCK_RAW, IPPROTO_TCP);
        if(sock_raw < 0)
        {
                printf("Socket Error\n");
                return 1;
        }
        while(1)
        { 
 
  
                saddr_size = sizeof saddr;
                //Receive a packet
                data_size = recvfrom(sock_raw , buffer , 65536 , 0 , &saddr , &saddr_size);
                if(data_size <0 )
                {
                        printf("Recvfrom error , failed to get packets\n");
                        return 1;
                }
                //Now process the packet

               struct iphdr *iph = (struct iphdr *)buffer;
                 iphdrlen =iph->ihl*4;
               Print_Info(buffer , iphdrlen);
        }
        close(sock_raw);
        printf("Finished");
        return 0;
}



void Print_Info(unsigned char* data , int d_length)
{
    int incr;
     
      printf("IP Header info\n");
 
      for(incr = 0; incr < d_length ; incr+=2){ 
       printf(" %02X%02X ", data[incr], data[incr+1]);    

       }
      
     printf("  \n");

}
