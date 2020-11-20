#include<iostream>
using namespace std;
class displaynumber{
	int number=1;
	public:
		void display()
		{
			for( int i=1;i<=10;i++)
			{
				cout<<i<<" Number="<<number<<endl;
		     	number++;
			}
	
		}
};
int main()
{
	displaynumber num;
	num.display();
}
