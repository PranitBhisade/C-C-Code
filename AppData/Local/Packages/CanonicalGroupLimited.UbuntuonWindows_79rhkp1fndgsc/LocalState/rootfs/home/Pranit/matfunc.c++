#include<iostream>
using namespace std;
int main(){
	
 
	void matrix(int,int);
	
	int rows,columns;
	cout<<"Enter number of rows:" << endl;

	cin >> rows;
	
	cout << "Enter number of columns:" << endl;
	cin >> columns;
	matrix(rows,columns);



return 0;
	}

void matrix(int r, int c){
	
	int m[5][5];
	int i,j;
	cout<<"Enter elements for matrix" << endl;
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		
		cin>>m[i][j];
		
	}
	cout <<"Matrix is:\n";
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			cout<<m[i][j]<<" ";
			cout << "\n";
		}

 }



