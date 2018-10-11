#include<iostream>

using namespace std;
class student
{
	char name[20];
	int roll_no;
	public:
		void getdata(void);
		void display(void);
};
void student :: getdata(void)
{
	cout << "Enter Name of student" << endl;
	cin >> name;
	cout << " Enter Roll no" << endl;
	cin >> roll_no; 
}

void student :: display(void)
{
	cout << "Name is :" << name << endl;
	cout << "Roll no is :" << roll_no << endl;

}

int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}
	
	/*float num1,num2,sum,avg;
	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;
	//cin >> num2;
	sum = num1 + num2;
	avg = sum / 2;

	cout << "Sum is " << sum << endl;
	cout << "Avg is " << avg << endl; */

	

