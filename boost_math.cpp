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
#include "boost/random.hpp"




int main (int argc ,char** argv)
{
	const boost::mt19937 engine;
	const boost::uniform_int<> dist(1,100);
	
	boost::variate_generator<const boost::mt19937,const boost::uniform_int<>> const myrandom(engine,dist);
	
	for(int i=0;i<10;i++)
	{
		int j=myrandom();
	//std::cout<<myrandom()<<std::endl;
	}
	return 0; 	
}
