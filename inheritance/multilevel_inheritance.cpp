#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void knockk_knoc(){
      cout<<"who is this"<<endl;
    }
};
class b:public a{
    public:
    void housekeeping()
    {
        cout<<"welcome housekeeping"<<endl;
    }
};
class c:public b{
    public:
    void card()
    {
        cout<<"housekeeping card"<<endl;
    }
};
int main()
{
   c sing;
   sing.knockk_knoc();
   return 0;
}