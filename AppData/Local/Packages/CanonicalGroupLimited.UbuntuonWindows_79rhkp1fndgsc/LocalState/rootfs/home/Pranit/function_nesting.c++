#include<iostream>

using namespace std;

class set
{	int m, n;
	public:
		void input(void);
		void display(void);
		int largest(void);


};

int set :: largest(void) //function body
{
	if(m >= n)
		return(m);
	else
		return(n);
}

void set :: input(void) //function body
{
	cout<<"Enter two numbers:"<<endl;
	cin >> m >>n;
}

void set :: display(void)
{
	cout <<"largest value = " << largest() <<"\n";
}

int main()
{
	set A;// object creation
	A.input();//calling function
	A.display();//calling function

return 0;
}
