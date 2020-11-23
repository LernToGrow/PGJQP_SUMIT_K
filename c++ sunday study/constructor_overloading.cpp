//overloding constructor it means same name name as class name but diffrent signature
//no of parameter 
//type of parametr 
//squence of parameter

#include<iostream>
using namespace std;
class overloadingdemo{
	public:
		overloadingdemo(int a)
		{
			cout<<a<<endl;
		}
		overloadingdemo(int a,int b)
		{
			int c;
			c=a+b;
			cout<<"Addition="<<c<<endl;			
		}
		overloadingdemo(double a)
		{
			cout<<a<<endl;
		}
};
int main()
{
	overloadingdemo d(10),b(10,10),c(12.5);
}
