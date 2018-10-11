#include <iostream>
using namespace std;

class employee
{
	char name[30];
	int age;
	public:
		void getdata(void);
		void putdata(void);
	
};

void employee :: getdata(void)
{
	cout << "Enter name: " << endl;
	cin >> name;
	cout << "Enter age :" << endl;
	cin >> age;
}

void employee :: putdata(void)
{

	cout <<"Name: " << name << endl;
	cout <<"Age: " << age << endl;

}
const int size = 3;
int main()
{
	employee manager[size];
	for(int i =0;i<size;i++)
	{
		cout<<"\nDetails of manager" << i+1 << endl;
		manager[i].getdata();
	}
	cout << "\n";
	for(int i=0;i<size;i++) //must declare i else give error,prev is declaration is out of scope
	{
		cout<<"\n Manager"<< i+1 << "\n";
		manager[i].putdata();
	}

return 0;
}
