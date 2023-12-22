#include<bits/stdc++.h>
using namespace std;

// Euclidean Algorithm

int gcd(int a, int b)
{
  if(a==0)
    return b;
  
  return gcd(b%a, a);
}

int main()
{
  cout<<"gcd(4, 6) = "<<gcd(4, 6)<<endl;
  cout<<"gcd(100, 200) = "<<gcd(100, 200)<<endl;
  cout<<"gcd(7, 13) = "<<gcd(7, 13)<<endl;
  return 0;
}