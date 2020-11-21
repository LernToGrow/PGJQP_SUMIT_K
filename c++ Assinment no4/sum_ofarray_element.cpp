#include<iostream>
using namespace std;
class sum_array{
	int arr[10], n, i, sum = 0;
	public:
		void input();
		void display();
};
void sum_array::input()
{
	cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];	
}
void sum_array::display()
{
	for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "\nSum of array elements : " << sum;
}
int main ()
{
    sum_array asum;
    asum.input();
    asum.display();
    
}
