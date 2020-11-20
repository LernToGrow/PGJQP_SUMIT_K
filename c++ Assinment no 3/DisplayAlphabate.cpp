#include<iostream>
using namespace std;
class DisplayAlphabate{
	char i;
	public:
		void display()
		{
			for(i='A';i<='Z';i++)
			cout<<i<<"\t";
		}

};
int main()
{
	DisplayAlphabate alp;
	alp.display();
}
