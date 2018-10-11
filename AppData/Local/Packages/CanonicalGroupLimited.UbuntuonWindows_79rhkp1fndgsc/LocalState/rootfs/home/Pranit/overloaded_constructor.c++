#include<iostream>
using namespace std;

class complex
{
	float x,y;
	public:
		complex(){}
		complex(float a){x = y = a;}
		complex(float real, float imag)
		{x = real; y=imag;}
		
		friend complex sum(complex,complex);
		friend void show(complex);

};


