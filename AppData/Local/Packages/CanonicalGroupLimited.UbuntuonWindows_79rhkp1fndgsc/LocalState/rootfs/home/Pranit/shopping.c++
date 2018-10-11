#include<iostream>
using namespace std;

const int m = 50;

class items
{
	int itemcode[m];//array initialization  default private
	int itemprice[m];
	int count;

	public:
		void CNT(void){count = 0;}
		void getitem(void);
		void display(void);
		void remove(void);
		void displayitems(void);

};

void items :: getitem(void)
{
	cout <<"Enter item code " <<endl;
	cin >> itemcode[count];

	cout <<"Enter item cost " << endl;
	cin >> itemprice[count];
	count++;
}
void items:: display(void)
{
	float sum=0;
	for(int i =0;i<count;i++)
		sum = sum + itemprice[i];
	cout<<"****************************"<<endl;
	cout<<"Total value is: " << sum <<endl;

}
void items :: remove(void)
{

	int a;
	cout << "Enter item code :";
	cin >> a;
	for(int i=0;i<count;i++)
		if(itemcode[i] == a)
			itemprice[i] = 0;

}

void items :: displayitems(void)

{
	cout <<"CODE	:	   PRICE" << endl;
	for(int i=0;i<count;i++)
	{
		cout<<"\n" << itemcode[i];
		cout<<"\t:\t";
		cout<<" " << itemprice[i];
	}
	cout <<"\n";
}


int main()
{
	items order;
	order.CNT();
	int x;
	do{	cout <<"**********************************"<<endl;
		cout <<"\n\nYou can do the following:" << endl;
		cout <<"*******************************"<<endl;
		cout << "\nEnter appropriate number "<< endl;
		cout <<"\n1: Add an item" << endl;
		cout <<"\n2: Display total value"<<endl;
		cout <<"\n3: Delete an item"<<endl;
		cout <<"\n4: Display all item"<<endl;
		cout <<"\n5: Quit"<<endl;
		 
		cin >> x;
	 			
		switch(x)
			{
				case 1: order.getitem();break;
				case 2: order.display();break;
				case 3: order.remove();break;
				case 4: order.displayitems();break;
				case 5: break;
			
			}

		}while(x!=5);

return 0;
}
