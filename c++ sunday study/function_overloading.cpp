//function overloading means a one function have same name with diffrent signature
//it is to the improve the code readability and allows code reusability.

#include <iostream> 
using namespace std; 
class functiondemo
{
	public:
	void print(int i)
	{ 
  		cout << " Here is int " << i << endl; 
	} 
	void print(double  f) 
	{ 
  		cout << " Here is float " << f << endl; 
	} 
	void print(char const *c) 
	{ 
  		cout << " Here is char* " << c << endl; 
}	 
};
int main()
{ 
	functiondemo d;
  	d.print(10); 
  	d.print(10.10); 
  	d.print("ten"); 
} 
