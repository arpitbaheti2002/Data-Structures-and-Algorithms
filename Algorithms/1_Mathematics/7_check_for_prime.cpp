#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  int sq = sqrt(n);
  for(int i=2; i<=sq; i++)
  {
    if(n%i==0)
      return false;
  }
  return true;
}

// Time complexity: Θ(sq. root(n))
// Space complexity: Θ(1)

// More efficient solution
bool isPrimeEfficient(int n)
{
  if(n==1)  return false;
  if(n==2 || n==3) return true;

  if(n%2==0 || n%3==0)
    return false;

  for(int i=5; i*i<=n; i++)
  {
    if(n%i==0 || n%(i+2)==0)
      return false;
  }

  return true;

}

int main()
{
  cout<<isPrime(3)<<endl;
  cout<<isPrime(14)<<endl;
  cout<<isPrime(101)<<endl;

  cout<<isPrimeEfficient(3)<<endl;
  cout<<isPrimeEfficient(14)<<endl;
  cout<<isPrimeEfficient(101)<<endl;
  return 0;
}