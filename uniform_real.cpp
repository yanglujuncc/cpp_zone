/*
 * =====================================================================================
 *
 *       Filename:  uniform_real.cpp
 *
 *    Description:  ylj
 *
 *
 *        Version:  1.0
 *        Created:  08/12/2011 03:21:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <boost/random.hpp>

const int RECORDSIZE=30;


int  main()
{
	boost::mt19937  engine(4234675);


	boost::uniform_real<>  dist(0,1);
	boost::uniform_int<> dist2(1,6);
	boost::normal_distribution<> disti3(15000,3000);

	boost::variate_generator<boost::mt19937&,boost::uniform_int<> > myrandom(engine,dist2);

	boost::variate_generator<boost::mt19937&,boost::normal_distribution<> > myrandom2(engine,disti3);
	
	for(int i=0;i<1000;i++)
	{
	  double d=myrandom2();
	  d=(d<0?(-d):d);

	  int i=d/RECORDSIZE;
	  std::cout<<i<<" " ;
	
	}
	return 0;

}



