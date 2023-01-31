/* Function overloading  when same name of two or more function are 
present in same function then how to  identify which function is being called.
*/
 #include <bits/stdc++.h>
 using namespace std;
 class dog{
    public:
     int bark(int a,int b)
     {
            return(a+b);
     }
     double bark( double a,double b)
     {
        return (a+b);
     }
 };
 int main()
 {
     dog doggie;
   cout<<doggie.bark(1,2)<<endl;
     cout<<doggie.bark(2.2,5.5);
     return 0;
 }
