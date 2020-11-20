#include <iostream>
using namespace std;
class triangle{
	int rows, number = 1;
	public:
		void input()
		{
    		cout << "Enter number of rows: ";
    		cin >> rows;			
		}
		void display()
		{
			for(int i = 1; i <= rows; i++)
    		{
        		for(int j = 1; j <= i; ++j)
        		{
            		cout << number << " ";
            		++number;
        	}
        cout << endl;
    		}	
		}
};
int main()
{
	triangle tra;
	tra.input();
	tra.display();
}
