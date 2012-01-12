/*
 * =====================================================================================
 *
 *       Filename:  newdelete.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/19/2011 04:57:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>

int main (int argc ,char* argv[])
{
	char *a;
        a=new char[10];
	delete [] a;
	return 0;
}
