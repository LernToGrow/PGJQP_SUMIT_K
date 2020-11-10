//quotient ,divident,diviser,reminder
#include<iostream>
using namespace std;
class calcuation{
	int quotient,divident,diviser,reminder;
	public:
		void input()
		{
			cout<<"Enter divident"<<endl;
			cin>>divident;
			cout<<"Enter Diviser"<<endl;
			cin>>diviser;
		}
		void cal()
		{
			quotient=divident/diviser;
			reminder=divident%diviser;
		}
		void display()
		{
			cout<<"Qoutinetn is="<<quotient<<endl;
			cout<<"Reminder is="<<reminder;
		}
};
int main()
{
	calcuation c;
	c.input();
	c.cal();
	c.display();
}
