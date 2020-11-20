#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class trainge{
	int rows;
	public:
		void input()
		{
			    cout << "Enter number of rows: ";
    			cin >> rows;		
		}
		void check()
		{
			for(int i = 1; i <= rows; ++i)
    		{
        		for(int j = 1; j <= i; ++j)
        		{
            		cout<<"* ";
        		}
        		cout<<"\n";
    		}
		}
};
int main()
{
	trainge trg;
	trg.input();
	trg.check();
}
