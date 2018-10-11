#include<iostream>
using namespace std;
class Complex
{
	private:
		int a,b;
	public:
		int SetData(int x, int y)
		{a = x;b = y;}
		
		void ShowData()
		{cout<<"\na = "<<a<<"\nb = "<<b<<endl;}

	Complex operator + (Complex c)
	{
		Complex temp;
		temp.a = a + c.a;
		temp.b = b + c.b;
		return temp;

	}

};
int main()
{

	Complex c1,c2,c3;
	c1.SetData(5,5);
	c2.SetData(10,10);

	c3 = c1+c2;
	c3.ShowData();

return 0;
}
