#include<bits/stdc++.h>
using namespace std;

template<class T>
class Rectangle
{
    T length;
    T breadth;

  public:
    // Non parameterized constructor
    Rectangle();

    // Parameterized constructor
    Rectangle(T l, T b);

    void printRectangle();
    void changeLength(T l);
    void changeBreadth(T b);
    T area();
    T perimeter();

    // Destructor
    ~Rectangle();
};

template<class T>
Rectangle<T>::Rectangle()
{
  length = 0;
  breadth = 0;
}

template<class T>
Rectangle<T>::Rectangle(T l, T b)
{
  length = l;
  breadth = b;
}

template<class T>
void Rectangle<T>::printRectangle()
{
  cout<<"length: "<<length<<endl;
  cout<<"breadth: "<<breadth<<endl;
  cout<<endl;
}

template<class T>
void Rectangle<T>::changeLength(T l)
{
  length = l;
}

template<class T>
void Rectangle<T>::changeBreadth(T b)
{
  breadth = b;
}

template<class T>
T Rectangle<T>::area()
{
  return length * breadth;
}

template<class T>
T Rectangle<T>::perimeter()
{
  return 2 * (length + breadth);
}

template<class T>
Rectangle<T>::~Rectangle()
{
  // Destructor implementation (empty in this case)
}

int main()
{
  // Instantiate Rectangle with int type
  Rectangle<int> r1(5, 6);
  r1.printRectangle();
  cout<<"Area = "<<r1.area()<<endl;
  cout<<"Perimeter = "<<r1.perimeter()<<endl;
  cout<<endl;

  // Instantiate Rectangle with double type
  Rectangle<double> r2(5.5, 6.2);
  r2.printRectangle();
  cout<<"Area = "<<r2.area()<<endl;
  cout<<"Perimeter = "<<r2.perimeter()<<endl;
  cout<<endl;

  return 0;
}
