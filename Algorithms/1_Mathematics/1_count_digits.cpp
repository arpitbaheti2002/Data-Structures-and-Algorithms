#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
  int res=0, num=n;

  while(num>0)
  {
    res++;
    num /= 10;
  }

  return res;
}

// Time Complexity: Θ(d)    -- d is number of digits
// Auxiliary space: Θ(1)

int main()
{
  cout<<countDigits(96347014);
  return 0;
}