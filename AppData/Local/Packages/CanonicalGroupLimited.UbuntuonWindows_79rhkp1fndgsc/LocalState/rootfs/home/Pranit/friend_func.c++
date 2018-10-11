#include <iostream>
using namespace std;

class sample
{	public:
		int a;
		int b;
	
		void setvalue();
		friend float mean(sample s);
};
void sample :: setvalue()
{
	cout << "Enter values fo a and b" << endl;
	cin >> a >> b >> endl;
}

float mean(sample s)
{
	return float(s.a + s.b)/2.0;
}

int main()
{
	sample X;
	X.setvalue();
	cout <<"Mean is :" << mean(X) << endl;

return 0;
}
