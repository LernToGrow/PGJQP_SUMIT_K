#include<iostream>
using namespace std;
class multiplication{
	int ans,num1,num2,num3;
	public:void input()
	{
		cout<<"Enter first number"<<endl;
		cin>>num1;
		cout<<"Enter second number"<<endl;
		cin>>num2;
		cout<<"Enter Third Number"<<endl;
		cin>>num3;
	}
	void mul()
	{
		ans=num1*num2*num3;
		
	}
	void display()
	{
		cout<<"Multipliaction of given number are="<<ans;
	}
};
int main()
{
	multiplication m;
	m.input();
	m.mul();
	m.display();
}
