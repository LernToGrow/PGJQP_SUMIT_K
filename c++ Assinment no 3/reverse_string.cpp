#include<iostream>
#include<string.h>
using namespace std;
class reverse_string{
	char str[50], temp;
    int i, j;
	public:
		void input()
		{
		    cout << "Enter a string : ";
    		gets(str);	
		}
		void display()
		{
		    j = strlen(str) - 1;
    		for (i = 0; i < j; i++,j--)
    		{
        	temp = str[i];
        	str[i] = str[j];
        	str[j] = temp;
    		}
    		cout << "\nReverse string : " << str;	
		}
};
int main ()
{
	reverse_string str;
	str.input();
	str.display();

}
