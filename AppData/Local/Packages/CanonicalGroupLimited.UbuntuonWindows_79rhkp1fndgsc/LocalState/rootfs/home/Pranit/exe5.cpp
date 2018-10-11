# include<iostream>
using namespace std;
int main()
{
	int far,cels;
	cout << "Enter temp in fahrenheit" << endl;
	cin >> far;
	
	cels = (far - 32) * 5 / 9;

	cout << "Temperature in celsius is :" << cels << endl;
	

return 0;
}
