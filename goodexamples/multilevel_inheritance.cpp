#include<bits/stdc++.h>
using namespace std;
class mobile{
    public:
    string name;
    int price;
    virtual int getversion()=0;
    
    mobile(string name,int price)
    {
        this->name=name;
        this->price=price;
        
    }
    void display()
    {
        cout<<"student";
    }
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
class tweelev:public eleven{
    string color; 
    public :
    tweelev( string name,int price,int version,string color):eleven(name,price,version)
    {
        this->color=color;
    }
    string getcolor()
    {
        return color;
    }
};
int main()
{
    tweelev realme("realme",10000,11,"yellow");
    cout<<realme.name<<endl;;
    cout<<realme.getversion();
    cout<<realme.getcolor();
   // realme.display();
    return 0;
}