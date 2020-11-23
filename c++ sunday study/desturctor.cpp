//destructor is special member of class which is same name as class name, preceded by a tilde ( ~ ).
//Destructors are usually used to deallocate memory and do other cleanup
// for a class object and its class members when the object is destroyed
//dessturctor is automatically called when object is created 

#include<iostream>
using namespace std;
class desdemo{
	public:
		~desdemo()
		{
			cout<<"Desturctor is invoked"<<endl;
		}
};
int main()
{
	desdemo demo;
}
