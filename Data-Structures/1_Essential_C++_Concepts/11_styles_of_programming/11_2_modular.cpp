#include<bits/stdc++.h>
using namespace std;

int area(int length, int breadth)
{
  return length*breadth;
}

int perimeter(int length, int breadth)
{
  return 2*(length+breadth);
}

int main()
{
  int length=0, breadth=0;
  cout<<"Enter length and breadth:"<<endl;
  cin>>length>>breadth;

  cout<<"Area: "<<area(length, breadth)<<endl;
  cout<<"Perimeter: "<<perimeter(length, breadth)<<endl;
  return 0;
}