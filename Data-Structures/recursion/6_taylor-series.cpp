// Taylor series:-
// 1 + x + x^2/2! + x^3/3! + x^4/4! + ...

#include<iostream>
using namespace std;

// Recursive:-
float ex(int x, int n)
{
  // we take static variable numerator and denominator
  static float num=1, den=1;  
  float res;
  if(n==0)
    return 1;

  res = ex(x, n-1);
  num = num*x;
  den = den*n;
  return res + (num/den);
}

// Iterative:-
float iex(int x, int n)
{
  float res=1;
  float num=1, den=1;

  for(int i=1; i<=n; i++)
  {
    num *= x;
    den *= i;
    res += num/den;
  }
  return res;
}

int main()
{
  cout<<ex(2, 9)<<endl;
  return 0;
}