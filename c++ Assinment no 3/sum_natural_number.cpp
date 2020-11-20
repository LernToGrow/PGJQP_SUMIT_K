#include<iostream>
using namespace std;
class sum_natural{
	int sum=0;
	public:
		void check()
		{
			for(int i=1;i<=10;i++)
			{
				 sum=sum+i;
				
			}
			cout<<sum;
		}
};
int main()
{
	sum_natural sum;
	sum.check();
}
