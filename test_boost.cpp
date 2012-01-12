/*
 * =====================================================================================
 *
 *       Filename:  test_boost.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/12/2011 01:59:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include "boost/scoped_ptr.hpp"

int main (int argc ,char** argv)
{
	boost::scoped_ptr<std::string>
		p(new std::string("Use scoped_open often"));
	if(p)
		std::cout<< *p <<std::endl;
	size_t i=p->size();
	*p="acts just like a pointer";
	if(p)
		std::cout<< *p <<std::endl;
	
	return 0;
}
