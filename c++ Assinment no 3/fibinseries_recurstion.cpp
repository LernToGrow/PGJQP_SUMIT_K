#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class fabi_without_recursion{
	 int fact,i,n;
	 public:
	 	void input()
	 	{
	 	cout << "Enter value of N:" ; 
		cin >> n;	
		}
		void check()
		{
			    fact = 1;
    i = 1;
    while(i<=n)
    {
        fact = fact * i;
        i++;
    }
    for(i=0;i < 30;i++)
    cout << "_";cout << "\n\n";
    cout << "Factorial of N:" << "\t" << fact << endl;
    for(i=0;i << 30;i++)
    cout << "_";cout << "\n\n";
    system("PAUSE");	
	}
};
int main()
{
   fabi_without_recursion rec;
   rec.input();
   rec.check();

}
