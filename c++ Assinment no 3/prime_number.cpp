#include <iostream>  
using namespace std;  
class primenumber{
	  int n, i, m=0, flag=0;
	  public:
	  void getdata();
	  void check();
};
void primenumber::getdata()
{
	cout << "Enter the Number to check Prime: ";  
    cin >> n; 
}
void primenumber::check()
{
	  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  	
}
int main()  
{  
  primenumber num;
  num.getdata();
  num.check(); 
}  
