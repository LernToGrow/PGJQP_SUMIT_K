#include<iostream>
using namespace std;
class Multiple_name{
	char name[20];
	public:
	void input()
	{
		
		cout<<"Enter Any Name"<<endl;
		cin>>name;
			
	 } 
	 void display()
	 {
	 	for(int i=0;i<5;i++)
	 	{
	 		cout<<i<<"= "<<name<<endl;
		 }
	 }
};
int main()
{
	Multiple_name mul;
	mul.input();
	mul.display();
}

