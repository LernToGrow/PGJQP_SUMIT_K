#include<iostream>
using namespace std;
class A_P_rectangle{
	int length,width,area,peri;
	public:
		void input()
		{
			cout<<"Enter Value of Length"<<endl;
			cin>>length;
			cout<<"Enter Value of Width"<<endl;
			cin>>width;
		}
		void cal()
		{
			area=length*width;
			peri=2*(length+width);
		}
		void display()
		{
			cout<<"Area="<<area<<endl;
			cout<<"Perimeter="<<peri;
		}
};
int main()
{
	A_P_rectangle r;
	r.input();
	r.cal();
	r.display();
}
