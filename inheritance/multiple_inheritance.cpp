#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void cr()
    {
        cout<<"type"<<endl;
    }
};
class b{
    public: 
    void  branch()
    {
        cout<<"your branch"<<endl;
    }
};
class c:public a,public b{
    public:
    void last()
    {
        cout<<"last inheritance"<<endl;
    }
};
int main()
{
    c nam;
    nam.cr();
return 0;
}