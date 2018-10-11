#include <iostream>
using namespace std;

class integer
{
	int m,n;
	public:
		integer(int,int); //constructor declaration
	
		void display(void)
		{	
			cout<<"m = "<<m;
			cout<<"\nn = "<<n;

		}

};

integer :: integer(int x, int y) //constructor defined
{
	m = x; n=y;
}
int main()
{
	integer int1(10,100);//constructor called implicitly
	integer int2 = integer(20,200);//constructor called explicitly

	cout << "object1:  "<< endl;
	int1.display();
	cout <<"\nobject2: "<< endl;
	int2.display();

return 0;
}
