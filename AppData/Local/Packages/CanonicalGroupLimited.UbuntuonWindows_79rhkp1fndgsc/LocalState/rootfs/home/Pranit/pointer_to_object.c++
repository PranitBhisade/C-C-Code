#include<iostream>
using namespace std;

class A
{
	private:
		int l,b,h;
	public:
		void setDimension(int x,int y, int z)
		{l=x;b=y; h=z;}
		void showDimension()
		{
			cout<<"l =" <<l <<"b ="<< b <<"h ="<< h <<endl;
		}


};

int main()
{
	A *p,o; //creating ptr of type class A and object o;
	p = &o;//p stores address of object o
	p->setDimension(10,20,30); //object ptr
	p->showDimension();//object ptr



return 0;
}
