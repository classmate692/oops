#include<bits/stdc++.h>
using namespace std;
class vechile{
   string name;
   int price;
   int fuel;
   public:
   void fuelcapacity()
   {
       cout<<"present"<<endl;
   }
  
   void fuelcapacity(string state,int litre)
   {
       cout<<state<<" "<<"liter"<<" "<<litre<<endl;
       //cout<<litre<<endl;
   }
   void fuelcapacity(int liter,string state)
   {
        cout<<liter<<" "<<"state"<<" "<<state<<endl;
   }
   
};
int main()
{
    vechile car;
   car.fuelcapacity("NULL",0);
   car.fuelcapacity();
   car.fuelcapacity(0,"NULL");
    return 0;
    
}