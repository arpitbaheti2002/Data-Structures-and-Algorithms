#include<bits/stdc++.h>
using namespace std;

// The trailing zeros in a factorial is created by (2, 5) pairs in the factors.
// Also, no of 5's < no of 2's
// Therefore, to find number of trailing zeros, we need to count the number
// of 5's in the factors of the factorial

// Number of trailing zeros:
// res = (n/5) + (n/25) + (n/125) + ...

int countTrailingZerosInFact(int n)
{
  int res=0;

  for(int i=5; i<=n; i*=5)
  {
    res += (n/i);
  }

  return res;
}

// Time Complexity: Θ(log n)
// Auxiliary space: Θ(1)

int main()
{
  cout<<countTrailingZerosInFact(5)<<endl;
  cout<<countTrailingZerosInFact(10)<<endl;
  cout<<countTrailingZerosInFact(100)<<endl;
  cout<<countTrailingZerosInFact(127)<<endl;
  return 0;
}