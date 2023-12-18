#include<bits/stdc++.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

void initialize(Rectangle *r, int l, int b)
{
  r->length = l;
  r->breadth = b;
}

int area(Rectangle r)
{
  return r.length * r.breadth;
}

int perimeter(Rectangle r)
{
  return 2*(r.length + r.breadth);
}

int main()
{
  Rectangle r;
  int l, b;

  cout<<"Enter length and breadth:"<<endl;
  cin>>l>>b;
  initialize(&r, l, b);

  cout<<"Area: "<<area(r)<<endl;
  cout<<"Perimeter: "<<perimeter(r)<<endl;
  return 0;
}