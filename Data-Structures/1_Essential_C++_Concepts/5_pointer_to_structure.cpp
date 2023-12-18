#include<bits/stdc++.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
  Rectangle r = {5, 10};
  cout<<"r.length: "<<r.length<<endl;
  cout<<"r.breadth: "<<r.breadth<<endl;
  cout<<endl;

  Rectangle *p1 = &r;
  cout<<"p1->length: "<<p1->length<<endl;
  cout<<"p1->breadth: "<<p1->breadth<<endl;
  cout<<endl;

  // Dynamically
  Rectangle *p2 = new Rectangle();
  p2->length = 5;
  p2->breadth = 10;
  cout<<"p2->length: "<<p2->length<<endl;
  cout<<"p2->breadth: "<<p2->breadth<<endl;
  cout<<endl;


  return 0;
}