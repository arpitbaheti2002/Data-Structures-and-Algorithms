#include<bits/stdc++.h>
using namespace std;

// Taylor Series:
// e^x = 1 + x/1! + x^2/2! + x^3/3! + x^4/4! + ...

double e(int x, int n)
{
  static double p = 1;
  static double f = 1;

  if(n==0)
    return 1;
  
  double r = e(x, n-1);
  p *= x;
  f *= n;

  return r+p/f;
}

// using Horners rule
// e^x = 1+x/1*(1+x/2*(1+x/3*(1+x/4*(...))))

double e2(double x, int n)
{
  static double s=1;

  if(n==0)
    return s;
  
  s = 1+ x/n * s;
  return e2(x, n-1);
}

int main()
{
  cout<<e(5, 20)<<endl;
  cout<<e2(5, 20)<<endl;

  return 0;
}