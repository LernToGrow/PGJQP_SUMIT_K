#include<iostream>
using namespace std;
class Diffrent_type_variable
{
	int num;
	char name;
	float number1;
	public:void display()
	{
		cout<<"Enter any number"<<endl;
		cin>>num;
		cout<<"Enter any name"<<endl;
		cin>>name;
		cout<<"Enter any Float"<<endl;
		cin>>number1;
		cout<<"Entered number is="<<num<<"\n"<<"Entered name is="<<name<<"\n"<<"Entered float is="<<number1;
		
	}
};
int main()
{
	Diffrent_type_variable d;
	d.display();
}
