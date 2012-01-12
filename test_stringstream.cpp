/*
 * =====================================================================================
 *
 *       Filename:  test_stringstream.cpp
 *
 *    Description:  yanglujun
 *
 *        Version:  1.0
 *        Created:  08/11/2011 03:33:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <sstream>


int main()
{
	std::ostringstream _ostream;
	std::istringstream _istream;
	std::stringstream _sstream;
	
	int i=10;
	float f=11.2;
	std::string ss;
	_sstream<<i<<" "<<f;
	
	_sstream<<"hello \n"<<12;
	
	_sstream>>i;
	_sstream>>ss;
	std::cout<<_sstream.str()<<std::endl;
	char *c_p=0;
	char *cc_p=0;
	c_p++;
	
	printf("c_p++ ; =%d\n",c_p);	
	
	c_p=0;
	c_p=9+c_p;
	printf("c_p+2 ; =%d\n",c_p);	
	return 0;
}
