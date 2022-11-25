//there is mainly there type of constructor default,parametersied,copy;
 
 // <!----------default---->
  
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
  };
  int main()
  {
    student sakshi;
    return 0;
  }


  //<!-------------parameterised constructor---->

 /*  class students{
     public:
     string name;
     int division;
     int marks;
      students(string s,int n,int d)
      {
        name=s;
        division=n;
        marks=d;
        cout<<"parameterised constructor is called";
      }
  };
  int main()
  {
    students sakshi("sakshi",5,100);
    return 0;
  }
  */

 //<!--- copy constructor--->


  

