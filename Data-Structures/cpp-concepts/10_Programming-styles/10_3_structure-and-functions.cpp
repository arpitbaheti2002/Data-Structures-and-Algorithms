// In this programming style, we take a object and enclose its attributes inside a structure
// Functions on this attributes are then defined seperately

#include<iostream>
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

int perimeter(Rectangle r)
{
  return 2*(r.length+r.breadth);
}

int main()
{
  Rectangle r;
  int len=0, bre=0;
  cout<<"Enter length: ";
  cin>>len;
  cout<<"Enter breadth: ";
  cin>>bre;

  initialize(r, len, bre);
  cout<<"Area= "<<area(r)<<endl;
  cout<<"Perimeter= "<<perimeter(r)<<endl;
  return 0;
}