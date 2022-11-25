#include<bits/stdc++.h>
using namespace std;
class student{
    public:
  int marks;
  char grade;
};
int main()
{
  student sakshi;
  sakshi.marks=50;
  sakshi.grade='A';
  cout<<"my grade:"<<sakshi.grade<<" "<<"my marks:"<<sakshi.marks;
  return 0;
}