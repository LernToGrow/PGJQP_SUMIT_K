#include<iostream>
using namespace std;
class Anytable{
	int number;
	public:
		void input()
		{
			cout<<"Enter the number which you want table"<<endl;
			cin>>number;
		}
		void display()
		{
			if(number%2==0)
			{
				cout<<"Table of "<<number<<endl;
				for(int i=1;i<=10;i++)
				{
					int table=number*i;
					cout<<table<<endl;
				}
				
			}else 
			{
				cout<<"Table of "<<number<<endl;
				for(int i=1;i<=10;i++)
				{
					int table=number*i;
					cout<<table<<endl;
				}
				
			}
		}
};
int main()
{
	Anytable table;
	table.input();
	table.display();
}
