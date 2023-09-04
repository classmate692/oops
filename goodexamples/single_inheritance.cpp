#include<bits/stdc++.h>
using namespace std;
class mobile{
    public:
    string name;
    int price;
    
    mobile(string name,int price)
    {
        this->name=name;
        this->price=price;
        
    }
     virtual int getversion()=0;
    
};
class eleven:public mobile{
    int version;
    public:
    eleven(string name,int price,int version):mobile(name,price)
    {
        this->version=version;
    }
    int getversion()
    {
        return version;
    }
};
int main()
{
    eleven realme("realme",10000,11);
    cout<<realme.name<<endl;;
    cout<<realme.getversion();
    return 0;
}