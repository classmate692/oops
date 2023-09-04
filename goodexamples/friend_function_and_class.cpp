#include<bits/stdc++.h>
using namespace std;
class bank{
    string name;
    int bankbalance;
    int loan;
     public:
      void setdetails(string name,int bankbalance,int loan)
      {
          this->name=name;
          this->bankbalance=bankbalance;
          this->loan=loan;
      }
      friend class account;
      friend void accountant(bank &data);
};
class account{
    public:
    void display(bank& data)
    {
        cout<<"class data"<<" "<<data.name<<endl;
        cout<<"class data"<<" "<<data.bankbalance<<endl;
        cout<<" class data"<<" "<<data.loan<<endl;
        
    }
};
 void accountant(bank &data)
 {
   cout<<"function"<<" "<<data.bankbalance<<endl;
   cout<<"function"<<" "<<data.loan<<endl;
 }
 int main()
 {
     bank sbi;
     account f;
    // f(sbi);
     sbi.setdetails("sakshi",5500,85500);
          f.display(sbi);

     accountant(sbi);
     return 0;
 }