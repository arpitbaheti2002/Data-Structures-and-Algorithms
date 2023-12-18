#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

  public:
    // Non parameterized constructor
    Rectangle()
    {
      length = 0;
      breadth = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int b)
    {
      length = l;
      breadth = b;
    }

    void printRectangle()
    {
      cout<<"length: "<<length<<endl;
      cout<<"breadth: "<<breadth<<endl;
      cout<<endl;
    }

    void changeLength(int l)
    {
      length = l;
    }

    void changeBreadth(int b)
    {
      breadth = b;
    }

    int area()
    {
      return length*breadth;
    }

    int perimeter()
    {
      return 2*(length+breadth);
    }

    ~Rectangle()
    {

    }
};

int main()
{
  int l, b;

  cout<<"Enter length and breadth:"<<endl;
  cin>>l>>b;

  Rectangle r(l, b);
  r.printRectangle();
  cout<<"Area = "<<r.area()<<endl;
  cout<<endl;

  r.changeLength(10);
  r.changeBreadth(15);
  r.printRectangle();
  cout<<"Area = "<<r.area()<<endl;
  cout<<endl;

  return 0;
}