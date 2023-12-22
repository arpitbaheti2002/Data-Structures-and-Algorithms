#include<bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n)
{
  for(int i=2; i*i<=n; i++)
  {
    while(n%i==0)
    {
      cout<<i<<" ";
      n = n/i;
    }
  }

  if(n>1)
    cout<<n<<" ";
}

// Time complexity: Θ(sq. root(n))
// Space complexity: Θ(1)


int main()
{
  printPrimeFactors(12);
  cout<<endl;

  printPrimeFactors(13);
  cout<<endl;

  printPrimeFactors(315);
  cout<<endl;

  printPrimeFactors(450);
  cout<<endl;

  return 0;
}