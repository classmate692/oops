#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void bark()
    {
        cout<<"bark"<<endl;
    }
    void bark(int s)
    {
        cout<<"Not bark"<<endl;
    }
};
int main()
{
    a sakshi;
    sakshi.bark();
    sakshi.bark(5);
    return 0;
}