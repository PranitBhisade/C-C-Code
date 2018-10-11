#include<iostream>
using namespace std;

int main()
{

	int B[3][2] = {1,2,3,4,5,6};
	int (*p)[3] = B;
	cout << *B;


return 0;
}
