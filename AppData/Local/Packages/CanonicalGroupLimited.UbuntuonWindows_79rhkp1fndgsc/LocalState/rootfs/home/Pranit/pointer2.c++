// int* -> int, char* -> char,type should be same
#include <iostream>
using namespace std;

int main()
{
	int a = 1025;
	int * p;
	p = &a;
	cout <<"size of integer is :"<<sizeof(int)<<endl;
	cout <<"Address = "<<p <<" value = "<<*p<<endl;
	char * p0;
	p0 =(char*)p; //type casting of p
	cout<<"size of character is :"<<sizeof(char)<<endl;
	cout <<"Address = " << p0 <<"value =" << *p0 <<endl;

return 0;
}
