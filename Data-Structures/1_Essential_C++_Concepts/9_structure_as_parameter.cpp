#include<bits/stdc++.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

// pass by value
void fun1(Rectangle r)
{
  r.length = 20;
  cout<<"Call by value: "<<endl;
  cout<<"length = "<<r.length<<endl;
  cout<<"breadth = "<<r.breadth<<endl;
}

// pass by address
void fun2(Rectangle *r)
{
  r->length = 20;
  cout<<"Call by address: "<<endl;
  cout<<"length = "<<r->length<<endl;
  cout<<"breadth = "<<r->breadth<<endl;
}

// pass by reference
void fun3(Rectangle &r)
{
  r.breadth = 20;
  cout<<"Call by refernce: "<<endl;
  cout<<"length = "<<r.length<<endl;
  cout<<"breadth = "<<r.breadth<<endl;
}

// function returning structure
Rectangle* getRectangle(int l, int b)
{
  Rectangle *p = new Rectangle();
  p->length = l;
  p->breadth = b;
  return p;
}

int main()
{
  Rectangle r = {5, 5};

  fun1(r);
  cout<<"Actual Parameter: "<<endl;
  cout<<"length = "<<r.length<<endl;
  cout<<"breadth = "<<r.breadth<<endl;
  cout<<endl;

  fun2(&r);
  cout<<"Actual Parameter: "<<endl;
  cout<<"length = "<<r.length<<endl;
  cout<<"breadth = "<<r.breadth<<endl;
  cout<<endl;

  fun3(r);
  cout<<"Actual Parameter: "<<endl;
  cout<<"length = "<<r.length<<endl;
  cout<<"breadth = "<<r.breadth<<endl;
  cout<<endl;

  Rectangle *p = getRectangle(10, 10);
  cout<<"length = "<<p->length<<endl;
  cout<<"breadth = "<<p->breadth<<endl;
  cout<<endl;

  return 0;
}