#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    virtual void sound() = 0;
   
};
class dog:public animal
{
    public:
    void sound()
    {
        cout<<"bark "<<endl;
    }

};

int main()
{
animal *p;
dog doggy;
p=&doggy;
p->sound();
return 0;
}