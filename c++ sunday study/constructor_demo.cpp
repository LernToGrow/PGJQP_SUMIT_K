//constructor is a special member of class which is same name as class name
//consturctor is automatically called when object is created 
//it is uesd to intialize the menber variable of the class 
//constructor do not have a return type


#include<iostream>
using namespace std;
class consturctordemo{
	public:
	consturctordemo()
	{
		cout<<"constructor is invoked"<<endl;
	}
};
int main()
{
	consturctordemo d;
}
