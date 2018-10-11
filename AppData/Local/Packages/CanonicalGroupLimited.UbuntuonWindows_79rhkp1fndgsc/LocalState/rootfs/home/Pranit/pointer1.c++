
#include<iostream>
using namespace std;

int main()
{

	int a = 10;
	int * b,**p; //Initializing pointer, **p is pointer to another pointer
	b = &a; // storing address of a in b
	cout << "Address of a is :  " << b << endl;//printing address of ai
	cout << " Value pointed at address:"<< * b << endl;//*b prints value stored at that address
	cout <<" "<< &a <<endl;
	

	* b = 20;//changing value at address stored in b
	cout << "Modified value at a is : " << *b << endl;
	cout << "Address do not change :" << b << endl;
	p = &b;
	**p = 1000;
	cout << "Address of b is :" << p << endl;
	cout <<"value at b is : "<< **p << endl;
	cout <<"Address of p is:" << &p << endl;
	cout << "Modified value at a is :" << a << endl; // Pointer variable will always store address of other variable.
return 0;
}
