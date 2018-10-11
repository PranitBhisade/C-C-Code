#include <iostream>
using namespace std;

class item
{
	int number; //private by default
	float cost; //private by default

	private:
		void getdata(int a, float b);//Prototype declaration;
		
		void putdata(void)
		{
			cout<<"Number:"<<number <<endl;
			cout<<"cost:"<<cost<<endl;

		}
		
};

//Member function definition

void item:: getdata(int a, float b)
{
	number = a;
	cost = b;
}

int main()
{
	item x; //creating object
	cout << "object x"<< endl;

	x.getdata(100,10.5);
	x.putdata();
	
	item y;
	cout<<"object y"<<endl;
	y.getdata(101,11.5);
	y.putdata();
return 0;
}
