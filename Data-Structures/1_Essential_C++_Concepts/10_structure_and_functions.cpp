#include<bits/stdc++.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

void initialize(Rectangle &r, int l, int b)
{
  r.length = l;
  r.breadth = b;
}

int area(Rectangle r)
{
  return r.length*r.breadth;
}

void printRectangle(Rectangle *r)
{
  cout<<"length = "<<r->length<<endl;
  cout<<"breadth = "<<r->breadth<<endl;
  cout<<endl;
}

int main()
{
  Rectangle r;
  initialize(r, 10, 20);
  printRectangle(&r);
  cout<<"Area: "<<area(r)<<endl;
  return 0;
}