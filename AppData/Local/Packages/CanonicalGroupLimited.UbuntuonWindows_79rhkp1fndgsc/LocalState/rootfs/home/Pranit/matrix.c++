#include<iostream>
using namespace std;
int main()
{
	int a[5][5],m,n,i,j;
	cout << "Enter values of m and n" << endl;
	cin >>m>>n;
	cout << "Enter element of matrix:" << endl;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
		
			cin >>a[i][j];
		}
	cout<<"The matrix is :" << endl;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	

return 0;
}

