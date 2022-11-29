//the capability of class to derived property of another class
//there is 5 type of inheritance
//<!-------single inheritance---->

/*#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    void carname()
    {
        cout<<"nano";
    }
    void modelname()
    {
        cout<<"56587";
    }
};
class thari:public car{
    public:
     void carvoice()
     {
        cout<<"bheeeeeeeeeeeeen";
     }
};
int main()
{
 thari sakshi;
 sakshi.carname();
 cout<<endl;
 sakshi.modelname();
 cout<<endl;
 sakshi.carvoice();
 return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    string name;
    int modelnumber;
    string colour;
    car();
    public:
    string getname()
    {
        return name;
    }
    int getmodelnumber()
    {
        return modelnumber;
    }
    string getcolour()
    {
        return colour;
    }
    void  setname(string s)
    {
        this->name=s;
    }
    void setmodelnumber(int n)
    {
        this->modelnumber=n;
    }
    void setcolour(string colour)
    {
        this->colour=colour;
    }
};
class thari:public car{
    public:
     void carvoice()
     {
        cout<<"bheeeeeeeeeeeeen";
     }
};
int main()
{
 thari sakshi("nano",4550,"yellow");
 sakshi.setname("nano");
 sakshi.setmodelnumber(4550);
 sakshi.setcolour("yellow");
 cout<<sakshi.getname()<<" "<<sakshi.getmodelnumber()<<" "<<sakshi.colour;
 sakshi.carvoice();
 return 0;
}