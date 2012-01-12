/*
 * =====================================================================================
 *
 *       Filename:  testSTL.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/03/2011 04:17:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>

int i=0;
class base{


public:

 
  base(int m)
  {
 	j=(++i);
	std::cout<<"construct base(int m ) run now.. j="<<j<<std::endl;
	
  } 
  base()
  {
	j=(++i);
	std::cout<<"construct base( ) run now.. j="<<j<<std::endl;
  }
  base( base& other)
  {
	j=(++i);
	std::cout<<"copy construct base(const base& other ) run now.. j="<<j<<std::endl;
 }
 ~base()
 {
	std::cout<<"deconstruct ~base() run now.. with j= "<<j<<std::endl;
    
 }

base& operator=(class base &other)
{
        
	std::cout<<"assignement operator = (     ) run now.."<<std::endl;
	std::cout<<"this->j="<<this->j<<" other.j="<<other.j<<std::endl;
 	
         return *this;
}

 void helloword(void)
{
 std::cout<<"hello word"<<std::endl;
}


private:
	int j;
public:
   //	static  int i;
      
     //   static base bb;
};

base getnewBase(void)
{ 
  std::cout<<"base getnewBase( )"<<std::endl;
  base* baseptr=new base(1);
 return *baseptr;
}
base& getnewBase_(void)
{ 
  std::cout<<"base& getnewBase( )"<<std::endl;
  base* baseptr=new base(1);
 return *baseptr;
}

base& getnewBase_2(class base& other)
{ 
 return other;
}

base getnewBase_3(base& other)
{ 
 return other;
}


base getlocalBase(void)
{
  std::cout<<"base getlocalBase( )"<<std::endl;
  base localbase;
  return localbase;
}






int main()
{

   base b; 
   getnewBase_3(b);
   
  // base hello=getBase();  
    
   std::cout<<"i="<<i<<std::endl;
   //base::i=1;
  
    
 //base mainbase=mainbase1;
  return 0; 
}
