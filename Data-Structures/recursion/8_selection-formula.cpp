//            n!
// nCr =  -----------
//        n! * (n-r)!

#include<iostream>
using namespace std;

int fact(int n)
{
  if(n==0)
    return 1;
  return n*fact(n-1);
}

// simple:
int C(int n, int r)
{
  int t1 = fact(n);
  int t2 = fact(r);
  int t3 = fact(n-r);

  return t1/(t2*t3);
}

// using Pascal's triangle
int Cp(int n, int r)
{
  if(r==0 || n==r)
    return 1;
  else
    return Cp(n-1, r-1)+ Cp(n-1, r);
}

int main()
{
  cout<<"6C2 = "<<C(6, 2)<<endl;
  cout<<"6C2 = "<<Cp(6, 2)<<endl;
  return 0;
}