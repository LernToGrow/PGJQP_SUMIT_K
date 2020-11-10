#include<iostream>
using namespace std;
class addition{
	int sum,num1,num2;
	public:
		void input()
		{
			cout<<"Enter first number"<<endl;
			cin>>num1;
			cout<<"Enter Second number"<<endl;
			cin>>num2;
		}
		void add()
		{
			sum=num1+num2;
		}
		void display()
		{
			cout<<"addition of two number="<<sum;
		}
};
int main()
{
	addition a;
	a.input();
	a.add();
	a.display();
}
