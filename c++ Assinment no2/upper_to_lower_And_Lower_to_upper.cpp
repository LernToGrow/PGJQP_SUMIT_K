#include<iostream>
using namespace std;
class convert_U_L{
	char ch;
	public:
	    void Upper_Lower()
	    {
	    	cout<<"Enter Any Character In UpperCase"<<endl;
	    	cin>>ch;
			ch=ch+32;
			cout<<"Character In Lower Case "<<ch<<endl;	    	
		}
		void Lower_to_Upper()
		{
			cout<<"Enter Any Character In Lowercase"<<endl;
			cin>>ch;
			ch=ch-32;
			cout<<"Character In Upper Case "<<ch<<endl;
		}
};
int main()
{
	convert_U_L up;
	up.Upper_Lower();
	up.Lower_to_Upper();
}
