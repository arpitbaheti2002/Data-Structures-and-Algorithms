#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
  public:
    Rectangle(){length=breadth=1;}
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength(){return length;}
    void setLength(int l){length = l;}
    void setBreadth(int b){breadth=b;}
    int getBreadth(){return breadth;}
    ~Rectangle(){};
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

int main()
{
    Rectangle r(10,5);
    cout<<"Area= "<<r.area()<<endl;
    cout<<"Perimeter= "<<r.perimeter()<<endl;
    r.setLength(20);
    cout<<"New length= "<<r.getLength()<<endl;
    cout<<"New area= "<<r.area()<<endl;
    cout<<"New perimeter= "<<r.perimeter()<<endl;
    return 0;
}