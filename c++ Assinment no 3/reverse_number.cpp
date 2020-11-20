#include<iostream>
using namespace std;
class revnumber{
	int number,rem,reverse=0;
	public:
		void input()
		{
			cout<<"Enter Any Number"<<endl;
			cin>>number;
		}
		void display()
		{
			while(number!=0)
			{
			rem=number%10;
			reverse=reverse*10+rem;
			number=number/10;
			}
			cout<<" Reverse Number="<<reverse<<endl;
		}
};
int main()
{
	revnumber rev;
	rev.input();
	rev.display();
}
