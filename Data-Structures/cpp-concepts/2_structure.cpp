#include<iostream>
using namespace std;

struct Complex
{
    int real;
    int imaginary;
};

void display(Complex c)
{
    cout<<c.real<<" + "<<c.imaginary<<"j"<<endl;
}

int main()
{
    Complex c;
    cout<<"Enter real number: ";
    cin>>c.real;
    cout<<"Enter imaginary number: ";
    cin>>c.imaginary;
    
    display(c);
    return 0;
}