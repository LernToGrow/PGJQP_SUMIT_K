//abstraction is the concept of object oriented programing
// Relevent information that we want to show it to user, is known as Abstraction..

//Encapsulation is the concept of object oriented programing 
//relevent information that was hide form the user,is knows as Encapsulation

#include<iostream>
using namespace std;
class demo{
	
	public:
		int rollno;
		void gedata();
	private:
		char name[20];
	protected:
		float age;
};
void demo::gedata()
{
	cout<<"Enter Your Rollno"<<endl;
	cin>>rollno;
	cout<<"Enter Your Name"<<endl;
	cin>>name;
	cout<<"Enter your Age"<<endl;
	cin>>age;
	
}	
int main()
{
	demo d;
	d.gedata();
	cout<<"RollNo="<<d.rollno<<endl;
	cout<<"Name="<<name<<endl;
	cout<<"Age="<<age<<endl;
}
