#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void bark()
    {
        cout<<"smooth"<<endl;
    }
};
class b:public a{
    public:
    void bark()
    {
        cout<<"slowly slowly"<<endl;
    }
};
int main()
{
    b animal;
    animal.bark();
    a animali;
    animali.bark();

    return 0;
}