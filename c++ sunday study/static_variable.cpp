//static variable is a key word that is declared using keyword static
//the space for the static variable is allocated only one time and this is used for the entirety of the program.
//ones the static variable is declared,it exists till the program executes

#include<iostream>
using namespace std;
class staticdemo{
	public:
		void counter();
};
void staticdemo::counter()
{
    static int count=0;
    cout << count++;
}
int main()
{
    for(int i=0;i<5;i++)
    {
    	staticdemo demo;
        demo.counter();
    }
}

