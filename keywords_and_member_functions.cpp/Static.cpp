#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    string name;
    static int price;
    void set(string name,int price)
    {
        this->name=name;
        base::price=price;
    }
    static int get()
    {
        return price;
    }
};
int base::price;

int main()
{
    base b;
    b.set("allo",1000);
    cout<<b.name;
  // cout<<b.get();
  // cout<<b.price;
   cout<<base::get();
    return 0;
}