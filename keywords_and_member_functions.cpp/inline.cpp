#include <iostream>
using namespace std;
 
class Demo {
    public:
   
    inline void display() {
        cout << "Value of x: "  << endl;
       
    }

   
};
 
main()
{
    Demo d;
  
  d.display();
    return 0;
}