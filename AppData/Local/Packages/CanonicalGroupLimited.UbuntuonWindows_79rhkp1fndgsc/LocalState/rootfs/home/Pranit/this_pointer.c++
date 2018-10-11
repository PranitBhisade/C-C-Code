#include<iostream>
using namespace std;

class A
{
	private:
		int l,b,h;
	public:
		void setDimension(int l,int b,int h)
		{this->l=l;this->b=b;this->h=h;}//whene variable names are same of member variable and function variable we use this-> ptr;

		void showDimension()
		{
			cout<<"l = \n" <<l<<"b = \n"<<b<<"h = "<<h;
		}
};

int main()
{
	A o;
	o.setDimension(10,10,10);
	o.showDimension();


return 0;
}
