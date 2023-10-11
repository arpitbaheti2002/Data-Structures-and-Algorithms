// Referenceis the allias fiven to a variable.

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &r = a;

    cout<<"a= "<<a<<", r= "<<r<<endl;
    r++;
    cout<<"a= "<<a<<", r= "<<r<<endl;
    return 0;
}
