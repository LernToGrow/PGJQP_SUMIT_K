#include<iostream>
using namespace std;
class DisplayoddNumber{
	int number=100;
	public:
		void display()
		{
			for(int i=0;i<=1*number;i++)
			{
				if(i%2!=0)
				{
					cout<<" Odd Number Is="<<i<<endl;
				}
			}
		}
};
int main()
{
	DisplayoddNumber odd;
	odd.display(); 
}
