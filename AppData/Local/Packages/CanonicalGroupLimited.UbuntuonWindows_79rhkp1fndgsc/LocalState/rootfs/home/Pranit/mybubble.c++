#include<iostream>
using namespace std;

int main()
{
	int i,n;
	int a[10];
	cout<<"How many number you want to sort: \n";
	cin >> n;
	
	cout <<"Enter elements to sort: \n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];

	}
	
	for(int p=0;p<n;p++)
	{
		for(int j=0;j<n;j++)
		{

			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

			}


		}

		

	}

cout<<"Sorted list is :\n";
for(i=1;i<=n;i++)
{
	cout<<a[i] << endl;
}

	
return 0;
}
