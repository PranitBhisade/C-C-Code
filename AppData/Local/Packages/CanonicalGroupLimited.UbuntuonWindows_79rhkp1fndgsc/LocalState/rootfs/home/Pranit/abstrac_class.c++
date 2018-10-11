//An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using "virtual void funcname = 0" in the declaration of a virtual member function in the class declaration.
//We cannot create object of abstract class
#include<iostream>
using namespace std;

class Base
{
	int x;
	public:
		virtual void fun() = 0;//Pure virtual function
		int getX(){return x;}

};
class Child : public Base
{
	int y;
	public:
		void fun() {cout <<"fun() called";}

};

int main()
{
	Base *bp = new Child();//We can make pointer of abstract class 
	bp->fun();
	Child C;
	C.fun();


return 0;
}
