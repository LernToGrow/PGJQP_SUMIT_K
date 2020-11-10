#include<iostream>
using namespace std;
class increamentby1
{
	int number;
	public:void display()
	{
		cout<<"enter any number";
		cin>>number;
		number++;
		cout<<"incremented number"<<number;
	}
};
int main()
{
	increamentby1 i;
	i.display();
}
