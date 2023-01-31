#include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    char breed;
    int age;
    
    public:
    animal()
    {
        cout<<"list of animal";
    }
    animal(char x, int y)
    {
        this->breed=x;
        this->age=y;
    }
};
class dog:public animal
{  public:
    dog(char x,int p):animal(x,p){

    }
   public:
   void display()
   {
    cout<<"breed:"<<breed<<endl;
    cout<<"age:"<<age<<endl;
   }
   void bark()
   {
    cout<<"also bark";
   }
};
int main()
{
    dog street('A',6);
    //cout<<street.age<<endl;
    street.display();

    street.bark();

}