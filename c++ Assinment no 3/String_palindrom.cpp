#include <iostream>
#include <string.h>
using namespace std;
class String_palindrom{
	char str1[20], str2[20];
    int i, j, len = 0, flag = 0;
	public:
		void input();
		void display();
};
void String_palindrom::input()
{
	cout << "Enter the string : ";
    gets(str1);
	
}
void String_palindrom::display()
{
	    len = strlen(str1) - 1;
    for (i = len, j = 0; i >= 0 ; i--, j++)
        str2[j] = str1[i];
    if (strcmp(str1, str2))
        flag = 1;
    if (flag == 1)
        cout << str1 << " is not a palindrome";
    else
        cout << str1 << " is a palindrome";
}
int main()
{
	String_palindrom palin;
	palin.input();
	palin.display();
}
