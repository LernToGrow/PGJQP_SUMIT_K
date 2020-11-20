#include<iostream>
using namespace std;
class reverseno_10_to_1{
	public:
		void display()
		{
			for(int i=10;i>=1;i--)
			{
				cout<<i<<endl;
			}
		}
};
int main()
{
	reverseno_10_to_1 rev;
	rev.display();
}
