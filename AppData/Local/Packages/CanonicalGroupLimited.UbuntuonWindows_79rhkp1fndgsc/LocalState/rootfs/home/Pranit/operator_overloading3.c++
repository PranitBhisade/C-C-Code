#include<iostream>
using namespace std;

class Complex
{

	private:
		int a,b;

	public:
		int getData(int x, int y)
		{a = x;b=y;}

		void showData()
		{cout<<"a = "<< a <<" b = "<<b<<endl;}

	Complex operator - (Complex c)
	{
		Complex temp;
		temp.a = a - c.a;
		temp.b = b - c.b;
		return temp;
	}
};

int main()

{
	Complex c1,c2,c3;
	c1.getData(10,10);
	c2.getData(5,5);
	c3 = c1-c2;
	c3.showData();



return 0;
}
