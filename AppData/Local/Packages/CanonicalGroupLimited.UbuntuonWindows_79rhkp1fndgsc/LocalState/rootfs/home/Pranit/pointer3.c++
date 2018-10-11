//Pointer to Pointer

#include<iostream>
using namespace std;
int main()
{

	int a = 10;
	int *p;
	p = &a;
	cout << "Address of a :"<< p << "\n Value of a :"<<*p <<endl;
	
	//Pointer to pointer 
	int **i; //declaration
	i = &p;
	cout << "Address of p :"<<i <<"\nValue of p :"<<**i<<endl;
	// *i will give value stored at p
	// **i will give value stored at value(address) which p is possesing.
return 0;
}
