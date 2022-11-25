#include<bits/stdc++.h>
  using namespace std;
  class student{
     public:
     string name;
     int division;
     int marks;
      student()
      {
        cout<<"default constructor is called"<<endl;
      }
      ~student()
      {cout<<"your destructor is called:";}
    int sum(int a,int b)
    {
        return a+b;
    }
  };
  int main()
  {
    student sakshi;
    
    cout<<sakshi.sum(5,10)<<endl;
    return 0;
  }