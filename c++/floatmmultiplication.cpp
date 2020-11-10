#include<iostream>
using namespace std;
class floatmmultiplication{
	float ans,num1,num2;
	public:void input()
	{
		cout<<"Enter first number"<<endl;
		cin>>num1;
		cout<<"Enter Second number"<<endl;
		cin>>num2;
	}
	void mul()
	{
		ans=num1*num2;
		
	}
	void display()
	{
		cout<<"ans="<<ans;
	}
};
int main()
{
	floatmmultiplication f;
	f.input();
	f.mul();
	f.display();
}
