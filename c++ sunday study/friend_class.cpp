//A friend can access private and protected member of another of class in which it is delcared as friend
//it is sometimes usefull to allow a perticular class to access private members of another class

#include <iostream>
using namespace std; 
class A { 
private: 
    int a;   
public: 
    A()
	{ a = 1; } 
    friend class B; 
};   
class B 
{ 
private: 
    int b; 
public: 
    void showA(A& x) 
    { 
        cout << "A::a=" << x.a; 
    } 
};   
int main() 
{ 
    A a; 
    B b; 
    b.showA(a);  
}
