#include<iostream>
using namespace std;
class Display_Integer
{
	int num;
	public:void display()
	{
		cout<<"Enter any integer value\n";
		cin>>num;
		cout<<"Entered number is="<<num;	
	}	
};
int main()
{
	Display_Integer d;
	d.display();
}
