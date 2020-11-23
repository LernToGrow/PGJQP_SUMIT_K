//An array in which each element is of type structure
//Can be accessed by indexing just as we access an array


#include<iostream>
using namespace std;
struct student
{
	int rollno;
	char name[20];
	float persentage;
	public:
		void accept();
		void display();
}student[3];
void student::accept()
{
	cout<<"Enter Student Id"<<endl;
	cin>>rollno;
	cout<<"Enter Student Name"<<endl;
	cin>>name;
	cout<<"Enter Student Salary"<<endl;
	cin>>persentage;	
}
void student::display()
{
	cout<<"Student Id="<<rollno<<endl;
	cout<<"Student Name="<<name<<endl;
	cout<<"Student salary="<<persentage<<endl;
}
int main()
{
	struct student stud[3];
	for(int i=0;i<3;i++)
	{
	stud[i].accept();
	}
	for(int i=0;i<3;i++)
	{
	stud[i].display();
	}
}
