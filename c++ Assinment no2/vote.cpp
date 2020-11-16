#include<iostream>
using namespace std;
class vote_check
{
	float age;
	public:
		void input()
		{
			cout<<"To Check Eligibility For Voter...So Enter Your Age"<<endl;
			cin>>age;
		}
		void check()
		{
			if(age>18 && age<120)
			{
				cout<<"You Are Eligible For Vote"<<endl;
			}
			else 
			{
				cout<<"You Are Not Eligible For Vote";
			}
		}
};
int main()
{
	vote_check vote;
	vote.input();
	vote.check();
}
