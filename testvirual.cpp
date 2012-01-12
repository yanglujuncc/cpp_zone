#include <iostream>



class base{
};

class base0{
	int i;
	virtual void bb();
};


class base1{
	
	virtual void b()
	{
		printf("base1::b()");
	}

	int i;
	int j;
	char a;
};
class base2{

	virtual void c()
	{
		printf("base2::c()");
	}
	int i;
	int j;
};

class child1:base1{
//	int q;
};

class child2:base2{
//	int q;
};

class child3:base1,base2{
//	int q;
};
class child4:base1,base2,base0{
//	int q;
};

int main()
{
  std::cout<<"sizeof(base)="<<sizeof(base)<<std::endl;	
  std::cout<<"sizeof(base0)="<<sizeof(base0)<<std::endl;	
  std::cout<<"sizeof(base1)="<<sizeof(base1)<<std::endl;	
  std::cout<<"sizeof(base2)="<<sizeof(base2)<<std::endl;	

  std::cout<<"sizeof(child1)="<<sizeof(child1)<<std::endl;	
  std::cout<<"sizeof(child2)="<<sizeof(child2)<<std::endl;	
  std::cout<<"sizeof(child3)="<<sizeof(child3)<<std::endl;	
  std::cout<<"sizeof(child4)="<<sizeof(child4)<<std::endl;	
  return 0;
}
