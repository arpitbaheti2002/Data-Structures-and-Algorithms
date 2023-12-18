#include<bits/stdc++.h>
using namespace std;

// example 1: Rectangle
struct Rectangle{
  int length;
  int breadth;
};

// example 2: Students
struct Student{
  int rollno;
  string name;
};

int main()
{
  Rectangle  r={10, 20};
  cout<<"length = "<<r.length<<endl;
  cout<<"breadth = "<<r.breadth<<endl;
  cout<<endl;

  int n;
  cout<<"Enter number of students: ";
  cin>>n;

  Student s[n];

  for(int i=0; i<n; i++)
  {
    cout<<"Enter rollno of student "<<i+1<<" : ";
    cin>>s[i].rollno;
    cout<<"Enter name of student "<<i+1<<" : ";
    cin>>s[i].name;
  }
  cout<<endl;

  for(int i=0; i<n; i++)
  {
    cout<<"Rollno: "<<s[i].rollno<<endl;;
    cout<<"Name: "<<s[i].name<<endl;
    cout<<endl;
  }

  return 0;
}