/*
 * =====================================================================================
 *
 *       Filename:  test_new.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/22/2011 02:25:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
//#include <string>

int main ()
{
	
	std::string str("hello");
	std::cout<<str<<std::endl;
	
	new(&str)std::string("word");

	std::cout<<str<<std::endl;
	
	
	return 0;
}
