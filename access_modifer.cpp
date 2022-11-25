//there are three type of access modifier public,private,protected;
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int phonenumber;
    public:
    int seat;
    int marks;
};
int main()
{
    student sakshi;
    sakshi.seat=15;
    sakshi.marks=100;
    cout<<"my seat is:"<<sakshi.seat<<endl;
    cout<<"my marks is:"<<sakshi.marks<<endl;
    cout<<"phone number:"<<sakshi.phonenumber<<endl;// cant access beacuse it is a private member of class.
    return 0;

}