#include<iostream>
using namespace std;

int main()
{
	double a = 21.09878;
	float b = 10.20;
	int c;

	c = (int) a;
	cout << "Line 1 - value of (int) a is :" << c << endl;
	
	c = (int)b;
	cout <<"Line 2 - value of (int)b is:" << c << endl;

	return 0;
}
