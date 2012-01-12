/*
 * =====================================================================================
 *
 *       Filename:  epoll_util.h
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/29/2011 06:29:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#ifndef _EPOLL_UTIL_H
#define _EPOLL_UTIL_H

#include <sys/epoll.h>
#include <stdio.h>

void print_events( u_int32_t  event)
{
	if(event&EPOLLIN)
		printf("EPOLLIN|");
	if(event&EPOLLPRI)
		printf("EPOLLPRI|");
	if(event&EPOLLOUT)
		printf("EPOLLOUT|");
	if(event&EPOLLRDNORM)
		printf("EPOLLRDNORM|");
	if(event&EPOLLRDBAND)
		printf("EPOLLRDBAND|");
	if(event&EPOLLWRNORM)
		printf("EPOLLWRNORM|");
	if(event&EPOLLWRBAND)
		printf("EPOLLWRBAND|");
	if(event&EPOLLMSG)
		printf("EPOLLMSG|");
	if(event&EPOLLERR)
		printf("EPOLLERR|");
	if(event&EPOLLHUP)
		printf("EPOLLHUP|");
	if(event&EPOLLONESHOT)
		printf("EPOLLONESHOT|");
	if(event&EPOLLET)
		printf("EPOLLET|");
	printf("\n");


	
}


#endif
