#include<iostream>
using namespace std;
class Weekdays{
	int weeknumber;
	public:
		void input()
		{
			cout<<"Enter any week number Bet 1 to 7"<<endl;
			cin>>weeknumber;
		}
		void display()
		{
			switch(weeknumber)
			{
				case 1:
					cout<<weeknumber<<" Means Monday"<<endl;
					break;
				case 2:
					cout<<weeknumber<<" Means Tuesday"<<endl;
					break;
				case 3:
					cout<<weeknumber<<" Means Wednesday"<<endl;
					break;
				case 4:
					cout<<weeknumber<<" Means Thursday"<<endl;
					break;
				case 5:
					cout<<weeknumber<<" Means Friday"<<endl;
					break;
				case 6:
					cout<<weeknumber<<" Means Satuerday"<<endl;
					break;
				case 7:
					cout<<weeknumber<<" Means Sunday "<<endl;
					break;		
			}
		}
};
int main()
{
	Weekdays weekdays;
	weekdays.input();
	weekdays.display();
}
