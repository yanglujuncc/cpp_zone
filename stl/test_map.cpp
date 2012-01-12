/*
 * =====================================================================================
 *
 *       Filename:  test_map.cpp
 *
 *    Description:  ylj
 *
 *        Version:  1.0
 *        Created:  08/25/2011 03:48:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <map>
#include <string>

int main(int argc,char**argv)
{

	typedef std::map<std::string,float> sf_map;
	typedef std::pair<std::string,float> sf_pair;
	typedef sf_map::iterator sf_map_it;

	sf_map mymap;	
	mymap["hello"]=0;
	mymap["hello1"]=1;
	mymap["hello2"]=2;
	mymap["hello3"]=3;

	mymap.erase("hello3");	

	//*********** insert ******************//
	mymap.insert(sf_map::value_type("hello4",4));
	mymap.insert(std::make_pair("hello6",6));
	mymap.insert(sf_pair("hello5",5));
	
	std::cout<<"hello="<<mymap["hello"]<<" ";
	std::cout<<"hello1="<<mymap["hello1"]<<" ";
	std::cout<<"hello2="<<mymap["hello2"]<<" ";
	std::cout<<"hello3="<<mymap["hello3"]<<" ";
	std::cout<<"hello4="<<mymap["hello4"]<<" ";
	std::cout<<"hello5="<<mymap["hello5"]<<" ";
	std::cout<<"hello6="<<mymap["hello6"]<<" ";
	std::cout<<"hello7="<<mymap["hello7"]<<" ";
	std::cout<<std::endl;
	
	sf_map_it it;
	for(it=mymap.begin();it!=mymap.end();++it)
	{
		std::cout<<" first ="<<it->first<<" second = "<<it->second<<std::endl;
	}

	it=mymap.find("hello8");
	if(it==mymap.end())
	{
		std::cout<<"cant find"<<std::endl;
	}
	else
		std::cout<<"get find"<<std::endl;
	std::cout<<">>>>>>>>>find<<<<<<<<<<<<<<<"<<std::endl;
	std::cout<<" first ="<<it->first<<" second = "<<it->second<<std::endl;




	return 0;
}
