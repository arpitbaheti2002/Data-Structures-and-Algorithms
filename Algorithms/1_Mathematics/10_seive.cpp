#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  if(n==1) return false;
  if(n==2 || n==3) return true;

  if(n%2==0 || n%3==0)
    return false;
  
  for(int i=5; i*i<=n; i+=6)
  {
    if(n%i==0 || n%(i+2)==0)
      return false;
  }

  return true;
}

void seive(int n)
{
  vector<bool> primes(n+1, true);

  for(int i=2; i*i<=n; i++)
  {
    if(isPrime(i))
    {
      for(int j=2*i; j<=n; j=j+i)
      {
        primes[j] = false;
      }
    }
  }

  for(int i=2; i<=n; i++)
  {
    if(primes[i])
      cout<<i<<" ";
  }
  cout<<endl;

}

// Time Complexity: O(n log log n)

int main()
{
  seive(10);
  cout<<endl;

  seive(23);
  cout<<endl;

  return 0;
}