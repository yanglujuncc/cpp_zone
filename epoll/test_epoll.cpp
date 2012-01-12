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

#include "epoll_util.h"

int main(int i,char**argv)
{
	int epoll_fd;
	int epoll_size=100;
	struct epoll_event ev,events[20];
		
	int listen_fd;
	struct sockaddr_in my_addr;
	 
	epoll_fd=epoll_create(epoll_size);	

	if(epoll_fd==-1)
	{
		std::cout<<"epoll_create failed!"<<std::endl;
		return -1;
	}
	std::cout<<"epoll_create success!"<<std::endl;
	
	listen_fd=socket(AF_INET,SOCK_STREAM,0);
	
	if(listen_fd==-1)
	{
		std::cout<<"sock_create failed!"<<std::endl;
		return -1;
	}
	std::cout<<"sock_create success!"<<std::endl;
	
	my_addr.sin_family=AF_INET;
	my_addr.sin_port=htons(222222);
	my_addr.sin_addr.s_addr=inet_addr("10.20.146.85");
	
	bzero(&(my_addr.sin_zero),8);

	if(-1==bind(listen_fd,(struct sockaddr*)&my_addr,sizeof(struct sockaddr)))
	{
		std::cout<<"bind failed!"<<std::endl;
		return -1;
	
	};
	std::cout<<"bind success!"<<std::endl;

	if(-1==listen(listen_fd,20))
	{
		std::cout<<"listen failed!"<<std::endl;
	
		return -1;
	};
	std::cout<<"listen success!"<<std::endl;
	
	ev.events=EPOLLIN|EPOLLET;
	ev.data.fd=listen_fd;
	
	epoll_ctl(epoll_fd,EPOLL_CTL_ADD,listen_fd,&ev);

		
	for(int i=0;;i++)
	{
		
		std::cout<<"....  rand("<<i<<")..."<<std::endl;
		int nfds=epoll_wait(epoll_fd,events,20,5000);					
		
	//	sleep(5);	
		
		std::cout<<"events ="<<nfds<<std::endl;
		for(int i=0;i<nfds;i++)
		{
			struct epoll_event *event;
			event=&events[i];
		
			 print_events(event->events);
			if(event->data.fd==listen_fd)
			{	
				struct sockaddr_in client_addr;
				socklen_t client_addr_size;
				int connect_fd=accept(listen_fd,(struct sockaddr*)&client_addr,&client_addr_size);
				
				std::cout<<"accept a new client! clien_fd="<<connect_fd<<std::endl;
			
				struct epoll_event client_event;		
				client_event.events=EPOLLIN;//|EPOLLET;
				client_event.data.fd=connect_fd;
				epoll_ctl(epoll_fd,EPOLL_CTL_ADD,connect_fd,&client_event);

			}
			else
			{
				char buffer[100]={0};
				int rdn=0;
				if((rdn=read(event->data.fd,buffer,1))==-1||rdn==0)
				{
									
					std::cout<<"readdn= "<<rdn<<std::endl;
					epoll_ctl(epoll_fd,EPOLL_CTL_DEL,event->data.fd,NULL);
					std::cout<<"del connect_fd :"<<event->data.fd<<std::endl;
					getchar();
				}
				else
				{
					std::cout<<"readdn = "<<rdn;
					std::cout<<":"<<buffer;
					std::cout<<"  ,@="<<event->data.fd<<std::endl;
					getchar();	
				}	
			}
		}	
	}

	return 0;
}	
