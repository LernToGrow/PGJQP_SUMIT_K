#include<iostream>
using namespace std;
class avrage{
	int a,b,c,d,e,sum,avg;
	public:
		void input()
		{
			cout<<"Enter Five Number"<<endl;
			cin>>a;
            cin>>b;
            cin>>c;
            cin>>d;
            cin>>e;
		}
		void cal()
		{
			sum=a+b+c+d+e;
			avg=sum/5;
		}
		void display()
		{
			cout<<"average of five number"<<avg;
		}
};
int main()
{
	avrage a;
	a.input();
	a.cal();
	a.display();
}
