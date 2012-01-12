/*
 * =====================================================================================
 *
 *       Filename:  caculate.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/19/2011 09:49:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>

int main()
{
	
	u_int32_t int32_val=1;
	float float_val=1.1;
	double double_val=2.2;
	long long_val=1000;
	std::cout<<"int32_val*float_val = "<<int32_val*float_val/long_val<<std::endl;
	std::cout<<"int32_val*double_val = "<<int32_val*double_val<<std::endl;
	std::cout<<"int32_val*const_val = "<<int32_val*(1.1)<<std::endl;
		
}
