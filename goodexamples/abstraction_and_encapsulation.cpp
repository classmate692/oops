#include<bits/stdc++.h>
using namespace std;
class car{
    string name;
    int price;
    bool state;
    
    public:
    void setcarattributes(string name,int price,bool state)
    {
        this->name=name;
        this->price=price;
        this->state=state;
    }
    string getname()
    {
        return name;
    }
    int getprice()
    {
        return price;
    }
    void lock()
    {
        if(state)
        {
            cout<<"car open"<<endl;
        }else
        {
            cout<<"car close"<<endl;
        }
        
    }
};
int main()
{
    car audi;
    audi.setcarattributes("audi",5284445,false);
    cout<<audi.getname()<<endl;
    audi.lock();
    return 0;
}