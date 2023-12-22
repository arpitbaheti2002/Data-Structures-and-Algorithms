#include<bits/stdc++.h>
using namespace std;

// lcm(n, m) * gcd(n, m) = n * m
// lcm(n, m) = n * m / gcd(n, m)

int gcd(int a, int b)
{
  if(a==0)
    return b;
  
  return gcd(b%a, a);
}

int lcm(int a, int b)
{
  return (a*b) / gcd(a, b);
}

int main()
{
  cout<<"lcm(4, 6) = "<<lcm(4, 6)<<endl;
  cout<<"lcm(3, 7) = "<<lcm(3, 7)<<endl;
  return 0;
}