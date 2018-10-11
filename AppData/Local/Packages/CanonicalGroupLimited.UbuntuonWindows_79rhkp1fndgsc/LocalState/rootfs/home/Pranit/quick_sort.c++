#include <iostream>
using namespace std;

void quick_sort(int[],int,int);

int partition(int[],int,int);

int main()
{
	int a[10],n,i;
	cout <<"How many elements :\n";
	cin >> n;
	
	cout << "Enter number of elements: \n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}

	quick_sort(a,0,n-1);
	cout << "Array after sorting: \n";
	for(i=0;i<n;i++)
	{
		cout << a[i]<< endl;

	}


return 0;
}

void quick_sort(int a[],int low, int high)
{
	int j;
	if(low<high)
	{
		j = partition(a,low,high);
		quick_sort(a,low,j-1);
		quick_sort(a,j+1,high);

	}


}

int partition(int a[],int low,int high)
{
	int v,i,j,temp;
	v = a[low];
	i = low;
	j = high+1;

	do{
		do

			i++;
		while(a[i]<v && i<=high);
		do
			j--;
		while(v<a[j]);

		if(i<j)
		{
			temp =a[i];
			a[i]=a[j];
			a[j]=temp;


		}
	}while(i<j);

	a[low]=a[j];
	a[j]=v;

	return(j);	
			

}
