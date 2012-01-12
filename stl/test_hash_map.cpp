/*
 * =====================================================================================
 *
 *       Filename:  test_hash_map.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/26/2011 11:13:48 AM
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
#include <ext/hash_map>
using  namespace   __gnu_cxx;
int main()
{

	typedef  hash_map<int ,std::string> int_str_map;
	int_str_map  ismap(3);

	ismap[1]="11111";
	ismap[2]="22222";
	ismap[3]="33333";
	ismap[4]="44444";


	std::cout<<ismap[4]<<std::endl;
	std::cout<<ismap[3]<<std::endl;
	std::cout<<ismap[2]<<std::endl;
	std::cout<<ismap[1]<<std::endl;

	//* ********** insert ******************//
	if(ismap.insert(int_str_map::value_type(5,"5555555555"))
	{
	
		std::cout<<"insert success!"<<std::endl;
	}
	else
	{
		std::cout<<"insert failed!"<<std::endl;

	};
	if(ismap.insert(int_str_map::value_type(5,"5555555555*******"))
	{
	
		std::cout<<"insert success!"<<std::endl;
	}
	else
	{
		std::cout<<"insert failed!"<<std::endl;

	};
	
	std::cout<<ismap[5]<<std::endl;
	std::cout<<ismap.size()<<std::endl;
	return 0;
}
