/*
 * =====================================================================================
 *
 *       Filename:  test_string.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/23/2011 10:03:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include<iostream>

int main()
{

	std::string str_1="1234567";
	std::string str_2;

	std::cout<<"***********assign=(erase)*******************"<<std::endl;
	std::cout<<str_1<<std::endl;
	str_2.assign(str_1,1,2);
	std::cout<<str_2<<std::endl;
	str_2.assign(str_1,1,std::string::npos);
	std::cout<<str_2<<std::endl;
	str_2.assign(str_1,1,8);
	std::cout<<str_2<<std::endl;

	str_2.assign("helloword",1,8);
	std::cout<<str_2<<std::endl;
	std::cout<<"***********assign=(erase)*******************"<<std::endl;
	std::cout<<str_1<<std::endl;
	str_1.assign(str_1,1,std::string::npos);
	std::cout<<str_1<<std::endl;
	str_1.assign(str_1,1,std::string::npos);
	std::cout<<str_1<<std::endl;
	str_1.assign(str_1,1,std::string::npos);
	std::cout<<str_1<<std::endl;

	std::cout<<"***********insert*****************"<<std::endl;
	str_1.insert(0,2,'8');
	std::cout<<str_1<<std::endl;

	str_1.insert(0,"99");
	std::cout<<str_1<<std::endl;
}
