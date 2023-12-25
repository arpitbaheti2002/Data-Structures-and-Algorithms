#include<bits/stdc++.h>
using namespace std;

// Idea: Number of set bits in powers of 2 is 1
// 2: 000010
// 4: 000100
// 8: 001000
// 16: 010000
// 32: 100000

bool isPowOf2(int n)
{
  if(n==0)
    return false;

  return ((n&(n-1))==0);
}

int main()
{
  cout<<isPowOf2(4)<<endl;
  cout<<isPowOf2(6)<<endl;
  cout<<isPowOf2(8)<<endl;
  cout<<isPowOf2(10)<<endl;

  return 0;
}