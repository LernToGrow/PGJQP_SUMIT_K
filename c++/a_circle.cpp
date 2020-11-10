#include<iostream>
using namespace std;
class a_circle{
	int r;
	float ans;
	public: 
	void input()
	{
		cout<<"Enter Value Of Redius"<<endl;
		cin>>r;
	}
	void cal()
	{
		ans=3.14*r*r;
	}
	void display()
	{
		cout<<"Area Of Circle="<<ans;
	}
};
int main()
{
	a_circle a;
	a.input();
	a.cal();
	a.display();
}
