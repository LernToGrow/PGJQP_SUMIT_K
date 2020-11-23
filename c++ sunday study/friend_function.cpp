//friend function is special type of function
//friend function can be given a special grant to access private and protected members
//a friend function can be 1)a menthod of another class 2)a golabal function


#include <iostream>
using namespace std;
class Box {
   double width;  
   public:
      friend void printWidth( Box box );
      void setWidth( double wid );
};

void Box::setWidth( double wid ) 
{
   width = wid;
}

void printWidth( Box box )
 {
   cout << "Width of box : " << box.width <<endl;
}
int main() {
   Box box;
   box.setWidth(10.0);
   printWidth( box );
}
