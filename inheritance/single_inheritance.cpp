#include<bits/stdc++.h>
using namespace std;
 class a{
    public:
    int x,y;
    public:
    a(){}
    a(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
 };
 class b:public a{
    public:
    int z;
    public:
    b(){}
    b(int z,int x,int y):a(x,y)
    {
        this->z=z;
    }
 };
 int main()
 {
    b teen(7,5,6);
    cout<<teen.y<<endl;

 }