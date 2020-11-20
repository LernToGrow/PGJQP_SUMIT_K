#include<iostream>
using namespace std;
class numpalindrom{
	int num,r,sum=0,temp;
	public:
		void getdata()
		{
			cout<<" Enter Any Number"<<endl;
			cin>>num;
		}
		void check()
		{
			temp=num;
			while(num>0)
			{
				r=num%10;
				sum=sum+(r*r*r);
				num=num/10;
			}
			if(temp==sum)
			{
				cout<<"Number is Armstrong"<<endl;
			}
			else
			{
				cout<<"Number is Not ArmStrong"<<endl;
			}
		}
};
int main()
{
	numpalindrom palin;
	palin.getdata();
	palin.check();
}
