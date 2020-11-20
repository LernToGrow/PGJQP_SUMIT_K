#include<iostream>
using namespace std;
class DispalyEvenNumber{
    int number=10,i;
	public:
		void display()
		{
			for(i=1;i<=2*number;i++)
			{
				if(i%2==0)
				{
					cout<<" Even Number Is="<<i<<endl;
				}
			}
		}
};
int main()
{
	DispalyEvenNumber even;
	even.display();
}
