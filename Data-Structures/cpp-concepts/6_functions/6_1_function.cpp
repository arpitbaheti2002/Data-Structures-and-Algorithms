// A function to add two numbers

#include<iostream>
using namespace std;
 
int add(int a, int b)
{
    int c;
    c = a+b;
    return c;
}

int main()
{
    int x,y,z;
    x=10;
    y=20;
    z=add(x,y);
    cout<<"The sum is "<<z<<"."<<endl;
    return 0;
}