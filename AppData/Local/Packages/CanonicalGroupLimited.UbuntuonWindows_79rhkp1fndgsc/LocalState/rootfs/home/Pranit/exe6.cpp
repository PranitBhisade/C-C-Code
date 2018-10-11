#include<iostream>
using namespace std;
class temp{
	int fahrenheit,celsius;
	public:
		void getdata(void);
		void display(void);
};
void temp :: getdata(void)
{
	cout << "Enter temp in Fahrenheit :"  << endl;
	cin >> fahrenheit;
}
void temp :: display(void)
{
	celsius = (fahrenheit -32) * 5/9;
	cout << "Temperature in celsius is :" << celsius << endl; 
	
}

int main()
{

	temp t;
	t.getdata();
	t.display();

 return 0;
}
