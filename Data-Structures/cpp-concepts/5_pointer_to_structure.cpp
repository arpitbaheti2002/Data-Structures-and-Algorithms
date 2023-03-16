// Pointer to a structure

#include<iostream>

struct Rectangle
{
    int lenth;
    int breadth;
};

int main()
{
// Static:
    struct Rectangle r1={10,5};
    struct Rectangle *p = &r1;

    // p.length = 20;           // error
    // *p.length = 20;          // error: (.)has higher precedece
    // (*p).length = 20;           // correct but not best
    p->lenth = 20;

// Dynamically:
    struct Rectangle *r2;
    r2 = new struct Rectangle;
    r2->lenth = 20;
    r2->breadth = 15;

    return 0;
}