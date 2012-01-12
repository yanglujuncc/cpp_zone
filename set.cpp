/*
 * =====================================================================================
 *
 *       Filename:  set.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/20/2011 05:16:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */


#include <iostream>
#include <set>
class pointer
{

    public:

        pointer(int tok)
        {
		i=tok;
	}
        bool operator<( const pointer& p) const
        {
		return i<p.i;
        }
	int i;
};  
int main(int argc,char**argv)
{
	std::set<pointer> pset;	
	pointer *p= new pointer(1);
	pset.insert(*p);
	p= new pointer(2);
	pset.insert(*p);
	p= new pointer(1);
	std::set<pointer>::iterator it;
	it= pset.find(*p);
	if(it!=pset.end())
	{
		std::cout<<"find 1"<<std::endl;
	
	}
	else 
	{
		std::cout<<"find end()"<<std::endl;
		
	}
	return 0;
	
}
