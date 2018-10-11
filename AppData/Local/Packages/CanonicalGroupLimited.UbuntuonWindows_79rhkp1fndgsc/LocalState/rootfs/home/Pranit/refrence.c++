#include<iostream>
using namespace std;

	

	int & max(int &x, int &y)
	{
		if(x > y)
			return x;
		else
			return y;
	}

int main()
{
	int x =10;
	int y = 100;
	int z;

	z = &max(x,y);
	cout << z << endl;
return 0;

}
