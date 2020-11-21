#include<iostream>
using namespace std;
class count_number{
	int arr[10],num,i,zerocount=0,Negativecount=0,Positivecount=0;
	public:
		void input();
		void display();
};
void count_number::input()
{
	cout<<"Enter Size of array"<<endl;
	cin>>num;
	cout<<"Enter Element Of Array"<<endl;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
}
void count_number::display()
{
	
	for(i=0;i<num;i++)
	{
		if(arr[i]==0)
		{
		zerocount++;
		}
		else if(arr[i]<0)
		{
			Negativecount++;				
		}
		else if(arr[i]>0)
		{
			Positivecount++;				
		}
	}
	cout<<"Number of Zero Element in array="<<zerocount<<endl;
	cout<<"Number of Negative Element in array="<<Negativecount<<endl;
	cout<<"Number of Positive Element in array="<<Positivecount<<endl;
}
int main()
{
	count_number count;
	count.input();
	count.display();
}
