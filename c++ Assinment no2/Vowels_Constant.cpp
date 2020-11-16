#include<iostream>
using namespace std;
class Vowels_Constant{
	char ch;
	public:
		void input()
		{
			cout<<"Enter Any Character"<<endl;
			cin>>ch;
		}
		void check()
		{
			if( ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' &&  ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
			{
				cout<<ch<<" Is vowel"<<endl;
			}
			else
			{
				cout<<ch<<" Is constant"<<endl;
			}
		}
};
int main()
{
	Vowels_Constant vowel;
	vowel.input();
	vowel.check();

	
}
