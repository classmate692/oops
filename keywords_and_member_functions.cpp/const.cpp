#include <iostream>
using namespace std;
 
class Demo {
    public:
    const int x=5;
     void display() const {
        cout << "Value of x: " << x << endl;
       
    }

   
};
 
main()
{
    Demo d;
  cout<<d.x;
  d.display();
    return 0;
}