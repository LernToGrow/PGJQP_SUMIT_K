#include <iostream>  
using namespace std;  
class sum_of_digit
{
	int n,sum=0,m; 
	public:
		void input()
		{
			cout<<"Enter a number: ";    
			cin>>n; 	
		}
		void display()
		{
			while(n>0)    
			{    
			m=n%10;    
			sum=sum+m;    
			n=n/10;    
			}    
			cout<<"Sum is= "<<sum<<endl;
		}
	
};
int main()  
{  
	sum_of_digit sum;
	sum.input();
	sum.display();
 
} 
