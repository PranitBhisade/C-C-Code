//Any kind of form like bank slip is template
# include<iostream>
using namespace std;

template <class X>
X func(X a, X b )
{
	if (a > b){return a;}
	else {return b;}

}
int main()
{
	cout<< func(10,20) << endl;
	cout<< func(11.5,12.5);


return 0;
}
