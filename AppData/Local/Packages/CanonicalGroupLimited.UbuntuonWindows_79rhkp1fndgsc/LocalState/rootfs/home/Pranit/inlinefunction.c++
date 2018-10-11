#include <iostream>
using namespace std;

inline float mul(float x, float y)
{
	return (x * y);
}
inline double div(double p, double q)
{
	return(p/q);
}

inline int add(int a, int b)
{
	return(a+b);
}
int main()
{
 	float m = 12.9;
	float n = 11.9;

	cout << "Multiplication :" << mul(m,n) << endl;
	cout << "Division is:"  << div(m,n) << endl;
	cout << "Addition is:"  << add(m,n) << endl;
return 0;

}
