#include<bits/stdc++.h>
using namespace std;
class operator_overloading{
    public:
    int a,b;
    public:
    void operator () ()
    {
         cout<<"write your name:"<<endl;
    }
    void operator + (operator_overloading & obj)
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<value2-value1<<endl;
    }

};
int main()
{
    operator_overloading a;
    operator_overloading  b,c;
    b.a=4;
    c.a=3;
    b+c;
    a();
    return 0;
}