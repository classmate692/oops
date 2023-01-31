#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
    void age()
    {
        cout<<"new ";
    }
    void age(int n)
    {
        cout<<"this is age"<<n<<endl;
    }

};
int main()
{
     parent a;
     a.age(5);
     return 0;
}