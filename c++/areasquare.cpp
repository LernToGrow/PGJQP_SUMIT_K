#include<iostream>
using namespace std;
class areasquare{
	int area_square,square_side;
	public:void input()
	{
		cout<<"Enter Square side"<<endl;
		cin>>square_side;
	}
	void cal()
	{
		area_square=square_side*square_side;
	}
	void display()
	{
		cout<<"area of square="<<area_square;
	}
};
int main()
{
	areasquare a;
	a.input();
	a.cal();
	a.display();
}
