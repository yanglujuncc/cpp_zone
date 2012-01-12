#include <iostream>


class base1{
	public :
		int i;

	virtual void print1(){
		printf("from base1\n");
	}
};
class base2{
	public :
		int j;
	virtual void print2(){
		printf("from base2\n");
	}
};

class child:public base1,public base2{

	public :
		int k;
	void print1()
	{
	
		printf("from child\n");
	}
	void print2()
	{
	
		printf("from child\n");
	}
};
int main(int argc,char**argv)
{
	base1 ba1;
	base2 ba2;

	ba1.i=1;
	ba2.j=2;
	child c;

	c.i=11;
	c.j=22;
	c.k=33;
	
	printf("****** up *******\n");
	printf("c.i=%d,c.j=%d,c.k=%d\n",c.i,c.j,c.k);
	
	base1 *b1=(base1*)(&c);
	printf("c() b1=%p\n",b1);
	base2 *b2=(base2*)(&c);
	printf("c() b2=%p\n",b2);

	b1=static_cast<base1*>(&c);
	printf("static_cast&c  b1=%p\n",b1);
	b2=static_cast<base2*>(&c);
	printf("static_cast&c  b2=%p\n",b2);

	b1=reinterpret_cast<base1*>(&c);
	printf("reinterpret_cast&c  b1=%p\n",b1);
	b2=reinterpret_cast<base2*>(&c);
	printf("reinterpret_cast&c  b2=%p\n",b2);


	printf("****** down_cast *******\n");
	
	base1* c_b1=static_cast<base1*>(&c);
	base2* c_b2=static_cast<base2*>(&c);

	printf("&c=%p\n",&c);
	printf("c_b1=%p\n",c_b1);
	printf("c_b2=%p\n",c_b2);
	
	base1* _b1=&ba1;
	base2* _b2=&ba2;
	
	printf("_b1=%p\n",_b1);
	printf("_b2=%p\n",_b2);
	
	child* _c_p;
	
	_c_p=(child*)c_b1;
	printf("(child*)c_b1  _c_p=%p\n",_c_p);
	_c_p=(child*)c_b2;
	printf("(child*)c_b2  _c_p=%p\n",_c_p);
	_c_p=(child*)_b1;
	printf("(child*)_b1  _c_p=%p\n",_c_p);
	_c_p=(child*)_b2;
	printf("(child*)_b2  _c_p=%p\n",_c_p);

	
	_c_p=static_cast<child*>(c_b1);
	printf("static_cast<child*>c_b1  _c_p=%p\n",_c_p);
	_c_p=static_cast<child*>(c_b2);
	printf("static_cast<child*>c_b2  _c_p=%p\n",_c_p);
	_c_p=static_cast<child*>(_b1);
	printf("static_cast<child*>_b1  _c_p=%p\n",_c_p);
	_c_p=static_cast<child*>(_b2);
	printf("static_cast<child*>_b2  _c_p=%p\n",_c_p);

	_c_p=dynamic_cast<child*>(c_b1);
	printf("dynamic_cast<child*>c_b1  _c_p=%p\n",_c_p);
	_c_p=dynamic_cast<child*>(c_b2);
	printf("dynamic_cast<child*>c_b2  _c_p=%p\n",_c_p);
	_c_p=dynamic_cast<child*>(_b1);
	printf("dynamic_cast<child*>_b1  _c_p=%p\n",_c_p);
	_c_p=dynamic_cast<child*>(_b2);
	printf("dynamic_cast<child*>_b2  _c_p=%p\n",_c_p);


	_c_p=reinterpret_cast<child*>(c_b1);
	printf("reinterpret_cast<child*>c_b1  _c_p=%p\n",_c_p);
	_c_p=reinterpret_cast<child*>(c_b2);
	printf("reinterpret_cast<child*>c_b2  _c_p=%p\n",_c_p);
	_c_p=reinterpret_cast<child*>(_b1);
	printf("reinterpret_cast<child*>_b1  _c_p=%p\n",_c_p);
	_c_p=reinterpret_cast<child*>(_b2);
	printf("reinterpret_cast<child*>_b2  _c_p=%p\n",_c_p);

	return 0;
}	
