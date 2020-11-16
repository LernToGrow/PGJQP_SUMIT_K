#include<iostream>
using namespace std;
class uppper_lower{
	char ch;
	public:
		void input()
		{
			cout<<"Enter Any character"<<endl;
			cin>>ch;
		}
		void check()
		{
			if(ch>='A' && ch<='Z')
			{
				cout<<ch<<" Is a Upper Case"<<endl;
			}
			else if(ch>='a' && ch<='z')
			{
				cout<<ch<<" Is  A Lower case"<<endl;
			}
		}
};
int main()
{
	uppper_lower a;
	a.input();
	a.check();
}
