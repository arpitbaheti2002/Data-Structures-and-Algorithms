// structure as parameter can be passed by value, reference and address.

#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Test
{
    int A[5];
    int a;
};

// returning Structure

Rectangle getRectangle()          
{
    Rectangle p;
    p.length = 5;
    p.breadth = 10;
    return p;
}

Rectangle *getPtrRectangle()
{
    Rectangle *p;
    p=new Rectangle;
    p->length = 5;
    p->breadth = 10;
    return p;
}

// call by value
int getArea(Rectangle r1)
{
    return r1.length*r1.breadth;
}

// call by reference
void incrementLength(Rectangle &r1)
{
    r1.length++;
    r1.breadth++;
}

// call by address
void changeLength(Rectangle *r1, int n)
{
    r1->length = n;
}

// If structure contains Array, we can still use call by value.
void fun(Test a1)
{
    a1.A[0]=6;

    cout<<"Inside function:"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<a1.A[i]<<", ";
    }
    cout<<endl;
}

int main()
{
    Rectangle r;
    Rectangle *p;
    r=getRectangle();
    p=getPtrRectangle();
    cout<<"Length= "<<r.length<<", Breadth= "<<r.breadth<<endl;
    cout<<"Area of rectangle is "<<getArea(r)<<endl;
    incrementLength(r);
    cout<<"Length= "<<r.length<<", Breadth= "<<r.breadth<<endl;
    changeLength(&r,15);
    cout<<"Length= "<<r.length<<", Breadth= "<<r.breadth<<endl;

    struct Test t;
    for(int i=0; i<5; i++)
    {
        t.A[i] = i+1;
    }
    fun(t);

    cout<<"In main function: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<t.A[i]<<", ";
    }
    cout<<endl;
    return 0;
}