#include <iostream>
using namespace std;
class factorial_recursion
{
	public:
		int fact(int n)
		{
   		if ((n==0)||(n==1))
   		return 1;
   		else
   		return n*fact(n-1);
		}
	
}; 

int main() {
	int n =6;
	factorial_recursion fact;	
    cout<<"Factorial of "<<n<<" is "<<fact.fact(n);;
}
