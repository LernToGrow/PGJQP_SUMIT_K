//structure is user defined data type in c++
//Is used to store groupof items or non-similer datatypes
///structure is defined by using struct

#include<iostream>
using namespace std;
struct employee{
		int empid;
		char name[20];
		float salary;
		public:
			void accept();
			void dispaly();
};
void employee::accept()
{
	cout<<"Enter Employee Id"<<endl;
	cin>>empid;
	cout<<"Enter Employee Name"<<endl;
	cin>>name;
	cout<<"Enter Employee Salary"<<endl;
	cin>>salary;
}
void employee::dispaly()
{
	cout<<"Employee Id="<<empid<<endl;
	cout<<"Employee Name="<<name<<endl;
	cout<<"Employee salary="<<salary<<endl;
}
int main()
{
	struct employee e1;
	e1.accept();
	e1.dispaly();
}
