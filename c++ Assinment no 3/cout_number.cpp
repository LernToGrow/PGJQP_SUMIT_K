#include <iostream>
using namespace std;
class count_number{
	int num,temp,count=0;
	public:
		void input()
		{
		cout << "Enter any number : ";
    	cin >> num;
		}
		void check()
		{	
    	temp = num;
    	while(temp != 0)
		{
        	count++;
        	temp /= 10;
    	}		
    	cout << endl << "Total digits in " << num << " : "  << count;	
		}
};
int main() 
{
	count_number cout;
	cout.input();
	cout.check();
}

