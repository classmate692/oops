//hiding underlying details
// The function which we are making inside the class ,it must use the all member variable then only it is called encapsulation.

// If we  don’t  make function inside the class which is using the member  variable of the class then we don’t call it encapsulation.
#include <bits/stdc++.h>
using namespace std;
class solution
{
private:
    long long int bankaccount;
    public:
    string name;
    solution(string name)
    {
        this->name=name;
    }
    int getaccount()
    {
        return bankaccount;
    }
    void setaccount(long long int x)
    {
        bankaccount = x;
    }
};

int main()
{
    solution customer("sakshi");
    cout<<customer.name<<endl;
    customer.setaccount(45600660);
    cout << customer.getaccount();
    return 0;
}
