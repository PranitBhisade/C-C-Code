#include<iostream>
using namespace std;

class Complex 
{
	private:
		int a, b;
	public:
		int setdata(int x, int y)
		{a = x; b = y;}
		
		void showdata()
		{cout<<"a="<<a<<"\nb="<<b<<endl;}

	Complex operator - ()
	{
		Complex temp;
		temp.a = -a;
		temp.b = -b;
		return temp;

	}


};

int main()
{
	Complex c1,c2,c3;
	c1.setdata(10,20);
	c3 = c1.operator - ();

	c3.showdata();

return 0;
}
