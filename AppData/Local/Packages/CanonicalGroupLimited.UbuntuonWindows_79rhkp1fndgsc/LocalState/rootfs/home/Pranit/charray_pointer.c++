/character array and pointer
//NUll character has ASCII value 0
#include<iostream>
#include<string>
using namespace std;
void print(char *c)
{
int i = 0;
while(c[i] != '\0')
	{
		cout << c[i] << endl;
		i++;

	}

}
int main()
{
	char c[20] = "Pranit";
	print(c);
	
return 0;
}
