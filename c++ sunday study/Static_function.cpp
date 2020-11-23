//ststic function is declared with  help of static keyword
//in static fuction,it can access only static variable and not non-static variable
//A static member Function can be called even if the no object of class exiest
//The Static function are accessed only class name and class scope resoiution opretor

#include<iostream>
using namespace std;
class staticdemo{
	private:
		static int x;
		static int y;
		
	public:
		static void print()
		{
			cout<<"Value Of X="<<x<<endl;
			cout<<"Value Of Y="<<y<<endl;
		}
};
int staticdemo::x=10;
int staticdemo::y=20;
int main()
{
	staticdemo OB;
	cout<<"Printing through object name:"<<endl;
	OB.print();
	cout<<"Printing through class name:"<<endl;
	staticdemo::print();
}
