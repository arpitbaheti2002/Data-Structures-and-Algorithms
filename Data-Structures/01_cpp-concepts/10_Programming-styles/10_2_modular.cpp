// In modular programming, all the functionalities are divided into seperate functions

#include<iostream>
using namespace std;

int area(int l, int b)
{
    return l*b;
}

int perimeter(int l, int b)
{
    int p;
    p=2*(l+b);
    return p;
}

int main()
{
  int length=0, breadth=0;

  cout<<"Enter length: ";
  cin>>length;
  cout<<"Enter breadth: ";
  cin>>breadth;

  cout<<"Area: "<<area(length, breadth)<<endl;
  cout<<"Perimeter: "<<perimeter(length, breadth)<<endl;
  return 0;
}