//Pointer as function arguments-call by refrence

#include<iostream>
using namespace std;
void Increment(int *p)
{

	*p = *p + 1; //value pointed by *p will get increment
}

int main()
{

	int a = 10;
	int * p;
	p = &a;
	Increment(&a);//you can also pass p,or &a
	cout<<"Value of a is :"<< *p << endl;

return 0;
}

