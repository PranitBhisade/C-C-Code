#include<iostream>
using namespace std;

class Integer
{
	private:
		int x;
	public:
		void setdata(int a)
		{x = a;}
		void showdata()
		{cout<<"\nx = "<<x;}

	Integer operator ++()
	{
		Integer i;
		i.x=++x;
		return(i);

	}
	Integer operator ++(int)//compulsory pass int for post increment
	{
		Integer i;
		i.x = x++;
		return(i);

	}

};
int main()
{
	Integer i1,i2;
	i1.setdata(5);
	i1.showdata();
	i2 = ++i1;
	i2.showdata();
	
	i2 = i1++;
	i2.showdata();




return 0;
}
