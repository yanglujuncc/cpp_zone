/*
 * =====================================================================================
 *
 *       Filename:  mem.cpp
 *
 *    Description:  ylj
 *
 *
 *        Version:  1.0
 *        Created:  08/25/2011 11:05:31 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include<iostream>

int main(int argc,char**argv)
{

	size_t alloc_size=(size_t)8*(size_t)1024*(size_t)1024*(size_t)1024;
	
	char* mem=(char*)malloc(alloc_size);

	mem[alloc_size*2]='1';
	
	if(mem==NULL)
		std::cout<<"malloc error"<<std::endl;	
	std::cout<<alloc_size<<std::endl;	
	
	std::cout<<sizeof(size_t)<<std::endl;	
	std::cout<<8*1024*1024*1024<<std::endl;
	
	std::cout<<sizeof(8)<<std::endl;	
 
	for(size_t index=0;index<alloc_size;index++)
	{
		if(index==alloc_size-1)
			index=0;
		mem[index]='a';	
	}

	return 0;
}
