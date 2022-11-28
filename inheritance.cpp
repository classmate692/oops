//the capability of class to derived property of another class
//there is 5 type of inheritance
//<!-------single inheritance---->

#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    string name;
    int modelnumber;
    string colour;
    car( string name,int number,string colour)
    {
        this->name=name;
        this->modelnumber=number;
        this->colour=colour;
    }
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
        thi->colour=colour;
    }
};
class thari:public car{
    public:

};
int main()
{
 thari typee;
 typee.setname("nano");
 typee.setmodelnumber(4550);
 typee.setcolour("yellow");
 cout<<typee.getname<<" "<<typee.getmodelnumber<<" "<<typee.colour;
 return 0;
}