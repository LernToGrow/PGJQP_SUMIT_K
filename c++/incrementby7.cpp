#include<iostream>
using namespace std;
class incrementby7{
	int num;
	public:void input()
	{
		cout<<"enter any number"<<endl;
		cin>>num;
	}
	void increment()
	{
		num=num+7;
		
	}
	void display()
	{
		cout<<"incremented number is="<<num;
	}
};
int main()
{
	incrementby7 d;
	d.input();
	d.increment();
	d.display();
}
