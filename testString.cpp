/*
 * =====================================================================================
 *
 *       Filename:  testString.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/15/2011 02:53:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <string>
#include <iostream>


int main()
{

	std::string mystr;
	char* cstr="hello";
	
	mystr=cstr;
	std::cout<<mystr<<std::endl;
	
	std::cout<<"0==0  >> "<<(0==0==0)<<std::endl;
	u_int64_t a=0;
	u_int64_t b=0;
	u_int64_t c=0;
	std::cout<<"0==0  >> "<<(a==b==c)<<std::endl;
	
	return 0;
}
