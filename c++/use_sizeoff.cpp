#include<iostream>
using namespace std;
class use_sizeoff{
	public:
	void display()
	{
		cout<<"Value of Char: "<<sizeof(char)<<"bytes"<<endl;
		cout<<"Value of int: "<<sizeof(int)<<"bytes"<<endl;
		cout<<"Value of float: "<<sizeof(float)<<"bytes"<<endl;
		cout<<"Value of duble: "<<sizeof(double)<<"bytes"<<endl;
	}
};
int main()
{
	use_sizeoff f;
	f.display();
}
