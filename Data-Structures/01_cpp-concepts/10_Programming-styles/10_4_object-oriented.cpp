// In object orientation we take a object and enclose all of its attributes and functions inside a class.
// and then use that class to create multiple objects.

#include<iostream>
using namespace std;

class Rectangle
{
  private:
    int length;
    int breadth;
  public:
    // defalult constuctor
    Rectangle(){length=breadth=1;}

    // parameterized consructor
    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        int p;
        p=2*(length+breadth);
        return p;
    }
};

int main()
{
    int l=0, b=0;

    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;

    Rectangle r(l,b);

    cout<<"Area= "<<r.area()<<endl;
    cout<<"Perimeter= "<<r.perimeter()<<endl;

    return 0;
}