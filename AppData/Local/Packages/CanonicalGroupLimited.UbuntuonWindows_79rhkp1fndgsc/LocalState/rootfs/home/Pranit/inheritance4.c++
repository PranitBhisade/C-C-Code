#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_number;
	public:
		void get_number(int a)
		{
			roll_number = a;

		}
		void put_number()
		{
			cout << "Roll No: " << roll_number << "\n";
		}

};

class test : public student
{
	protected:
		float part1,part2;
	public:
		void get_marks(float x ,float y)
		{
			part1 = x; part2 = y;

		}
		void put_marks()
		{
			cout<<"Marks obtained : " << "\n"
			<<"Part1 = " << part1 << "\n"
			<< "Part2 = "<< part2 << "\n";

		}


};
class sports
{
	protected:
		float score;
	public:
		void get_score(float s)

	{
		score = s;

	}
	void put_score(void)
	{
	cout << "Sports wt: " << score << "\n\n";

	}

};

class result : public test,public sports
{
	float total;
	public:
		void display();


};
void result :: display()
{
	total = part1 + part2 + score;
	put_number();
	put_marks();
	put_score();
	cout <<"Total Score: " << total <<"\n";


}
int main()
{

	result l;
	l.get_number(1234);
	l.get_marks(22,33);
	l.get_score(6);
	l.display();

return 0;

}


