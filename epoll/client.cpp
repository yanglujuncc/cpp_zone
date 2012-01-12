/*
 * =====================================================================================
 *
 *       Filename:  test_epoll.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/29/2011 03:48:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <sys/epoll.h>

#include <sys/types.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int i,char**argv)
{
		
	int sock_fd;
	struct sockaddr_in host_addr;
	 
	
	sock_fd=socket(AF_INET,SOCK_STREAM,0);
	
	if(sock_fd==-1)
	{
		std::cout<<"sock_create failed!"<<std::endl;
		return -1;
	}
	std::cout<<"sock_create success!"<<std::endl;
	
	host_addr.sin_family=AF_INET;
	host_addr.sin_port=htons(222222);
	host_addr.sin_addr.s_addr=inet_addr("10.20.146.85");
	
	bzero(&(host_addr.sin_zero),8);

	std::cout<<"connect ...."<<std::endl;
	if(connect(sock_fd,(struct sockaddr*)&host_addr,sizeof(struct sockaddr))==-1)
	{
		std::cout<<"connect failed!"<<std::endl;
		return -1;
	
	};
	std::cout<<"connect success!"<<std::endl;

	
	for(int i=0;i<1;i++)
	{
		int wtn=0;
		char hello[]="iamclient..";

		std::cout<<"sleep 5...!"<<std::endl;
		sleep(5);

		if(wtn=write(sock_fd,hello,sizeof(hello))==-1)
		{
			std::cout<<"write failed"<<std::endl;
		}	
		std::cout<<"write success"<<std::endl;

		sleep(5);
		if(wtn=write(sock_fd,hello,sizeof(hello))==-1)
		{
			std::cout<<"write failed"<<std::endl;
		}	
		std::cout<<"write success"<<std::endl;
	}
	getchar();
	close(sock_fd);

	return 0;
}	
