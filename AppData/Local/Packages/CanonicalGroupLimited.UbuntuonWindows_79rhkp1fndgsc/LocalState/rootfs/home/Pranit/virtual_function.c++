//Parent class pointer can point to the object of any of its descendant class, but converse is not true
//virtual function is used for late binding

#include<iostream>
using namespace std;
class A
{
	public:
		virtual void f1(){	}
};

class B:public A
{
	public:
		void f1(){	}

		void f2(){	}

};

int main()
{
	A *p,obj;
	B obj2;
	p = &obj2;
	p->f1()//pointing to f1() of class B since f() is virtual function

return 0;
}
