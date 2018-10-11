#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int i,n,p,j,temp;

	cout <<"Enter number of elements to sort" << endl;
	cin >> n;
	
	cout <<"Enter elements: "<< endl;
	
	for(i=1;i<=n;i++)
	{
		cin>> a[i];
	}

	for(p=1;p<=n;p++) //no of passes in bubble sort
	{
		for(j=1;j<=n;j++)
		{
			if(a[j]>a[j+1])
			{	
			    temp = a[j];
			    a[j] = a[j+1];
			    a[j+1] = temp;	
			}

		}

	}
	
cout << "list after sorting:"<<endl;
for(i=1;i<=n;i++)
{
	cout<<a[i] << endl;
}

return 0;
}
