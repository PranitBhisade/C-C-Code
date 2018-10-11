#include<iostream>
using namespace std;

int volume(int);
double volume(double, int);
int volume(long, int,int);

int main()
{
	cout << volume(10) << endl;
	cout << volume(2.5,8) << endl;
	cout << volume(100, 75,15) <<endl;

return 0;
}

int volume(int s)
{
	return (s*s*s);
}
double volume(double r, int h)
{
	return(3.14*r*r*h);

}
int volume(long l, int b, int h)
{
	return(l*b*h);
}

