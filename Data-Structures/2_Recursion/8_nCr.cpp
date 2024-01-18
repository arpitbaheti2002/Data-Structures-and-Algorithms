#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
  if(r==0 || r==n)
    return 1;
  
  return nCr(n-1, r) + nCr(n-1, r-1);
}

int main()
{
  cout<<nCr(4, 2)<<endl;
  cout<<nCr(3, 3)<<endl;
  cout<<nCr(6, 3)<<endl;
  return 0;
}