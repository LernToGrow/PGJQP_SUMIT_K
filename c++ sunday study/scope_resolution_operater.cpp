//If the global variable name is same as local variable name,
//the scope resolution operator will be used to call the global variable. 
//It is also used to define a function outside the class 
//and used to access the static variables of class.

#include <iostream>
using namespace std;
char a = 'm';
static int b = 50;

int main()
{
   char a = 's';
   cout << "The static variable : "<< ::b;
   cout << "\nThe local variable : " << a;
   cout << "\nThe global variable : " << ::a;

   return 0;
}
