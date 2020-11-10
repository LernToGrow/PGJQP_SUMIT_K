#include<iostream>
using namespace std;
class simple_Interest{
	int p,i,t,ans;
	public:
		void input()
		{
			cout<<"Enter Principle"<<endl;
			cin>>p;
			cout<<"Enter Interest"<<endl;
			cin>>i;
			cout<<"Enter Time"<<endl;
			cin>>t;
		}
		void cal()
		{
			ans=(p*i*t)/100;
		}
		void Display()
		{
			cout<<"Simple interest is="<<ans;
		}
};
int main()
{
	simple_Interest s;
	s.input();
	s.cal();
	s.Display();
}
